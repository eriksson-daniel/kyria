/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"
#include "animation.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    if (is_keyboard_master()) {
        render_animation_left();
    } else {  
        render_animation_right();
    }
    return false;
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }
    if (index == 0) {
        switch(biton32(layer_state)) {
            case 1:
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }

                return true;
            case 4:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }

                return true;
            default:
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }

                return true;

        }
    } else if (index == 1) { /* Second encoder */
        switch(biton32(layer_state)){
            case 2:
                if (clockwise) {
                    tap_code(KC_TAB);
                } else {
                    register_code(KC_LEFT_SHIFT);
                    tap_code(KC_TAB);
                    unregister_code(KC_LEFT_SHIFT);
                }
            
                return true;
            case 4:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else { 
                    tap_code(KC_VOLD);
                }

                return true;    
            default:
                if (clockwise) {
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                    tap_code(KC_UP);
                }

                return true;
        }
    }
    return true;
}
#endif

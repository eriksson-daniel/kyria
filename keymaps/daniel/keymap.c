#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_5(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_MINS, KC_EQL, MO(3), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LSFT, KC_MPLY, KC_MNXT, MO(4), KC_N, KC_M, KC_P, KC_LBRC, KC_RBRC, KC_NUHS, KC_LGUI, KC_LSFT, MO(2), KC_LCTL, KC_ENT, KC_BSPC, KC_SPC, MO(1), KC_RSFT, KC_LALT),
	[1] = LAYOUT_split_3x6_5(KC_GRV, KC_NO, KC_NO, KC_UP, KC_TAB, KC_NO, KC_F6, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_F12, KC_TRNS, KC_ESC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_NO, KC_TRNS, KC_NO, KC_APP, KC_NO, KC_CAPS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_5(KC_TRNS, RALT(KC_2), LSFT(KC_5), KC_MINS, LSFT(KC_0), LSFT(KC_DOT), RALT(KC_7), RALT(KC_0), RALT(KC_8), RALT(KC_9), LSFT(KC_NUHS), KC_NO, KC_TRNS, LSFT(KC_8), LSFT(KC_1), LSFT(KC_MINS), KC_2, LSFT(KC_SLSH), KC_NUHS, KC_COMM, KC_DOT, KC_SLSH, LSFT(KC_9), KC_NO, KC_TRNS, RALT(KC_4), KC_3, RALT(KC_RBRC), LSFT(KC_7), LSFT(KC_COMM), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, LSFT(KC_NUBS), LSFT(KC_6), KC_GRV, KC_EQL, RALT(KC_EQL), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x6_5(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_PSLS, KC_7, KC_8, KC_9, KC_PMNS, KC_NO, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_PAST, KC_4, KC_5, KC_6, KC_PPLS, KC_NO, KC_TRNS, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_1, KC_2, KC_3, KC_PEQL, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_COMM, KC_DOT),
	[4] = LAYOUT_split_3x6_5(RGB_M_P, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, BL_TOGG, BL_STEP, BL_BRTG, BL_ON, BL_UP, KC_NO, RGB_M_B, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_NO, KC_NO, BL_OFF, BL_DOWN, KC_NO, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





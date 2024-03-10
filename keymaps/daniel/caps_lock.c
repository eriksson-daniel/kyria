#include "quantum.h"

#ifdef OLED_ENABLE
bool caps(void) {
    oled_clear();

    static const char PROGMEM raw_logo[] = {
        255,255,255,255,255,255,255,255,255,255,255,255,255,127,127,127,127, 63, 63, 63, 31, 31, 31, 31, 31, 63,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,127,127,255,255,255,255,255,255,255,255,255,255,255,255,255,127, 31, 31, 31, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,127,127,127,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,127,127,127,127, 63, 63, 63, 63, 63, 63, 63, 63,
        63,127,255,255,255,255,255,255,255, 63, 31, 15,  7,  3,  1,  1,  0,  0,128,192,224,224,224,224,240,240,240,240,248,248,248,252,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127, 63, 15,  7,  3,  0,  0,  0,  9,127,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,128,248,248,248,248,240,240,240,240,224,224,192,128,  0,  1,  1,  3,  7, 31,255,255,255,255,255,255,255,255,255,255,127, 31, 15,  7,  3,  3,  1,
        1,192,192,224,224,224,240,240,240,248,248,248,252,252,254,254,254,255,255,255,255,255,255, 15,  0,  0,  0,  0,  0,  0,192,224,248,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255, 63, 15,  7,  1,  0, 64,  0,  0,128,224,248,128,  0,  0,  0,  3, 31,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,126,255,255,255,255,255,255,255,255,255,255,255,255,255,255,254,  0,  0,  0,  0,  0,  7,255,255,255,255,255,  3,  1,  1,  0,  0,  0,  0,  0,
        16,248,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  1,  0,  0,  0,  0,  0,  0,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,  7,  0,  0,  0,  0,128,224,248,252,254,255,255,255,255,240,  0,  0,  0,  0,  1, 31,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  1,  3,  1,  1,129,129,129,129,129,129,193,225,225,225,224,224,240,240,248,252,255,255,255,255,255,255,252,240,128,  0,  0,  0,  0,  0,
        0,  3, 31, 63, 63, 63,127,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,240,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127, 63,  7,  0,  0,  0,  0,  0,  6,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  6,  0,  0,  0,  0,  0,  7,255,255,255,255,255,255,248,  0,  0,  0,  0,
        0,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,254,252,252,252,248,248,240,224,128,  0,  0,  0,  1,  3,  7, 15, 31,127,255,255,255,255,255,255,255,255,255,254,240,224,192,  0,  0,  0,  7, 15, 31, 31, 31, 63, 63, 63,127,127,127,127,255,255,255,255,255,255,255,255,255,255, 15,  1,  0,  0,  0,  0,192,254,255,255,255,255,254,254,254,254,254,252,252,252,252,252,252,252,240,  0,  0,  0,  0, 15,255,255,255,255,127,  0,  0,  0,  0,
        0,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127, 28,  0,  0,  0,  0,  0,  0,


        5,255,255,255,255,255,255,255,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));

    return false;
}

bool lock(void) {
    oled_clear();

    static const char PROGMEM raw_logo[] = {
        255,255, 31, 31, 31, 63,127, 63, 63, 63,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,127,127,127,127,127, 63, 63, 31, 31, 31, 31, 31, 63, 63, 63, 63,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,127, 63, 63, 31, 31, 31, 31, 31, 31, 31, 31, 63, 31, 31,191,255,255,255, 31, 15, 15, 15, 31, 31, 31,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127, 63, 31, 31,
        63,127,255,255,255, 63,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127, 15,  7,  3,  1,  0,  0,  0,  0,192,224,240,248,248,248,252,248,248,248,240,240,224,224,224,192,192,128,  1,  1,  3,  7, 15, 31, 63,255,255,255,255,255,255,255,255,255,127, 31,  7,  3,  1,  0,  0,  0,  0,192,224,224,240,240,240,248,248,248,248,252,252,254,255,255,255,192,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,127,127, 63, 31, 15,  3,  1,
        0,192,192,240,248,252,252,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,192,248,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,254,240,  0,  0,  0,  0,  0,  0,  1,  3,  7, 15,255,127, 15,  3,  0,  0,  0,  0,  0,  0,224,252,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0, 31, 15,  7,  3,  1,
        0,128,192,192,224,248,252,254,255,255,255,255,255,255,255,255,255,255,192,  0,  0,  0,  0,  0,  0,248,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255, 15,  1,  0,  0,  0,  0,224,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255, 62,  0,  0,  0,  0,  0,  0,  0,224,254,255,  8,  0,  0,  0,  0,  0,  0,  0,248,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        56,124,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  1,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,128,  0,  0,  0,  0,  0,  3, 15,127,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,127,  1,  0,  0,  0,  0,  0,192,240,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,
        0,240,224,192,128,  0,  1,  3,  3,  7, 15, 31, 31, 63,127,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0, 63, 63, 63, 63, 63, 63,127,127,127,127,127,127,127,127,127,127,127,255,255,255,248,192,128,  0,  0,  0,  0,  0,  7,  7,  7, 15, 15, 15, 15, 15, 15, 31, 31, 31, 31, 31, 31, 31, 31, 31,  7,  1,  0,  0,192,224,240,252,254,255,255,255,255,255,255,248,224,128,  0,  0,  0,  0,  0,  3, 15, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 63,255,255,255,255,255,  0,  0,  0,  0,  0,
        0,224,255,255,255,255,255,254,254,252,248,240,224,192,  0,  0,  1,  3, 15,


        55,255,255,255,255,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));

    return false;
}
#endif
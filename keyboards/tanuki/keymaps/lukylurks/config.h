#pragma once

#undef MANUFACTURER
#undef PRODUCT

#define MANUFACTURER    Potato Inc.
#define PRODUCT         Trash Panda

/* for bootloader */
#define QMK_ESC_OUTPUT B2
#define QMK_ESC_INPUT D0
#define QMK_LED B0

/* turn off RGB when computer sleeps */
#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_SLEEP
#endif

/* send tap key if no layer key was used even after tap delay */
#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 250
#define RETRO_TAPPING
#define TAPPING_TOGGLE 2

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_UNMOD 10
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_0 1
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_1 4
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 42
#define MK_C_INTERVAL_2 16
#define MK_W_INTERVAL_UNMOD 80
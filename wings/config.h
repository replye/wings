#pragma once

#include "config_common.h"

#define VENDOR_ID       0x594D // YM
#define PRODUCT_ID      0x5769 // Wi
#define DEVICE_VER      0x0001
#define MANUFACTURER    YMDK
#define PRODUCT         Wings

#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B0, B1, B2, B3, B7 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4, F7, F6, F5, F4, F1, F0 }
#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 3

#define RGB_DI_PIN E2
#ifdef  RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

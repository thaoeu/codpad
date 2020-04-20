//Copyright 2020 thaoeu


#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Bin
#define PRODUCT         Codpad
#define DESCRIPTION     16 Keys to coding

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D4, C6, D7, E6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION ROW2COL

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0 // or D1, D2, D3, E6

#define SSD1306OLED

#define RGB_DI_PIN D3

#ifdef RGB_DI_PIN
  #define RGBLED_NUM 18
#endif

#ifdef RGB_MATRIX_ENABLE
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_KEYPRESSES
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 160

#define OLED_FONT_H "./lib/glcdfont.c"

#define ENCODERS_PAD_A { B4, B2 }
#define ENCODERS_PAD_B { B5, B6 }

#define ENCODER_RESOLUTION 4

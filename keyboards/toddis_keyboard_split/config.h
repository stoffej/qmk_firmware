// Copyright 2021 torbjorn rasmusson (@torbjorn rasmusson)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
<<<<<<< HEAD
<<<<<<< HEAD
#define MANUFACTURER torbjorn rasmusson
#define PRODUCT      toddis_keyboard_split

=======
#define MANUFACTURER torbjorn rasmussonvvvvvvvvde PRODUCT      toddis_keyboard_split
>>>>>>> 09158b691f (added rgb for layers)
=======
#define MANUFACTURER torbjorn rasmusson
#define PRODUCT      toddis_keyboard_split
<<<<<<< HEAD
 
>>>>>>> dfc172e658 (update layout)
=======

>>>>>>> 6cb2a4b607 (copy,paste and waste)

/* key matrix size */
/* Rows are doubled up */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

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
#define MATRIX_ROW_PINS { F7, F1, F4, F5 }
#define MATRIX_COL_PINS {D7, B4, B5, C6, B6, C7}


/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define USE_SERIAL
#define SOFT_SERIAL_PIN D1 /* change when adding an oled display collide with i2c */

<<<<<<< HEAD
<<<<<<< HEAD
#define SPLIT_USB_DETECT

#define RGB_DI_PIN D5
#define RGBLED_NUM 4
=======
#define EE_HANDS

#define RGB_DI_PIN D5
#define RGBLED_NUM 4
#define RGBLIGHT_SPLIT
>>>>>>> 09158b691f (added rgb for layers)
=======
#define SPLIT_USB_DETECT

#define RGB_DI_PIN D5
#define RGBLED_NUM 4
>>>>>>> dfc172e658 (update layout)
#define RGBLED_SPLIT { 2, 2 }

#define RGBLIGHT_LAYERS
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 6cb2a4b607 (copy,paste and waste)
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 200

#define UNICODE_SELECTED_MODES UC_WINC

<<<<<<< HEAD
=======
#define RGBLIGHT_LIMIT_VAL 200

>>>>>>> 09158b691f (added rgb for layers)
=======
>>>>>>> dfc172e658 (update layout)
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

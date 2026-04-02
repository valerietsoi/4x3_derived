// Copyright 2024 valerie tsoi (@valerietsoi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//vial
#define VIAL_KEYBOARD_UID {0x16, 0x73, 0x20, 0x09, 0xB3, 0x47, 0x44, 0x16}

#define DYNAMIC_KEYMAP_MACRO_COUNT 60
#define VIAL_COMBO_ENTRIES 10
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define VIAL_TAP_DANCE_ENTRIES 24

//#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
//#define VIAL_UNLOCK_COMBO_COLS {2, 2}

#define BOOTMAGIC_ROW_RIGHT {0,0}
#define BOOTMAGIC_COLUMN_RIGHT {0,0}


//#define IGNORE_MOD_TAP_INTERRUPT
//#define PERMISSIVE_HOLD


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

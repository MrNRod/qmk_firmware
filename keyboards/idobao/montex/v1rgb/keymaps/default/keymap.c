// Copyright 2022 peepeetee (@peepeetee)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │Esc│Tab│ F1│Cal│Bsp│
     * ├───┼───┼───┼───┼───┤
     * │Ctr│Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Gui│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │Alt│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Shi│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │MO1│ 0     │ . │   │
     * └───┴───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_6x5(
        QK_GESC,   KC_TAB,   KC_F1,   KC_CALC, KC_BSPC,
        KC_LCTL,   KC_NUM,   KC_PSLS, KC_PAST, KC_PMNS,
        KC_LGUI,   KC_P7,    KC_P8,   KC_P9,   KC_PPLS,
        KC_LALT,   KC_P4,    KC_P5,   KC_P6,
        KC_LSFT,   KC_P1,    KC_P2,   KC_P3,   KC_PENT,
        MO(1),     KC_P0,             KC_PDOT
    ),

    /*
     * ┌───┬───┬───┬───┬───┐
     * │Rst│TOG│MOD│PSc│SLk│
     * ├───┼───┼───┼───┼───┤
     * │Hu+│   │Sp-│Sp+│Br-│
     * ├───┼───┼───┼───┼───┤
     * │Hu-│Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤Br+│
     * │St+│ ← │   │ → │   │
     * ├───┼───┼───┼───┼───┤
     * │St-│End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤Ent│
     * │mo1│Insert │Del│   │
     * └───┴───────┴───┴───┘
     */
    [1] = LAYOUT_numpad_6x5(
        QK_BOOT, RM_TOGG, RM_NEXT, KC_PSCR, KC_SCRL,
        RM_HUEU, XXXXXXX, RM_SPDD, RM_SPDU, RM_VALD,
        RM_HUED, KC_HOME, KC_UP,   KC_PGUP, RM_VALU,
        RM_SATU, KC_LEFT, XXXXXXX, KC_RGHT,
        RM_SATD, KC_END,  KC_DOWN, KC_PGDN, KC_ENT,
        _______, KC_INS,           KC_DEL
    )
};

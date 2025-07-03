// Copyright 2023 Nico Stuhlmueller (@ThePurox)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*             ┌───┐
     *             │MUT│
     * ┌───┬───┬───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ - │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ * │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ / │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
                    KC_CALC,   KC_MAIL,
                    KC_CPNL,    TG(1)
                ),
    [1] = LAYOUT(
                    KC_COPY,   KC_PASTE,
                    KC_UNDO,    TG(0)
            )
     };
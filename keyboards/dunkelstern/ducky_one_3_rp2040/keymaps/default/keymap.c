/* Copyright 2024 dunkelstern
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
	/* 0        1        2        3        4        5        6        7        8        9        10       11       12       13       14       15 */
	   KC_SCRL, KC_PSCR, KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_F8,   KC_F7,   KC_F6,   KC_F5,   KC_F4,   KC_F3,   KC_F2,   KC_F1,   KC_PAUS, KC_ESC,     /* 0 */
	   KC_HOME, KC_INS,  KC_BSPC, KC_EQL,  KC_MINS, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_GRV,     /* 1 */
       KC_END,  KC_DEL,           KC_RBRC, KC_LBRC, KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,    KC_TAB,     /* 2 */
	   KC_PGDN, KC_PGUP, KC_ENT,  KC_NUHS, KC_QUOT, KC_SCLN, KC_L,    KC_K,    KC_J,    KC_H,    KC_G,    KC_F,    KC_D,    KC_S,    KC_A,    KC_CAPS,    /* 3 */
	   KC_RGHT, KC_UP,   KC_RSFT,          KC_SLSH, KC_DOT,  KC_COMM, KC_M,    KC_N,    KC_B,    KC_V,    KC_C,    KC_X,    KC_Z,    KC_NUBS, KC_LSFT,    /* 4 */
	   KC_DOWN, KC_LEFT, KC_RCTL, MO(1),   KC_RGUI, KC_RALT,          KC_P0,                     KC_SPC,                    KC_LALT, KC_LGUI, KC_LCTL,    /* 5 */
	   KC_PENT, KC_PDOT, KC_P3,   KC_P2,   KC_P1,   KC_PPLS, KC_P6,   KC_P5,   KC_P4,   KC_P9,   KC_P8,   KC_P7,   KC_PMNS, KC_PAST, KC_PSLS, KC_NUM,     /* 6 */
	                                                                                                               KC_VOLU, KC_VOLD, KC_MUTE, KC_CALC     /* 7 */ 
    ),
    [1] = LAYOUT(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                                                                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

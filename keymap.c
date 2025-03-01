/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "keymap_italian.h"

//todo: mancano i quattro al centro, ma posso farlo con vial
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_ESC, IT_Q, IT_W, IT_E, IT_R, IT_T,
        IT_Y, IT_U, IT_I, IT_O, IT_P, KC_BSPC,
        //
        KC_LSFT, IT_A, IT_S, IT_D, IT_F, IT_G,
        IT_H, IT_J, IT_K, IT_L, IT_QUOT, KC_DEL,
        //
        KC_LCTL, IT_Z, IT_X, IT_C, IT_V, IT_B,
        IT_N, IT_M, IT_COMM, IT_DOT, IT_SLSH, MO(2),
        //
        KC_LGUI, KC_LALT, KC_SPC,
        KC_ENT, MO(1), KC_RALT
    ),

    [1] = LAYOUT_split_3x6_3(
        
        KC_ESC, IT_BSLS, IT_EXLM, IT_DQUO, IT_EURO, IT_DLR,
        IT_PERC, IT_AMPR, IT_SLSH, IT_QUES, IT_CIRC, KC_BSPC,
        //
        KC_LSFT, KC_TAB, XXXXXXX, IT_LPRN, IT_LBRC, IT_LCBR,
        XXXXXXX, XXXXXXX,   KC_UP, IT_AT, IT_HASH, KC_DEL,
        //
        KC_LCTL, IT_LABK, IT_RABK, IT_RPRN, IT_RBRC, IT_RCBR,
        XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, MO(2),
        //
        KC_LGUI, KC_LALT, KC_SPC,
        KC_ENT, MO(1), KC_RALT
    ),

    [2] = LAYOUT_split_3x6_3(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_PPLS, KC_P7, KC_P8, KC_P9, KC_PAST, KC_BSPC,
        //
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_PMNS,  KC_P4, KC_P5, KC_P6, KC_PSLS,  KC_DEL,
        //
        KC_LCTL, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,
        KC_PDOT, KC_P1, KC_P2, KC_P3, KC_PEQL, MO(2),
        //
        KC_LGUI, KC_LALT, KC_SPC,
        KC_ENT, MO(1), KC_P0
    ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), }
};
#endif
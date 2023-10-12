/* Copyright 2022 Danny Nguyen <danny@keeb.io>
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

enum custom_keycodes {
    PLACEHOLDER = SAFE_RANGE, // can always be here
    JL_SUP_Z,
    JL_CUT_MAC,
    JL_COPY_MAC,
    JL_PASTE_MAC,
    JL_SALL_MAC,
    JL_SUP_TAB,
    JL_SUP_CTL_TAB,
};

#define JL_WARP (QK_LALT | QK_LGUI | QK_LSFT)
#define JL_STACK (QK_LALT | QK_LCTL | QK_LSFT)

#define JL_CTL_ESC MT(MOD_LCTL, KC_ESC)
#define JL_SFT_ESC MT(MOD_LSFT, KC_ESC)
#define JL_LSPC LT(1, KC_SPC)
#define JL_RSPC MT(MOD_RALT, KC_SPC)
// #define JL_RSFT MT(MOD_RSFT, KC_CAPS)
#define JL_RSFT KC_RSFT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
    KC_MPRV,        KC_MNXT,     QK_GESC,        KC_1,          KC_2,          KC_3,           KC_4,          KC_5,         KC_6,          KC_7,          KC_8,        KC_9,           KC_0,       KC_MINS,     KC_EQL,  KC_BSLS,         KC_GRV,     KC_MPLY,
    JL_CUT_MAC,     JL_SALL_MAC, KC_TAB,         KC_Q,          KC_W,          KC_E,           KC_R,          KC_T,         KC_Y,          KC_U,          KC_I,        KC_O,           KC_P,       KC_LBRC,     KC_RBRC, KC_BSPC,         KC_DEL,
    JL_SUP_CTL_TAB, KC_MCTL,     JL_CTL_ESC,     KC_A,          KC_S,          KC_D,           KC_F,          KC_G,         KC_H,          KC_J,          KC_K,        KC_L,           KC_SCLN,    KC_QUOT,     KC_NUHS, KC_ENT,          KC_PGUP,
    KC_F7,          KC_F8,       JL_SFT_ESC,     KC_NUBS,       KC_Z,          KC_X,           KC_C,          KC_V,         KC_B,          KC_N,          KC_M,        KC_COMM,        KC_DOT,     KC_SLSH,     JL_RSFT, KC_UP,           KC_PGDN,
    JL_STACK,       JL_WARP,     MO(2),          KC_LCTL,       KC_LALT,       KC_LGUI,        JL_LSPC,       JL_RSPC,      KC_RALT,       KC_RCTL,       MO(3),       KC_LEFT,        KC_DOWN,    KC_RGHT
  ),
  [1] = LAYOUT_all(
    KC_F11,         KC_F12,      KC_GRV,         KC_F1,         KC_F2,         KC_F3,          KC_F4,         KC_F5,        KC_F6,         KC_F7,         KC_F8,       KC_F9,          KC_F10,     KC_F11,      KC_F12,  KC_INS,          KC_DEL,     KC_MPLY,
    KC_F13,         KC_F14,      KC_SCROLL_LOCK, KC_HOME,       KC_MS_WH_UP,   KC_END,         KC_PGUP,       KC_PAUS,      KC_HOME,       KC_PGDN,       KC_PGUP,     KC_END,         KC_UP,      KC_MS_UP,    KC_PSCR, KC_DEL,          KC_MS_BTN3,
    KC_F15,         KC_F16,      KC_TRNS,        KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT, KC_PGDN,       KC_HOME,      KC_LEFT,       KC_DOWN,       KC_UP,       KC_RGHT,        KC_MS_LEFT, KC_MS_RIGHT, KC_TRNS, KC_MS_BTN1,      KC_MS_BTN2,
    KC_F17,         KC_F18,      KC_TRNS,        KC_TRNS,       JL_SUP_Z,      JL_CUT_MAC,     JL_COPY_MAC,   JL_PASTE_MAC, KC_PGUP,       KC_DOWN,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_MS_DOWN,  KC_TRNS, KC_TRNS,         KC_TRNS,
    KC_F19,         KC_F20,      KC_TRNS,        KC_TRNS,       KC_TRNS,       KC_TRNS,        KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRNS
  ),
  [2] = LAYOUT_all(
    KC_F21,         KC_F22,      KC_LPAD,        KC_BRID,       KC_BRIU,       KC_MCTL,        KC_WWW_SEARCH, KC_TRNS,      KC_TRNS,       KC_MPRV,       KC_MPLY,     KC_MNXT,        KC_MUTE,    KC_VOLD,     KC_VOLU, KC_TRNS,         KC_TRNS,    KC_MPLY,
    KC_F23,         KC_F24,      KC_TRNS,        KC_MS_BTN1,    KC_MS_UP,      KC_MS_BTN2,     KC_TRNS,       KC_TRNS,      KC_HOME,       KC_PGDN,       KC_PGUP,     KC_END,         KC_UP,      KC_MS_UP,    KC_TRNS, KC_TRNS,         KC_TRNS,
   KC_TRNS,         KC_TRNS,     KC_CAPS,        KC_MS_LEFT,    KC_MS_DOWN,    KC_MS_RIGHT,    KC_TRNS,       KC_TRNS,      KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, KC_MS_LEFT, KC_MS_RIGHT, KC_TRNS, KC_PENT,         KC_TRNS,
    KC_TRNS,        KC_TRNS,     KC_MPLY,        KC_TRNS,       KC_MPRV,       KC_MNXT,        KC_VOLD,       KC_VOLU,      KC_MUTE,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_MS_DOWN,  KC_TRNS, KC_TRNS,         KC_TRNS,
    KC_TRNS,        KC_TRNS,     KC_TRNS,        KC_TRNS,       KC_TRNS,       KC_TRNS,        KC_CAPS,       KC_CAPS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRNS
  ),
  [3] = LAYOUT_all(
    KC_F21,         KC_F22,      KC_LPAD,        KC_BRID,       KC_BRIU,       KC_MCTL,        KC_WWW_SEARCH, KC_TRNS,      KC_TRNS,       KC_MPRV,       KC_MPLY,     KC_MNXT,        KC_MUTE,    KC_VOLD,     KC_VOLU, QK_CLEAR_EEPROM, QK_BOOT,    KC_MPLY,
    KC_F23,         KC_F24,      RGB_TOG,        RGB_RMOD,      RGB_MOD,       RGB_HUD,        RGB_HUI,       RGB_SAD,      RGB_SAI,       RGB_VAD,       RGB_VAI,     RGB_SPD,        RGB_SPI,    KC_MS_UP,    KC_TRNS, KC_TRNS,         KC_TRNS,
    KC_TRNS,        KC_TRNS,     KC_TRNS,        RGB_M_P,       RGB_M_B,       RGB_M_R,        RGB_M_SW,      RGB_M_SN,     RGB_M_K,       RGB_M_X,       RGB_M_G,     KC_TRNS,        KC_MS_LEFT, KC_MS_RIGHT, KC_TRNS, KC_PENT,         KC_TRNS,
    KC_TRNS,        KC_TRNS,     KC_TRNS,        KC_TRNS,       KC_TRNS,       KC_TRNS,        KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_MS_DOWN,  KC_TRNS, KC_TRNS,         KC_TRNS,
    KC_TRNS,        KC_TRNS,     KC_TRNS,        KC_TRNS,       KC_TRNS,       KC_TRNS,        KC_CAPS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRNS
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
	[1] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(KC_MNXT, KC_MPRV) },
	[2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(KC_MNXT, KC_MPRV) },
	[3] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(KC_MNXT, KC_MPRV) },
};
#endif

#define PREFER_TAP 200
#define PREFER_HOLD 130

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JL_SFT_ESC:
        case JL_CTL_ESC:
            // prefer hold: want ctrl more than esc, ctrl+? is easer to
            // trigger, less time to hold, e.g. typing ctrl+a,a is easier, but
            // if esc wanted, down & up needs to complete faster
            return PREFER_HOLD;
        case JL_RSPC:
            // prefer tap: want space more than rgui; rgui+? is harder to
            // trigger, need to hold longer. E.g. rgui needs to be held longer,
            // otherwise space will be emitted
            return PREFER_TAP;
        case JL_RSFT:
            return PREFER_HOLD;
        case JL_LSPC:
            return PREFER_TAP+50;
        default:
            return TAPPING_TERM;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case JL_SUP_Z:
                SEND_STRING(SS_LGUI("z"));
                break;
            case JL_SALL_MAC:
                SEND_STRING(SS_LGUI("a"));
                break;
            case JL_CUT_MAC:
                SEND_STRING(SS_LGUI("x"));
                break;
            case JL_COPY_MAC:
                SEND_STRING(SS_LGUI("c"));
                break;
            case JL_PASTE_MAC:
                SEND_STRING(SS_LGUI("v"));
                break;
        }
    }

    if (keycode == JL_SUP_TAB) {
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LGUI));
            SEND_STRING(SS_TAP(X_TAB));
        } else {
            SEND_STRING(SS_UP(X_LGUI));
        }
    }

    if (keycode == JL_SUP_CTL_TAB) {
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LGUI));
            SEND_STRING(SS_DOWN(X_LCTL));
            SEND_STRING(SS_TAP(X_TAB));
        } else {
            SEND_STRING(SS_UP(X_LGUI));
            SEND_STRING(SS_UP(X_LCTL));
        }
    }

    return true;
};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JL_LSPC:
            return true;
        case JL_SFT_ESC:
        case JL_CTL_ESC:
            return false;
        default:
            return false;
    }
}

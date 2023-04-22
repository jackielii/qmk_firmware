#include QMK_KEYBOARD_H

// /* LAYOUT_all
//  * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
//  * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d │0e │
//  * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
//  * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │
//  * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
//  * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │
//  * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┬───┤
//  * │30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c │3d │3e │
//  * ├───┴┬──┴─┬─┴──┬┴───┴───┼───┴┬──┴───┴───┼───┼───┼───┼───┼───┤
//  * │40  │41  │43  │44      │46  │48        │4a │4b │4c │4d │4e │
//  * └────┴────┴────┴────────┴────┴──────────┴───┴───┴───┴───┴───┘
// */

enum custom_keycodes {
    PLACEHOLDER = SAFE_RANGE, // can always be here
    JL_CUT_MAC,
    JL_COPY_MAC,
    JL_PASTE_MAC,
    JL_SALL_MAC,
    JL_SUP_TAB,
};

#define JL_WARP (QK_LALT | QK_LGUI | QK_LSFT)
#define JL_STACK (QK_LALT | QK_LCTL | QK_LSFT)

#define JL_CAPS MT(MOD_LCTL, KC_ESC)
#define JL_LSPC LT(1, KC_SPC)
#define JL_RSPC MT(MOD_RGUI, KC_SPC)

/*
 #define LAYOUT_all( \
     k00,      k01,     k02,     k03,     k04,     k05,     k06,     k07,     k08,     k09,     k0a,      k0b,     k0c,     k0d,     k0e,     \
     k10,      k12,     k13,     k14,     k15,     k16,     k17,     k18,     k19,     k1a,     k1b,      k1c,     k1d,     k1e,     \
     k20,      k22,     k23,     k24,     k25,     k26,     k27,     k28,     k29,     k2a,     k2b,      k2c,     k2d,     \
     k30,      k31,     k32,     k33,     k34,     k35,     k36,     k37,     k38,     k39,     k3a,      k3b,     k3c,     k3d,     k3e,     \
     k40,      k41,     k43,     k44,     k46,     k48,     k4a,     k4b,     k4c,     k4d,     k4e  \
 )
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_all(
		KC_GRV,         KC_1,       KC_2,       KC_3,        KC_4,          KC_5,         KC_6,          KC_7,          KC_8,        KC_9,           KC_0,       KC_MINS,         KC_EQL,  KC_NO,   KC_BSLS,
		KC_TAB,         KC_Q,       KC_W,       KC_E,        KC_R,          KC_T,         KC_Y,          KC_U,          KC_I,        KC_O,           KC_P,       KC_LBRC,         KC_RBRC, KC_BSPC,
		JL_CAPS,        KC_A,       KC_S,       KC_D,        KC_F,          KC_G,         KC_H,          KC_J,          KC_K,        KC_L,           KC_SCLN,    KC_QUOT,         KC_ENT,
		KC_LSFT,        KC_NO,      KC_Z,       KC_X,        KC_C,          KC_V,         KC_B,          KC_N,          KC_M,        KC_COMM,        KC_DOT,     KC_SLSH,         KC_RSFT, KC_UP,   MO(3),
		MO(2),          KC_LCTL,    KC_LGUI,    JL_LSPC,     KC_LALT,       JL_RSPC,      KC_RALT,       KC_RGUI,       KC_LEFT,     KC_DOWN,        KC_RGHT),

	LAYOUT_all(
		KC_GRV,         KC_F1,      KC_F2,      KC_F3,       KC_F4,         KC_F5,        KC_F6,         KC_F7,         KC_F8,       KC_F9,          KC_F10,     KC_F11,          KC_F12,  KC_NO,   KC_TRNS,
		KC_SCROLL_LOCK, KC_HOME,    KC_UP,      KC_END,      KC_PGUP,       KC_PAUS,      KC_HOME,       KC_PGDN,       KC_PGUP,     KC_END,         KC_UP,      KC_MS_UP,        KC_PSCR, KC_DEL,
		KC_TRNS,        KC_LEFT,    KC_DOWN,    KC_RGHT,     KC_PGDN,       KC_HOME,      KC_LEFT,       KC_DOWN,       KC_UP,       KC_RGHT,        KC_MS_LEFT, KC_MS_RIGHT,     KC_TRNS,
		KC_TRNS,        KC_NO,      KC_BSLS,    JL_CUT_MAC,  JL_COPY_MAC,   JL_PASTE_MAC, KC_PGUP,       KC_DOWN,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_MS_DOWN,      KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS),

	LAYOUT_all(
		KC_LPAD,        KC_BRID,    KC_BRIU,    KC_MCTL,     KC_WWW_SEARCH, KC_TRNS,      KC_TRNS,       KC_MPRV,       KC_MPLY,     KC_MNXT,        KC_MUTE,    KC_VOLD,         KC_VOLU, KC_TRNS, KC_TRNS,
		KC_TRNS,        KC_MS_BTN1, KC_MS_UP,   KC_MS_BTN2,  KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_MS_UP,        KC_TRNS, KC_TRNS,
		KC_CAPS,        KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS,       KC_TRNS,      KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, KC_MS_LEFT, KC_MS_RIGHT,     KC_TRNS,
		KC_MPLY,        KC_TRNS,    KC_MPRV,    KC_MNXT,     KC_VOLD,       KC_VOLU,      KC_MUTE,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_MS_DOWN,      KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_CAPS,     KC_TRNS,       KC_CAPS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS),

	LAYOUT_all(
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    QK_CLEAR_EEPROM, QK_BOOT, KC_NO,   KC_TRNS,
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS,
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRNS,         KC_TRNS,
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,        KC_TRNS),

};

#define PREFER_TAP 220
#define PREFER_HOLD 130

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JL_CAPS:
            // prefer hold: want ctrl more than esc, ctrl+? is easer to
            // trigger, less time to hold, e.g. typing ctrl+a,a is easier, but
            // if esc wanted, down & up needs to complete faster
            return PREFER_HOLD;
        case JL_RSPC:
            // prefer tap: want space more than rgui; rgui+? is harder to
            // trigger, need to hold longer. E.g. rgui needs to be held longer,
            // otherwise space will be emitted
            return PREFER_TAP;
        case JL_LSPC:
            return PREFER_TAP+50;
        default:
            return TAPPING_TERM;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
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

    return true;
};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JL_LSPC:
            return true;
        case JL_CAPS:
            return false;
        default:
            return false;
    }
}

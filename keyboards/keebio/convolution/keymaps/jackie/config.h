#pragma once

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
#define TAPPING_TERM 250
#define TAPPING_TERM_PER_KEY

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#hold-on-other-key-press
// #define HOLD_ON_OTHER_KEY_PRESS

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#ignore-mod-tap-interrupt
#define IGNORE_MOD_TAP_INTERRUPT

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#permissive-hold
#define PERMISSIVE_HOLD

// Holding and releasing a dual-function key without pressing another key will
// result in nothing happening. With retro tapping enabled, releasing the key
// without pressing another will send the original keycode even if it is
// outside the tapping term. For instance, holding and releasing LT(2, KC_SPC)
// without hitting another key will result in nothing happening. With this
// enabled, it will send KC_SPC instead.
#define RETRO_TAPPING
#define RETRO_TAPPING_PER_KEY


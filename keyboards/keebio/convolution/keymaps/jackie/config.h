#pragma once

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
#define TAPPING_TERM 50

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md#hold-on-other-key-press
#define HOLD_ON_OTHER_KEY_PRESS

// Holding and releasing a dual-function key without pressing another key will
// result in nothing happening. With retro tapping enabled, releasing the key
// without pressing another will send the original keycode even if it is
// outside the tapping term. For instance, holding and releasing LT(2, KC_SPC)
// without hitting another key will result in nothing happening. With this
// enabled, it will send KC_SPC instead.
#define RETRO_TAPPING

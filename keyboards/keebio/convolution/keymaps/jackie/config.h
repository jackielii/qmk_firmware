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

#define MK_KINETIC_SPEED                        // Enable Kinetic mode:  Uses a quadratic curve on cursor speed to allow precise movements at the beginning and increases speed thereafter.
#define MOUSEKEY_DELAY 1                        // Delay between pressing a movement key and cursor movement (default: 10)
#define MOUSEKEY_INTERVAL 16                    // Time between cursor movements in milliseconds (default: 20); Try setting to 1000/monitor refresh for smooth movement. 1000/60 = 16.6667
#define MOUSEKEY_MOVE_DELTA 16                  // Step size for accelerating from initial to base speed (default: 8)
#define MOUSEKEY_MOVE_MAX 127                   // use instead of BASE SPEED to limit speed in Kinetic mode
#define MOUSEKEY_INITIAL_SPEED 150              // Initial speed of the cursor in pixels per second (default: 100)
//#define MOUSEKEY_BASE_SPEED 800               // (broken in QMK 0.16.0) Maximum cursor speed at which acceleration stops (default: 1000)
#define MOUSEKEY_DECELERATED_SPEED 400          // Decelerated cursor speed (default: 400)
#define MOUSEKEY_ACCELERATED_SPEED 2000         // Accelerated cursor speed (default: 3000)
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 32     // Initial number of movements of the mouse wheel (default: 16)
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 128       // Maximum number of movements at which acceleration stops (default: 32)
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 64 // Accelerated wheel movements (default: 48)
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8  // Decelerated wheel movements (default: 8)

// #define MOUSEKEY_INERTIA
// #define MOUSEKEY_WHEEL_DELAY 10
// #define MOUSEKEY_WHEEL_INTERVAL 50
// #define MOUSEKEY_WHEEL_DELTA 1
// #define MOUSEKEY_WHEEL_MAX_SPEED 32
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 20

#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0: Default
    KEYMAP(
        TAB, Q,   W,   E,   R,   T,             Y,   U,   I,   O,   P,   MINS,\
        FN5, A,   S,   D,   F,   G,   HOME,PGUP,H,   J,   K,   L,   SCLN,QUOT,\
        FN7, Z,   X,   C,   V,   B,   END, PGDN,N,   M,   COMM,DOT, SLSH,FN8, \
        WH_D,WH_U,LGUI,LALT,FN5, FN1, FN3, FN4, FN2, FN6, LEFT,DOWN,UP,  RGHT),

    // Layer 1: Symbols and numpad
    KEYMAP(
        FN10,FN11,FN12,FN21,FN22,FN23,          FN15,7,   8,   9,   MINS,BSPC,\
        TRNS,FN13,FN14,FN19,FN20,BSLS,NO,  NO,  SLSH,4,   5,   6,   FN24,FN25,\
        TRNS,FN16,FN17,LBRC,RBRC,FN26,NO,  NO,  FN18,1,   2,   3,   EQL, TRNS,\
        NO,  GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,0,   COMM,DOT, ENT, NO),

    // Layer 2: Navigation and F keys
    KEYMAP(
        NO,  PGUP,HOME,UP,  END, NO,            NO,  WBAK,MS_U,WFWD,WH_U,NO,  \
        TRNS,PGDN,LEFT,DOWN,RGHT,NO,  NO,  NO,  NO,  MS_L,MS_D,MS_R,WH_D,NO,  \
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,\
        NO,  NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN1,BTN3,BTN2,PAUS,NO,  NO),
};

// Maximum of 32 function actions
const uint16_t PROGMEM fn_actions[] = {
    // Layer switching and mods
    [1]  = ACTION_LAYER_TAP_KEY(1, KC_BSPACE),
    [2]  = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [3]  = ACTION_LAYER_TAP_KEY(2, KC_DELETE),
    [4]  = ACTION_LAYER_TAP_KEY(2, KC_ENTER),
    [5]  = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE),
    [6]  = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_TAB),
    [7]  = ACTION_MODS_ONESHOT(MOD_LSFT),
    [8]  = ACTION_MODS_ONESHOT(MOD_RSFT),

    // Symbols
    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_GRAVE),    // ~
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_1),        // !
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_2),        // @
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_3),        // #
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_4),        // $
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_5),        // %
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),        // ^
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_7),        // &
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_8),        // *
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_9),        // (
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_0),        // )
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET), // {
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET), // }
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),   // |
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_EQUAL),    // +
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOTE),    // "
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_MINUS),    // _
};


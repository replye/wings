#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _COLEMAK,
    _FUNCTION,
    _LAYER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_wings(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,     KC_6,       KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,                DF(_QWERTY),
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,               DF(_COLEMAK),
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,     KC_G,                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                MO(2),
        KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,                 KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,                        KC_UP,
        KC_LCTL,          KC_LALT,          KC_SPC,             KC_LWIN,    KC_SPC,           KC_RALT,                                          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_COLEMAK] = LAYOUT_wings(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,     KC_6,       KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,                DF(_QWERTY),
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,     KC_B,                 KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSPC,               DF(_COLEMAK),
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,     KC_G,                 KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,          KC_ENT,                KC_TRNS,
        KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_D,     KC_V,                 KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,                        KC_UP,
        KC_LCTL,          KC_LALT,          KC_SPC,             KC_LWIN,    KC_SPC,           KC_RALT,                                          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FUNCTION] = LAYOUT_wings(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,    KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,               RESET,
        KC_TRNS, RGB_TOG, RGB_M_P, RGB_M_SN, RGB_M_B, RGB_M_SW,             RGB_M_K, RGB_M_X, RGB_M_B, RGB_M_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               EEP_RST,
        KC_TRNS, KC_TRNS, RGB_VAI, RGB_HUI,  RGB_SAI, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,
        KC_TRNS, KC_TRNS, RGB_VAD, RGB_HUD,  RGB_SAD, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,
        KC_TRNS,          KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,          KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_LAYER] = LAYOUT_wings(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,               KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,
        KC_TRNS,          KC_TRNS,           KC_TRNS,           KC_TRNS,    KC_TRNS,          KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS
    )
};

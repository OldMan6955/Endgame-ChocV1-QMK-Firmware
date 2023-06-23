#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x10(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    RALT_T(KC_G),    RALT_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_QUOT),
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_MINUS, KC_NO,   KC_NO,   LT(2,KC_ENT),  KC_SPC,  LT(1,KC_SPC),  KC_BSPC, KC_NO,   KC_NO,   KC_PLUS
    ),

    [1] = LAYOUT_ortho_4x10(
        KC_Q,    KC_7,    KC_8,    KC_9,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_Q,    KC_4,    KC_5,    KC_6,    KC_ENT,    RALT_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_QUOT),
        KC_Z,    KC_1,    KC_2,    KC_3,    KC_ESC,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LSFT, KC_NO,   KC_NO,   KC_MINUS,  KC_0,  KC_SPC,  KC_DEL, KC_NO,   KC_NO,   KC_LSFT
    ),

    [2] = LAYOUT_ortho_4x10(
        KC_Q,    KC_7,    KC_8,    KC_9,    KC_T,    KC_Y,    KC_U,    KC_UP,    KC_O,    KC_P,
        KC_Q,    KC_4,    KC_5,    KC_6,    KC_ENT,    KC_NO,   KC_LEFT,   KC_DOWN,   KC_RIGHT,   KC_NO,
        KC_Z,    KC_1,    KC_2,    KC_3,    KC_ESC,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LSFT, KC_NO,   KC_NO,   KC_ESC,  KC_ENT,  KC_SPC,  KC_BSPC, KC_NO,   KC_NO,   KC_LSFT
    )
};

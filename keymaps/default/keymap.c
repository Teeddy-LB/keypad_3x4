#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_1,   KC_2,   KC_3, \
        KC_4,   KC_5,   KC_6, \
        KC_7,   KC_8,   KC_9, \
        KC_DEL, KC_0, MO(_FN1)
    ),
    [_FN1] = LAYOUT(
        KC_PAUS,KC_MRWD,KC_MFFD,\
        KC_CPNL,KC_NO,KC_CALC,\
        KC_PWR,KC_WAKE,KC_SLEP,\
        KC_NO,KC_NO,KC_NO,
    )
};

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/

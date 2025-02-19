#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_DLR,                                         ST_MACRO_0,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           MO(4),                                          MO(4),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_RIGHT_CTRL,
    MO(5),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_COLN,        MO(5),
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           LT(2,KC_TAB),                                   MO(2),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       SC_RSPC,
    KC_GRAVE,       KC_QUOTE,       KC_BSLS,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_LBRC,        KC_RBRC,        MO(1),
                                                                                                    LCTL(KC_LEFT_ALT),LCTL(KC_LEFT_SHIFT),RCTL(KC_RIGHT_SHIFT),RCTL(KC_RIGHT_ALT),
                                                                                                                    KC_MEH,         KC_MEH,
                                                                                    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_RIGHT_ALT,   KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    QK_BOOT,        KC_TRANSPARENT, TO(5),          TO(4),          TO(2),          TO(3),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,      KC_NUM,         KC_SCRL,        KC_CAPS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LCTL(LSFT(KC_F1)),LCTL(LSFT(KC_SPACE)),LCTL(LSFT(KC_COMMA)),KC_F1,          LCTL(LSFT(KC_T)),LCTL(LSFT(KC_BSPC)),                                LALT(KC_F5),    KC_F5,          KC_F9,          KC_F10,         LSFT(KC_F7),    LCTL(KC_F10),   LALT(KC_DELETE),
    LCTL(KC_TAB),   LSFT(KC_F3),    KC_F3,          LCTL(KC_F),     LCTL(KC_R),     LCTL(KC_T),     KC_TRANSPARENT,                                 LSFT(KC_F5),    LALT(LCTL(KC_LEFT)),LCTL(LSFT(KC_B)),LALT(KC_INSERT),LSFT(KC_F11),   LALT(LCTL(KC_F9)),LCTL(LSFT(KC_L)),
    LCTL(LSFT(KC_F)),LCTL(LSFT(KC_A)),LSFT(KC_F12),   LALT(KC_GRAVE), KC_F12,         LALT(KC_HOME),                                                                  LALT(LCTL(KC_RIGHT)),LALT(KC_ENTER), LALT(LCTL(KC_SLASH)),KC_F11,         ST_MACRO_1,     KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_END),   LALT(LCTL(LSFT(KC_A))),LCTL(LSFT(KC_F11)),LCTL(KC_F12),   LALT(LSFT(KC_F11)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_LBRC)),LCTL(LSFT(KC_R)),KC_LEFT_ALT,    LALT(LSFT(KC_PAGE_UP)),LALT(LSFT(KC_PGDN)),KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_COMMA), LALT(KC_BSLS),  LCTL(KC_KP_MINUS),LCTL(LSFT(KC_KP_MINUS)),                                                                                                LALT(LCTL(LSFT(KC_UP))),LALT(LCTL(LSFT(KC_DOWN))),LALT(LCTL(LSFT(KC_LEFT))),LALT(LCTL(LSFT(KC_RIGHT))),TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_SPACE)),
                                                                                                                    LALT(LSFT(KC_2)),KC_TRANSPARENT,
                                                                                    KC_TAB,         LALT(LSFT(KC_1)),LALT(LSFT(KC_3)),KC_TRANSPARENT, LCTL(LSFT(KC_ENTER)),LCTL(KC_SPACE)
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT,
    KC_I,           KC_J,           KC_M,           KC_Y,           KC_L,                                                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_5,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_6,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,        LCTL(LSFT(KC_BSPC)),
    KC_TRANSPARENT, KC_PGDN,        KC_UP,          KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_Y),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_LEFT),  LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_RIGHT),                                                                                                 KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_DELETE,
    KC_TRANSPARENT, KC_CIRC,        KC_KP_ASTERISK, KC_LCBR,        KC_RCBR,        KC_COMMA,       KC_TRANSPARENT,                                 ST_MACRO_4,     KC_BSLS,        KC_COLN,        KC_QUES,        KC_TILD,        KC_PERC,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_KP_PLUS,     KC_MINUS,       KC_LABK,        KC_RABK,        KC_DOT,                                                                         KC_QUOTE,       KC_DQUO,        KC_SCLN,        KC_PIPE,        KC_AMPR,        KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_2,     KC_KP_SLASH,    KC_LBRC,        KC_RBRC,        KC_EQUAL,       ST_MACRO_3,                                     ST_MACRO_5,     KC_AT,          KC_EXLM,        KC_DLR,         KC_UNDS,        ST_MACRO_6,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,                                                                                                         KC_PAGE_UP,     KC_PGDN,        KC_LPRN,        KC_RPRN,        TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_E)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;

  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};




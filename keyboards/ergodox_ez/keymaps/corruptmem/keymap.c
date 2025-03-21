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
  ST_RESET_STATE,
};


// LAYER 0: https://www.keyboard-layout-editor.com/##@@_x:3.5%3B&=%23%0A3&_x:10.5%3B&=*%0A8%3B&@_y:-0.875&x:2.5%3B&=%2F@%0A2&_x:1%3B&=$%0A4&_x:8.5%3B&=%2F&%0A7&_x:1%3B&=(%0A9%3B&@_y:-0.875&x:5.5%3B&=%25%0A5&_a:7%3B&=$&_x:4.5%3B&=%C2%A3&_a:4%3B&=%5E%0A6%3B&@_y:-0.875&a:7&w:1.5%3B&=Esc&_a:4%3B&=!%0A1&_x:14.5%3B&=)%0A0&_a:7&w:1.5%3B&=Backspace%3B&@_y:-0.375&x:3.5&a:4%3B&=E&_x:10.5%3B&=I%3B&@_y:-0.875&x:2.5%3B&=W&_x:1%3B&=R&_x:8.5%3B&=U&_x:1%3B&=O%3B&@_y:-0.875&x:5.5%3B&=T&_a:5&fa@:1&:0&:0&:0&:0&:0&:2%3B&h:1.5%3B&=MO%0A%0A%0A%0A%0A%0ALayer%204&_x:4.5&h:1.5%3B&=MO%0A%0A%0A%0A%0A%0ALayer%204&_a:4&f:3%3B&=Y%3B&@_y:-0.875&a:7&f:3&w:1.5%3B&=Tab&_a:4&f:3%3B&=Q&_x:14.5&f:3%3B&=P&_a:7&f:3&w:1.5%3B&=R%20CTRL%3B&@_y:-0.375&x:3.5&a:4&f:3%3B&=D&_x:10.5&f:3%3B&=K%3B&@_y:-0.875&x:2.5&f:3%3B&=S&_x:1&f:3%3B&=F&_x:8.5&f:3%3B&=J&_x:1&f:3%3B&=L%3B&@_y:-0.875&x:5.5&f:3%3B&=G&_x:6.5&f:3%3B&=H%3B&@_y:-0.875&a:5&fa@:1%3B&w:1.5%3B&=MO%0A%0A%0A%0A%0A%0ALayer%205&_a:4&f:3%3B&=A&_x:14.5&f:3%3B&=%2F:%0A%2F%3B&_a:5&f:3&w:1.5%3B&=MO%0A%0A%0A%0A%0A%0ALayer%205%3B&@_y:-0.625&x:6.5&fa@:1&:0&:0&:0&:0&:0&:2%3B&h:1.5%3B&=LT%0ATAB%0A%0A%0A%0A%0ALayer%202&_x:4.5&h:1.5%3B&=MO%0A%0A%0A%0A%0A%0ALayer%202%3B&@_y:-0.75&x:3.5&a:4&f:3%3B&=C&_x:10.5&f:3%3B&=%3C%0A,%3B&@_y:-0.875&x:2.5&f:3%3B&=X&_x:1&f:3%3B&=V&_x:8.5&f:3%3B&=M&_x:1&f:3%3B&=%3E%0A.%3B&@_y:-0.875&x:5.5&f:3%3B&=B&_x:6.5&f:3%3B&=N%3B&@_y:-0.875&a:5&fa@:0&:0&:0&:0&:0&:0&:1%3B&w:1.5%3B&=Shift%0A(%0A%0A%0A%0A%0ASpace%20Cadet&_a:4%3B&=Z&_x:14.5%3B&=%3F%0A%2F%2F&_a:5&w:1.5%3B&=Shift%0A)%0A%0A%0A%0A%0ASpace%20Cadet%3B&@_y:-0.375&x:3.5&a:7%3B&=%E2%86%90&_x:10.5%3B&=%E2%86%93%3B&@_y:-0.875&x:2.5&a:5%3B&=%7C%0A%5C&_x:1&a:7%3B&=%E2%86%92&_x:8.5%3B&=%E2%86%91&_x:1&a:5%3B&=%7B%0A%5B%3B&@_y:-0.75&x:0.5&fa@:5&:7%3B%3B&=~%0A%60&_fa@:6&:6%3B%3B&=%22%0A'&_x:14.5&f:3%3B&=%7D%0A%5D&_fa@:1&:6&:0&:0&:0&:0&:2%3B%3B&=MO%0A%0A%0A%0A%0A%0ALayer%201%3B&@_r:30&rx:6.5&ry:4.25&y:-1&x:1&f:3%3B&=LCTRL%0A%0A%0A%0A%0A%0ALALT&_f:3%3B&=LCTRL%0A%0A%0A%0A%0A%0ALSHIFT%3B&@_a:7&f:3&h:2%3B&=LCTRL&_f:3&h:2%3B&=LWIN&_a:5&f:3%3B&=LCTRL%0ALALT%0A%0A%0A%0A%0ALSHIFT%3B&@_x:2&a:7&f:3%3B&=LALT%3B&@_r:-30&rx:13&y:-1&x:-3&a:5&f:3%3B&=RCTRL%0A%0A%0A%0A%0A%0ARSHIFT&_f:3%3B&=RCTRL%0A%0A%0A%0A%0A%0ARALT%3B&@_x:-3&f:3%3B&=LCTRL%0ALALT%0A%0A%0A%0A%0ALSHIFT&_a:7&fa@:2%3B&h:2%3B&=ENTER&_h:2%3B&=SPACE%3B&@_x:-3&f:3%3B&=RALT
// LAYER 1: https://www.keyboard-layout-editor.com/##@@_x:3.5&a:5&fa@:1&:0&:0&:0&:0&:0&:2%3B%3B&=TO%0A%0A%0A%0A%0A%0ALayer%204&_x:10.5&f:3%3B&=%0ALOCK%0A%0A%0A%0A%0ANUM%3B&@_y:-0.875&x:2.5&f:3%3B&=TO%0A%0A%0A%0A%0A%0ALayer%205&_x:1&f:3%3B&=TO%0A%0A%0A%0A%0A%0ALayer%202&_x:8.5&a:7&f:3%3B&=INS&_x:1&a:4%3B&=%0A%0A%0ALOCK%0A%0A%0A%0ASCRL%3B&@_y:-0.875&x:5.5&a:5&f:3%3B&=TO%0A%0A%0A%0A%0A%0ALayer%203&_a:7%3B&=&_x:4.5%3B&=&=%3B&@_y:-0.875&f:3&w:1.5%3B&=QMK&=&_x:14.5&a:4%3B&=%0A%0A%0ALOCK%0A%0A%0A%0ACAPS&_a:7&w:1.5%3B&=%3B&@_y:-0.375&x:3.5%3B&=&_x:10.5%3B&=%3B&@_y:-0.875&x:2.5%3B&=&_x:1%3B&=&_x:8.5%3B&=&_x:1%3B&=%3B&@_y:-0.875&x:5.5%3B&=&_h:1.5%3B&=&_x:4.5&h:1.5%3B&=&=%3B&@_y:-0.875&w:1.5%3B&=&=&_x:14.5%3B&=&_w:1.5%3B&=%3B&@_y:-0.375&x:3.5%3B&=&_x:10.5%3B&=%3B&@_y:-0.875&x:2.5%3B&=&_x:1%3B&=&_x:8.5%3B&=&_x:1%3B&=%3B&@_y:-0.875&x:5.5%3B&=&_x:6.5%3B&=%3B&@_y:-0.875&w:1.5%3B&=&=&_x:14.5%3B&=&_w:1.5%3B&=%3B&@_y:-0.625&x:6.5&h:1.5%3B&=&_x:4.5&h:1.5%3B&=%3B&@_y:-0.75&x:3.5%3B&=&_x:10.5%3B&=%3B&@_y:-0.875&x:2.5%3B&=&_x:1%3B&=&_x:8.5%3B&=&_x:1%3B&=%3B&@_y:-0.875&x:5.5%3B&=&_x:6.5%3B&=%3B&@_y:-0.875&w:1.5%3B&=&=&_x:14.5%3B&=&_w:1.5%3B&=%3B&@_y:-0.375&x:3.5%3B&=&_x:10.5%3B&=%3B&@_y:-0.875&x:2.5%3B&=&_x:1%3B&=&_x:8.5%3B&=&_x:1%3B&=%3B&@_y:-0.75&x:0.5%3B&=&=&_x:14.5%3B&=&=%3B&@_r:30&rx:6.5&ry:4.25&y:-1&x:1%3B&=&=%3B&@_h:2%3B&=&_h:2%3B&=&=%3B&@_x:2%3B&=%3B&@_r:-30&rx:13&y:-1&x:-3%3B&=&=%3B&@_x:-3%3B&=&_h:2%3B&=&_h:2%3B&=%3B&@_x:-3%3B&=
// LAYER 2: https://www.keyboard-layout-editor.com/##@@_x:3.5&a:5&fa@:1&:1&:0&:0&:0&:0&:0%3B%3B&=CS%20COMMA%0ARecently%20changed&_x:10.5%3B&=F10%0AStep%20over%3B&@_y:-0.875&x:2.5%3B&=CS%20Space%0AParam%20Info&_x:1%3B&=F1%0AContext%20help&_x:8.5%3B&=F9%0AToggle%20Breakpnt&_x:1%3B&=S%20F7%0ASmart%20step%20into%3B&@_y:-0.875&x:5.5%3B&=CS%20T%0AGoto%20file&=CS%20Bspc%0ALast%20edit&_x:4.5%3B&=A%20F5%0ADebug&=F5%0AContinue%3B&@_y:-0.875&a:7&w:1.5%3B&=&_a:5%3B&=CS%20F1%0AQuick%20docs&_x:14.5%3B&=C%20F10%0ARun%20cursor&_w:1.5%3B&=A%20DEL%0ASafe%20delete%3B&@_y:-0.375&x:3.5%3B&=C%20F%0AFind&_x:10.5%3B&=A%20INS%0AGenerate%3B&@_y:-0.875&x:2.5%3B&=F3%0AFind%20next&_x:1%3B&=C%20R%0ARefactor&_x:8.5%3B&=CS%20B%0ABuild&_x:1%3B&=S%20F11%0AStep%20out%3B&@_y:-0.875&x:5.5%3B&=C%20T%0ASearch%20every&_a:7&h:1.5%3B&=&_x:4.5&a:5&h:1.5%3B&=S%20F5%0AStop&=CA%20Left%0AShrink%20selection%3B&@_y:-0.875&w:1.5%3B&=C%20TAB%0ASwitcher&=S%20F3%0AFind%20prev&_x:14.5%3B&=CA%20F9%0AForce%20run%20to%20cursor&_w:1.5%3B&=CS%20L%0ADelete%20line%3B&@_y:-0.375&x:3.5%3B&=A%20Grave%0ANav%20to&_x:10.5%3B&=CA%20%2F%2F%0AComment%3B&@_y:-0.875&x:2.5%3B&=S%20F12%0AFind%20usage&_x:1%3B&=F12%0AGoto%20decl&_x:8.5%3B&=A%20Enter%0AActions&_x:1%3B&=F11%0ABasic%20step%20into%3B&@_y:-0.875&x:5.5%3B&=A%20Home%0AGoto%20super&_x:6.5%3B&=CA%20Right%0AExtend%20selection%3B&@_y:-0.875&w:1.5%3B&=CS%20F%0AFind%20in%20files&=CS%20A%0AFind%20action&_x:14.5%3B&=C%20E,%20C%20C%0AClean%20up&_a:7&w:1.5%3B&=%3B&@_y:-0.625&x:6.5&h:1.5%3B&=&_x:4.5&h:1.5%3B&=%3B&@_y:-0.75&x:3.5&a:5%3B&=CS%20F11%0AGoto%20type&_x:10.5&f2:1%3B&=Alt%0APaste%20history%3B&@_y:-0.875&x:2.5&fa@:1&:1%3B%3B&=CS%20A%0AInspect%20this&_x:1%3B&=C%20F12%0ANav%20impl&_x:8.5%3B&=CS%20R%0ARefactor%20this&_x:1%3B&=SA%20PgUp%0APrevious%20error%3B&@_y:-0.875&x:5.5%3B&=SA%20F11%0AHighlight%20usage&_x:6.5%3B&=CS%20%5B%0ASelect%20containing%20declaration%3B&@_y:-0.875&a:7&w:1.5%3B&=&_a:5%3B&=A%20End%0AGoto%20impl&_x:14.5%3B&=SA%20PgDn%0ANext%20error&_a:7&w:1.5%3B&=%3B&@_y:-0.375&x:3.5&a:5%3B&=C%20KP-%0ANav%20back&_x:10.5%3B&=CSA%20Dwn%0AMove%20statement%20down%3B&@_y:-0.875&x:2.5%3B&=A%20%5C%0AFind%20member&_x:1%3B&=CS%20KP-%0ANav%20forward&_x:8.5%3B&=CSA%20Up%0AMove%20statement%20up&_x:1%3B&=CSA%20Left%0AMove%20element%20left%3B&@_y:-0.75&x:0.5&a:7%3B&=&_a:5%3B&=C%20Comma%0ARecent&_x:14.5%3B&=CSA%20Rght%0AMove%20element%20right&_fa@:1&:1&:0&:0&:0&:0&:2%3B%3B&=TO%0A%0A%0A%0A%0A%0ALayer%201%3B&@_r:30&rx:6.5&ry:4.25&y:-1&x:1&c=%23d0a8a8%3B&=CS%20G%0ACopilot%20Inline%20Chat&_c=%23cccccc&a:7%3B&=%3B&@_f:3&h:2%3B&=Tab&_c=%23d0a8a8&a:5&h:2%3B&=A%20%5C%0ACopilot%20Show%20Comple-tions&=A%20%5D%0ACopilot%20Next%3B&@_x:2%3B&=A%20%5B%0ACopilot%20Prev%3B&@_r:-30&rx:13&y:-1&x:-3%3B&=CA%20Right%0ACopilot%20Next%20Line&_c=%23cccccc%3B&=CA%20Space%0ASecond%20basic%20completion%3B&@_x:-3&c=%23d0a8a8%3B&=C%20Right%0ACopilot%20Next%20Word&_c=%23cccccc&h:2%3B&=CS%20Enter%0AComplete%20statement&_h:2%3B&=C%20Space%0ABasic%20completion%3B&@_x:-3&c=%23d0a8a8%3B&=CS%20C%0ACopilot%20Chat


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
    ST_RESET_STATE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPS_LOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NUM_LOCK,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_SCROLL_LOCK,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
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
                                                                                                    LCTL(LSFT(KC_G)), KC_TRANSPARENT, LCTL(LALT(KC_RIGHT)), LALT(LCTL(KC_SPACE)),
                                                                                                                    LALT(KC_RBRC),LCTL(KC_RIGHT),
                                                                                    KC_TAB,         LALT(KC_BSLS),LALT(KC_LBRC),LCTL(LSFT(KC_C)), LCTL(LSFT(KC_ENTER)),LCTL(KC_SPACE)
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
    case ST_RESET_STATE:
    if (record->event.pressed && host_keyboard_led_state().caps_lock) {
      register_code(KC_CAPS_LOCK);
      unregister_code(KC_CAPS_LOCK);
    }
    if(record->event.pressed && !host_keyboard_led_state().num_lock) {
      register_code(KC_NUM_LOCK);
      unregister_code(KC_NUM_LOCK);
    }
    if(record->event.pressed && host_keyboard_led_state().scroll_lock) {
      register_code(KC_SCROLL_LOCK);
      unregister_code(KC_SCROLL_LOCK);
    }
    break;
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




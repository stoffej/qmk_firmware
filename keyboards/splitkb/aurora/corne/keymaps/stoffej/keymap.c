/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers { BASE, LAY0, LAY1, LAY2, LAY3, LAY4, LAY5 };

enum custom_keycodes {
    MNAME = SAFE_RANGE,
    MCDDOT,
    MGITST,
    MOBSTASK,
};

enum unicode_names {
  SEAAH,
  SEAEH,
    SEOEH,
    SEAAL,
    SEAEL,
    SEOEL,
  UKB,
  UCOFFEE,
  UVOLT,
  UBEER,
  UTHMUP,
  THUMBSDOWN,
  USMIL,
  UBIC,
  UNERD,
  UBUG,
  UPARTY,
  UORHEART,
  UWHALE,
  UBOMB,
  UFACEROLLINGEYES,
  THNK,
  PARTY,
  OLINE,
  GRIMF,
  EYES,
  TREX
};

const uint32_t PROGMEM unicode_map[] = {
  [SEAAH] = 0x00C5, // Å
  [SEAEH] = 0x00C4, // Ä
  [SEOEH] = 0x00D6, // Ö
  [SEAAL]  = 0x00E5, // å
  [SEAEL]  = 0x00E4, // ä
  [SEOEL]  = 0x00F6, // ö
  [UKB]     = 0x2328,   // ⌨
  [UCOFFEE] = 0x2615,   // ☕
  [UVOLT]   = 0x26A1,   // ⚡
  [UBEER]   = 0x1F37B,  // 🍻
  [UTHMUP]  = 0x1F44D,  // 👍
  [THUMBSDOWN] = 0x1F44E, // 👎
  [USMIL]   = 0x1F642,  // 🙂
  [UBIC]    = 0x1F6B2,  // 🚲
  [UNERD]   = 0x1F913,  // 🤓
  [UBUG]    = 0x1F41B,  // 🐛
  [UPARTY]  = 0x1F389,  // 🎉
  [UORHEART] = 0x1F9E1, // 🧡
  [UWHALE] = 0x1F433,   // 🐳
  [UBOMB] = 0x1F4A3,    // 💣
  [UFACEROLLINGEYES] = 0x1F644, // 🙄
  [THNK] = 0x1F914, // 🤔
  [PARTY] = 0x1F973, // 🥳
  [OLINE] = 0x235C, // ⍜
  [GRIMF]  = 0x1F62C, //😬
  [EYES] = 0x1F440,// 👀
  [TREX] = 0x1F996 // 🦖
};


#define CTLKCI RCTL_T(KC_I)
#define CTLKCR LCTL_T(KC_R)
#define QKBOOT QK_BOOT

#define SHFTKCA LSFT_T(KC_A)
#define SHFTKCO RSFT_T(KC_O)

#define CTLZ LCTL(KC_Z)
#define CTLX LCTL(KC_X)
#define CTLC LCTL(KC_C)
#define CTLV LCTL(KC_V)

#define URDO C(KC_Y)
#define UPST S(KC_INS)
#define UCPY C(KC_INS)
#define UCUT S(KC_DEL)
#define UUND C(KC_Z)

// visual studio code shortcuts
#define VSSYMBOLEDITOR LCTL(LSFT(KC_O))
#define VSDEFINITION KC_F12
#define VSIMPLEMENTATION LCTL(KC_F12)
#define VSREFERENCES LSFT(KC_F12)
#define VSBACK LALT(KC_LEFT)
#define VSFRONT LALT(KC_RIGHT)
#define VSBRACKET LCTL(LSFT(KC_BSLS))
#define VSTABLEFT LCTL(KC_PGUP)
#define VSTABRIGHT LCTL(KC_PGDN)
#define VSCLOSETAB LCTL(KC_W)
#define VSCLOSEPANEL LCTL(LSFT(KC_W))
#define VSGROUP1 LCTL(KC_1)
#define VSGROUP2 LCTL(KC_2)
#define VSTERMINAL LCTL(KC_GRAVE)
#define VSBUILD LCTL(LSFT(KC_B))
#define VSCOMMANDS LCTL(LSFT(KC_P))
#define VSCMTLINE LCTL(KC_SLSH)
#define VSMVFILENXT LCTL(LALT(KC_RIGHT))


//  when using US English layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,      KC_W,     KC_F,     KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,     KC_SCLN,      KC_QUOT,
        KC_LALT, SHFTKCA, CTLKCR, KC_S,     KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    CTLKCI, SHFTKCO, KC_RALT,
        KC_LWIN, KC_Z,      KC_X,     KC_C,     KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM,    KC_DOT,      KC_SLSH,      KC_LWIN,
        LT(LAY0, KC_BSPC ), LT(LAY1,  KC_DEL ), LT(LAY2, KC_TAB), LT(LAY3, KC_ENT), LT(LAY4, KC_SPC ), LT(LAY5,   KC_LWIN )
    ),
    [LAY0] = LAYOUT_split_3x6_3(
        _______,   _______, _______, _______,    _______, _______,   KC_PLUS, KC_7, KC_8, KC_9, KC_SLSH, _______,
        _______, KC_LSFT, KC_LCTL, KC_LALT,    _______, _______,   KC_MINS, KC_4, KC_5, KC_6, KC_COMM, _______,
        _______, _______, _______, _______,    _______, _______,   KC_EQL, KC_1, KC_2, KC_3, KC_DOT,  _______,
        _______, _______, _______, KC_LPRN, KC_0,    KC_RPRN
    ),
    [LAY1] = LAYOUT_split_3x6_3(
        QKBOOT, _______, _______, _______,    _______ , _______ ,  KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,   _______,
        _______, KC_LSFT, KC_LCTL, KC_LALT,    _______ , _______,   KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, MGITST, _______,
        _______, _______, _______, _______,    _______,  _______,   UCUT,   UCPY,   UPST,   URDO ,  UUND,    MCDDOT,
        _______, _______, _______, KC_LCBR, _______,  KC_RCBR
    ),
    [LAY2] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______,  KC_DQUO, _______,  KC_QUOT,  KC_AMPR , KC_ASTR , KC_BSLS, KC_GRV, _______,
        _______, KC_LSFT, KC_LCTL, KC_LALT,  KC_GRV, _______, KC_COLON,  KC_DLR,  KC_PERC, KC_CIRC, _______,  _______,
        _______, _______, _______, _______,  _______,  _______,  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, _______,
        _______, _______, _______, KC_LBRC, KC_MINS, KC_RBRC
    ),
    [LAY3] = LAYOUT_split_3x6_3(
        _______, _______, _______, KC_MUTE, _______, KC_VOLU, _______, KC_F9, KC_F10, KC_F11, KC_F12, _______,
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, _______, KC_F5, KC_F6 , KC_F7 , KC_F8 , _______,
        _______, _______, _______, _______, _______, _______, _______, KC_F1, KC_F2 , KC_F3 , KC_F4 , _______,
        _______, _______, _______, KC_TAB,  KC_SPC,  KC_ESC
    ),
    [LAY4] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, MOBSTASK, KC_PSCR, _______, _______, _______, _______, _______, QKBOOT,
        _______, _______, UP(SEAAL,SEAAH), UP(SEAEL,SEAEH), UP(SEOEL,SEOEH),  _______, _______, KC_LSFT, KC_LCTL, KC_LALT, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______
    ),
    [LAY5] = LAYOUT_split_3x6_3(
        _______,         _______,       _______ ,   VSMVFILENXT, VSGROUP1, VSGROUP2,  UM(USMIL), UM(UKB),      UM(UCOFFEE), UM(UVOLT), UM(UBEER),  _______,
        VSSYMBOLEDITOR, VSREFERENCES, VSIMPLEMENTATION, VSDEFINITION , VSBACK,    VSFRONT,    UM(THNK),  UM(PARTY),    UM(UTHMUP),     UM(THUMBSDOWN) ,   UM(EYES) ,  UM(TREX),
        _______,           _______, VSCLOSEPANEL,   VSCLOSETAB,           VSTABLEFT, VSTABRIGHT, UM(UBOMB), UM(UORHEART), UM(UBIC),    UM(UNERD), UM(UBUG),  UM(UPARTY),
        _______,         _______,       _______,           _______,      _______,    _______
    )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
//   #endif
switch (keycode) {
    case MNAME:
      if (record->event.pressed) {
          SEND_STRING("Kristoffer");
      }
      return false;
      break;
    case MCDDOT:
      if (record->event.pressed) {
          SEND_STRING("cd .."SS_TAP(X_ENTER)"");
      }
      return false;
      break;
    case MGITST:
      if (record->event.pressed) {
          SEND_STRING("git status"SS_TAP(X_ENTER)"");
      }
      return false;
      break;
    case MOBSTASK:
      if (record->event.pressed) {
          SEND_STRING("- [ ] ");
      }
      return false;
      break;
    }
    return true;
}


void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}


#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_RED); // sets the color to red without saving
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3); // sets mode to Fast breathing without saving
}
#endif



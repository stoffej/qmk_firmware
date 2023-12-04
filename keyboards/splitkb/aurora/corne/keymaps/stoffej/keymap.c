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
<<<<<<< HEAD

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
=======
#include "keymap_swedish.h"
// #include "quantum.h"
// #include <stdio.h>



enum layers { BASE, LAY0, LAY1, LAY2, LAY3, LAY4, LAY5 };


enum custom_keycodes {
  M_NAME = SAFE_RANGE,
  COMM,     // , | <
  DOT,      // . | >
  SLSH,     // / | ?
  SCLN,     // ; | :
  QUOT,     // ' | "
  M_CD_DOT,
  M_GIT_ST,
};


enum unicode_names {
>>>>>>> 3c99bb2d26 (added corne)
  UKB,
  UCOFFEE,
  UVOLT,
  UBEER,
  UTHMUP,
<<<<<<< HEAD
<<<<<<< HEAD
  THUMBSDOWN,
=======
>>>>>>> 3c99bb2d26 (added corne)
=======
  THUMBSDOWN,
>>>>>>> e04042f974 (fixed unicode)
  USMIL,
  UBIC,
  UNERD,
  UBUG,
  UPARTY,
  UORHEART,
  UWHALE,
  UBOMB,
<<<<<<< HEAD
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
=======
  UFACE_ROLLING_EYES,
  THNK,
  PARTY,
  O_LINE,
  GRIMF,
  EYES,
  TREX
};

const uint32_t PROGMEM unicode_map[] = {
>>>>>>> 3c99bb2d26 (added corne)
  [UKB]     = 0x2328,   // ⌨
  [UCOFFEE] = 0x2615,   // ☕
  [UVOLT]   = 0x26A1,   // ⚡
  [UBEER]   = 0x1F37B,  // 🍻
  [UTHMUP]  = 0x1F44D,  // 👍
<<<<<<< HEAD
<<<<<<< HEAD
  [THUMBSDOWN] = 0x1F44E, // 👎
=======
>>>>>>> 3c99bb2d26 (added corne)
=======
  [THUMBSDOWN] = 0x1F44E, // 👎
>>>>>>> e04042f974 (fixed unicode)
  [USMIL]   = 0x1F642,  // 🙂
  [UBIC]    = 0x1F6B2,  // 🚲
  [UNERD]   = 0x1F913,  // 🤓
  [UBUG]    = 0x1F41B,  // 🐛
  [UPARTY]  = 0x1F389,  // 🎉
  [UORHEART] = 0x1F9E1, // 🧡
  [UWHALE] = 0x1F433,   // 🐳
  [UBOMB] = 0x1F4A3,    // 💣
<<<<<<< HEAD
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
=======
  [UFACE_ROLLING_EYES] = 0x1F644, // 🙄
  [THNK] = 0x1F914, // 🤔
  [PARTY] = 0x1F973, // 🥳
  [O_LINE] = 0x235C, // ⍜
  [GRIMF]  = 0x1F62C, //😬
  [EYES] = 0x1F440,// 👀
  [TREX] = 0x1F996 // 🦖
};


//  enum unicode_names {
//      CKC_EUR,
//      N_TILDE,
//      COMB_ACUTE_ACCENT,
//      GRINNING_FACE, // 😃
//      BEAMING_FACE, // 😁
//      GRINNING_FACE_WITH_SWEAT, // 😅
//      ROLLING_LAUGHING, // 🤣
//      FACE_TEARS_JOY, // 😂
//      WINKING_FACE, // 😉
//      SMILING_FACE_HALO, // 😇
//      SMILING_FACE_HEARTS, // 🥰
//      SMILING_FACE_HEART_EYES, // 😍
//      FACE_BLOWING_KISS, // 😘
//      FACE_SAVORING_FOOD, // 😋
//      ZANY_FACE, // 🤪
//      HUGGING_FACE, // 🤗
//      SHUSHING_FACE, // 🤫
//      THINKING_FACE, // 🤔
//      FACE_RAISED_EYEBROW, // 🤨
//      NEUTRAL_FACE, // 😐
//      SMIRKING_FACE, // 😏
//      FACE_ROLLING_EYES, // 🙄
//      PENSIVE_FACE, // 😔
//      FACE_VOMITING, // 🤮
//      WOOZY_FACE, // 🥴
//      PLEADING_FACE, // 🥺
//      LOUDLY_CRYING_FACE, // 😭
//      DISAPPOINTED_FACE, // 😞
//      FACE_SYMBOLS_MOUTH, // 🤬
//      SMILING_FACE_HORNS, // 😈
//      SKULL, // 💀
//      PILE_POO, // 💩
//      GHOST, // 👻
//      ALIEN_MONSTER, // 👾
//      RED_HEART, // ❤
//      BOMB, // 💣
//      WAVING_HAND, // 👋
//      OK_HAND, // 👌
//      CLAPPING_HANDS, // 👏
//      EYES, // 👀
//      MAN_FACEPALMING, // 🤦
//      TURTLE, // 🐢
//      SNAKE, // 🐍
//      SPOUTING_WHALE, // 🐳
//      DRAGON, // 🐉
//      TREX, // 🦖
//      THUMBSDOWN, // 👍
//      THUMBSUP, // 👎
//  };

//  //https://unicode-table.com/en/#00F1
//  const uint32_t unicode_map[] PROGMEM = {
//      [CKC_EUR] = 0x20AC, //€
//      [N_TILDE] = 0x00F1,  // ñ
//      [COMB_ACUTE_ACCENT] = 0x0301,  // ´
//      [GRINNING_FACE] = 0x1F603,
//      [BEAMING_FACE] = 0x1F601,
//      [GRINNING_FACE_WITH_SWEAT] = 0x1F605,
//      [ROLLING_LAUGHING] = 0x1F923,
//      [FACE_TEARS_JOY] = 0x1F602,
//      [WINKING_FACE] = 0x1F609,
//      [SMILING_FACE_HALO] = 0x1F607,
//      [SMILING_FACE_HEARTS] = 0x1F970,
//      [SMILING_FACE_HEART_EYES] = 0x1F60D,
//      [FACE_BLOWING_KISS] = 0x1F618,
//      [FACE_SAVORING_FOOD] = 0x1F60B,
//      [ZANY_FACE] = 0x1F92A,
//      [HUGGING_FACE] = 0x1F917,
//      [SHUSHING_FACE] = 0x1F92B,
//      [THINKING_FACE] = 0x1F914,
//      [FACE_RAISED_EYEBROW] = 0x1F928,
//      [NEUTRAL_FACE] = 0x1F610,
//      [SMIRKING_FACE] = 0x1F60F,
//      [FACE_ROLLING_EYES] = 0x1F644,
//      [PENSIVE_FACE] = 0x1F614,
//      [FACE_VOMITING] = 0x1F92E,
//      [WOOZY_FACE] = 0x1F974,
//      [PLEADING_FACE] = 0x1F97A,
//      [LOUDLY_CRYING_FACE] = 0x1F62D,
//      [DISAPPOINTED_FACE] = 0x1F61E,
//      [FACE_SYMBOLS_MOUTH] = 0x1F92C,
//      [SMILING_FACE_HORNS] = 0x1F608,
//      [SKULL] = 0x1F480,
//      [PILE_POO] = 0x1F4A9,
//      [GHOST] = 0x1F47B,
//      [ALIEN_MONSTER] = 0x1F47E,
//      [RED_HEART] = 0x2764,
//      [BOMB] = 0x1F4A3,
//      [WAVING_HAND] = 0x1F44B,
//      [OK_HAND] = 0x1F44C,
//      [CLAPPING_HANDS] = 0x1F44F,
//      [EYES] = 0x1F440,
//      [MAN_FACEPALMING] = 0x1F926,
//      [TURTLE] = 0x1F422,
//      [SNAKE] = 0x1F40D,
//      [SPOUTING_WHALE] = 0x1F433,
//      [DRAGON] = 0x1F409,
//      [TREX] = 0x1F996,
//      [THUMBSDOWN] = 0x1F44E,
//      [THUMBSUP] = 0x1F44D,
//  };

// SWEDISH LETTERS AND SYMBOLS
// Letters
#define KCSEAA KC_LBRC               // Å
#define KCSEAE KC_QUOT               // Ä
#define KCSEOE KC_SCLN               // Ö
#define KCSEQUO KC_BSLS              // '
#define KCSECOL S(KC_DOT)            // :
#define KCSESEMI S(KC_COMM)          // ;
#define KCSEEXCL S(KC_1)             // !
#define KCSEDQUO S(KC_2)             // "
#define KCSEHASH S(KC_3)             // #
#define KCSEPERC S(KC_5)             // %
#define KCSEAMPR S(KC_6)             // &
#define KCSESLSH S(KC_7)             // /
#define KCSELPRN S(KC_8)             // (
#define KCSERPRN S(KC_9)             // )
#define KCSEEQAL S(KC_0)             // =
#define KCSECIRC S(KC_RBRC)      // ^
#define KCSEAT RALT(KC_2)            // @
#define KCSEDLR RALT(KC_4)           // $
#define KCSELCBR RALT(KC_7)          // {
#define KCSELBRC RALT(KC_8)          // [
#define KCSERBRC RALT(KC_9)          // ]
#define KCSERCBR RALT(KC_0)          // }
#define KCSETILD RALT(KC_RBRC)   // ~
#define KCSEDIAE KC_RBRC         // ¨
#define KCSEACUT KC_EQL              // ´
#define KCSEMINS KC_SLASH            // -
#define KCSEGRAV KC_PLUS             // `
#define KCSELESS KC_NUBS             // <
#define KCSEMORE S(KC_NUBS)          // >
#define KCSEPLUS KC_MINS             // +
#define KCSEASTR S(KC_BSLS)          // *
#define KCSEQUES S(KC_MINS)          // ?
#define KCSEBSLH RALT(KC_MINS)       /* \ */
#define KCSEPIPE RALT(KC_NUBS)       // |


#define CTL_KC_I RCTL_T(KC_I)
#define CTL_KC_R LCTL_T(KC_R)
>>>>>>> 3c99bb2d26 (added corne)

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
<<<<<<< HEAD
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
=======
#define VS_FILE LCTL(KC_P)
#define VS_OPEN_FILE LCTL(KC_O)
#define VS_LINE LCTL(KC_G)
#define VS_SYMBOLEDITOR LCTL(LSFT(KC_O))
#define VS_DEFINITION KC_F12
#define VS_IMPLEMENTATION LCTL(KC_F12)
#define VS_REFERENCES LSFT(KC_F12)
#define VS_BACK LALT(KC_LEFT)
#define VS_FRONT LALT(KC_RIGHT)
#define VS_BRACKET LCTL(LSFT(KC_BSLS))
#define VS_TABLEFT LCTL(KC_PGUP)
#define VS_TABRIGHT LCTL(KC_PGDN)
#define VS_CLOSETAB LCTL(KC_W)
#define VS_CLOSEPANEL LCTL(LSFT(KC_W))
#define VS_GROUP_1 LCTL(KC_1)
#define VS_GROUP_2 LCTL(KC_2)
#define VS_TERMINAL LCTL(KC_GRAVE)
#define VS_BUILD LCTL(LSFT(KC_B))
#define VS_COMMANDS LCTL(LSFT(KC_P))
#define VS_CMT_BLOCK LSFT(LALT(KC_A))
#define VS_CMT_LINE LCTL(KC_SLSH)
#define VS_DEL_LINE LCTL(LSFT(KC_K))
#define VS_COPYLINEDOWN LSFT(LALT(KC_DOWN))
#define VS_MV_FILE_NXT LCTL(LALT(KC_RIGHT))
#define VS_MV_FILE_PRV LCTL(LALT(KC_LEFT))
// visual studio bookmark commands
#define VS_BM_LIST LCTL(LALT(KC_L))
#define VS_BM_LISTALL LCTL(LALT(KC_A))
#define VS_BM_PREV LCTL(LALT(KC_P))
#define VS_BM_NEXT LCTL(LALT(KC_N))
#define VS_BM_TOGGLE LCTL(LALT(KC_K))
#define VS_BM_LABEL LCTL(LALT(KC_B))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,      KC_W,     KC_F,     KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,     SCLN,      QUOT,
        KC_LALT, SHFTKCA, CTL_KC_R, KC_S,     KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    CTL_KC_I, SHFTKCO, KC_RALT,
        KC_LWIN, KC_Z,      KC_X,     KC_C,     KC_D,    KC_V,    KC_K,    KC_H,    COMM,    DOT,      SLSH,      KC_LWIN,
        LT(LAY0, KC_BSPC ), LT(LAY1,  KC_DEL ), LT(LAY2, KC_TAB), LT(LAY3, KC_ENT), LT(LAY4, KC_SPC ), LT(LAY5,   KC_LWIN )
    ),
    [LAY0] = LAYOUT_split_3x6_3(
        _______,   _______, _______, _______,    _______, _______,   KCSEPLUS, KC_7, KC_8, KC_9, SLSH, _______,
        _______, KC_LSFT, KC_LCTL, KC_LALT,    _______, _______,   KCSEMINS, KC_4, KC_5, KC_6, COMM, _______,
        _______, _______, _______, _______,    _______, _______,   KCSEEQAL, KC_1, KC_2, KC_3, DOT,  _______,
        _______, _______, _______, KCSELPRN, KC_0,    KCSERPRN
    ),
    [LAY1] = LAYOUT_split_3x6_3(
        QK_BOOT, _______, _______, _______,    _______ , _______ ,  KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,   _______,
        _______, KC_LSFT, KC_LCTL, KC_LALT,    _______ , _______,   KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, M_GIT_ST, _______,
        _______, _______, _______, _______,    _______,  _______,   UCUT,   UCPY,   UPST,   URDO ,  UUND,    M_CD_DOT,
        _______, _______, _______, KCSELCBR, _______,  KCSERCBR
    ),
    [LAY2] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______,  KCSEDQUO, _______,  KCSEQUO,  KCSEAMPR, KCSEASTR, KCSEBSLH, _______,  KCSEGRAV,
        _______, KC_LSFT, KC_LCTL, KC_LALT,  KCSEDIAE, KCSEACUT, KCSECOL,  KCSEDLR,  KCSEPERC, KCSECIRC, _______,  _______,
        _______, _______, _______, _______,  _______,  _______,  KCSETILD, KCSEEXCL, KCSEAT,   KCSEHASH, KCSEPIPE, _______,
        _______, _______, _______, KCSELBRC, KCSEMINS, KCSERBRC
>>>>>>> 3c99bb2d26 (added corne)
    ),
    [LAY3] = LAYOUT_split_3x6_3(
        _______, _______, _______, KC_MUTE, _______, KC_VOLU, _______, KC_F9, KC_F10, KC_F11, KC_F12, _______,
        _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, _______, KC_F5, KC_F6 , KC_F7 , KC_F8 , _______,
        _______, _______, _______, _______, _______, _______, _______, KC_F1, KC_F2 , KC_F3 , KC_F4 , _______,
        _______, _______, _______, KC_TAB,  KC_SPC,  KC_ESC
    ),
    [LAY4] = LAYOUT_split_3x6_3(
<<<<<<< HEAD
<<<<<<< HEAD
        _______, _______, _______, _______, MOBSTASK, KC_PSCR, _______, _______, _______, _______, _______, QKBOOT,
        _______, _______, UP(SEAAL,SEAAH), UP(SEAEL,SEAEH), UP(SEOEL,SEOEH),  _______, _______, KC_LSFT, KC_LCTL, KC_LALT, _______, _______,
=======
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
=======
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
>>>>>>> e04042f974 (fixed unicode)
        _______, _______, KCSEAA,  KCSEAE,  KCSEOE,  _______, _______, KC_LSFT, KC_LCTL, KC_LALT, _______, _______,
>>>>>>> 3c99bb2d26 (added corne)
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______
    ),
    [LAY5] = LAYOUT_split_3x6_3(
<<<<<<< HEAD
<<<<<<< HEAD
        _______,         _______,       _______ ,   VSMVFILENXT, VSGROUP1, VSGROUP2,  UM(USMIL), UM(UKB),      UM(UCOFFEE), UM(UVOLT), UM(UBEER),  _______,
        VSSYMBOLEDITOR, VSREFERENCES, VSIMPLEMENTATION, VSDEFINITION , VSBACK,    VSFRONT,    UM(THNK),  UM(PARTY),    UM(UTHMUP),     UM(THUMBSDOWN) ,   UM(EYES) ,  UM(TREX),
        _______,           _______, VSCLOSEPANEL,   VSCLOSETAB,           VSTABLEFT, VSTABRIGHT, UM(UBOMB), UM(UORHEART), UM(UBIC),    UM(UNERD), UM(UBUG),  UM(UPARTY),
        _______,         _______,       _______,           _______,      _______,    _______
=======
        QK_BOOT,         _______,       VS_MV_FILE_PRV ,   VS_MV_FILE_NXT, VS_GROUP_1, VS_GROUP_2,  X(USMIL), X(UKB),      X(UCOFFEE), X(UVOLT), X(UBEER), QK_BOOT ,
        VS_SYMBOLEDITOR, VS_REFERENCES, VS_IMPLEMENTATION, VS_DEFINITION , VS_BACK,    VS_FRONT,    X(THNK),  X(PARTY),    KCSEAA,     KCSEAE,   KCSEOE,   TG(LAY6),
        VS_CLOSEPANEL,   VS_CLOSETAB,   _______,           _______,        VS_TABLEFT, VS_TABRIGHT, X(UBOMB), X(UORHEART), X(UBIC),    X(UNERD), X(UBUG),  X(UPARTY),
        _______,         _______,       _______,           X(UTHMUP),      _______,    _______
    ),
    [LAY6] = LAYOUT_split_3x6_3(
        _______, _______ , _______, KC_UP,    _______,      KC_PGUP,  KCSEPLUS, KC_7, KC_8, KC_9, _______, _______,
        _______, _______ , KC_LEFT, KC_DOWN , KC_RIGHT,      KC_PGDN , KCSEMINS, KC_4, KC_5, KC_6, COMM,    _______,
        _______, _______,  _______, _______,  _______,      TG(LAY6), KCSEEQAL, KC_1, KC_2, KC_3, DOT,     _______,
        _______, _______,  _______,                         _______,  KC_0,    _______
>>>>>>> 3c99bb2d26 (added corne)
=======
        _______,         _______,       VS_MV_FILE_PRV ,   VS_MV_FILE_NXT, VS_GROUP_1, VS_GROUP_2,  UM(USMIL), UM(UKB),      UM(UCOFFEE), UM(UVOLT), UM(UBEER),  _______,
        VS_SYMBOLEDITOR, VS_REFERENCES, VS_IMPLEMENTATION, VS_DEFINITION , VS_BACK,    VS_FRONT,    UM(THNK),  UM(PARTY),    UM(UTHMUP),     UM(THUMBSDOWN) ,   UM(EYES) ,  UM(TREX),
        VS_CLOSEPANEL,   VS_CLOSETAB,   _______,           _______,        VS_TABLEFT, VS_TABRIGHT, UM(UBOMB), UM(UORHEART), UM(UBIC),    UM(UNERD), UM(UBUG),  UM(UPARTY),
        _______,         _______,       _______,           _______,      _______,    _______
>>>>>>> e04042f974 (fixed unicode)
    )

};

<<<<<<< HEAD
=======


>>>>>>> 3c99bb2d26 (added corne)
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
//   #endif
switch (keycode) {
<<<<<<< HEAD
    case MNAME:
=======
    case M_NAME:
>>>>>>> 3c99bb2d26 (added corne)
      if (record->event.pressed) {
          SEND_STRING("Kristoffer");
      }
      return false;
      break;
<<<<<<< HEAD
    case MCDDOT:
=======
    case M_CD_DOT:
>>>>>>> 3c99bb2d26 (added corne)
      if (record->event.pressed) {
          SEND_STRING("cd .."SS_TAP(X_ENTER)"");
      }
      return false;
      break;
<<<<<<< HEAD
    case MGITST:
=======
    case M_GIT_ST:
>>>>>>> 3c99bb2d26 (added corne)
      if (record->event.pressed) {
          SEND_STRING("git status"SS_TAP(X_ENTER)"");
      }
      return false;
      break;
<<<<<<< HEAD
    case MOBSTASK:
      if (record->event.pressed) {
          SEND_STRING("- [ ] ");
      }
      return false;
      break;
=======
    case COMM:    // , | <
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT)){
            unregister_code16(KC_LSFT);  // Remove shift before sending the keycode
            register_code16(SE_LABK);
            register_code16(KC_LSFT);
        } else {
          register_code16(KC_COMM);
        }
      } else {
        unregister_code16(KC_GRV);
        unregister_code16(SE_LABK);
        unregister_code16(KC_COMM);
      }
      return false;
      break;

    case DOT:    // . | >
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT)){
            register_code16(SE_RABK);
        } else {
          register_code16(KC_DOT);
        }
      } else {
        unregister_code16(KC_GRV);
        unregister_code16(SE_RABK);
        unregister_code16(KC_DOT);
      }
      return false;
      break;

    case SLSH:    // / | ?
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT)){
          register_code16(SE_QUES);
        } else {
          register_code16(SE_SLSH);
        }
      } else {
        unregister_code16(SE_QUES);
        unregister_code16(SE_SLSH);
      }
      return false;
      break;

    case SCLN:    // ; | :
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT)){
          register_code16(SE_COLN);
        } else {
          register_code16(SE_SCLN);
        }
      } else {
        unregister_code16(SE_COLN);
        unregister_code16(SE_SCLN);
      }
      return false;
      break;

    case QUOT:    // ' | "
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT)){
          register_code16(SE_DQUO);
        } else {
          register_code16(SE_QUOT);
        }
      } else {
        unregister_code16(SE_DQUO);
        unregister_code16(SE_QUOT);
      }
      return false;
      break;

>>>>>>> 3c99bb2d26 (added corne)
    }
    return true;
}


<<<<<<< HEAD
=======

>>>>>>> 3c99bb2d26 (added corne)
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



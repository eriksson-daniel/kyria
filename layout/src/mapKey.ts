/*
{
  "version": 1,
  "notes": "",
  "documentation": "\"This file is a QMK Configurator export. You can import this at <https://config.qmk.fm>. It can also be used directly with QMK's source code.\n\nTo setup your QMK environment check out the tutorial: <https://docs.qmk.fm/#/newbs>\n\nYou can convert this file to a keymap.c using this command: `qmk json2c {keymap}`\n\nYou can compile this keymap using this command: `qmk compile {keymap}`\"\n",
  "keyboard": "splitkb/kyria/rev3",
  "keymap": "splitkb_kyria_rev3_layout_split_3x6_5_mine",
  "layout": "LAYOUT_split_3x6_5",
  "layers": [
    [
      "LT(4,KC_ESC)",
      "KC_Q",
      "KC_W",
      "KC_E",
      "KC_R",
      "KC_T",
      "KC_Y",
      "KC_U",
      "KC_I",
      "KC_O",
      "KC_MINS",
      "KC_EQL",
      "MO(3)",
      "KC_A",
      "KC_S",
      "KC_D",
      "KC_F",
      "KC_G",
      "KC_H",
      "KC_J",
      "KC_K",
      "KC_L",
      "KC_SCLN",
      "KC_QUOT",
      "KC_LSFT",
      "KC_Z",
      "KC_X",
      "KC_C",
      "KC_V",
      "KC_B",
      "KC_LSFT",
      "KC_MPLY",
      "KC_MNXT",
      "KC_RSFT",
      "KC_N",
      "KC_M",
      "KC_P",
      "KC_LBRC",
      "KC_RBRC",
      "KC_NUHS",
      "KC_LGUI",
      "KC_LSFT",
      "MO(2)",
      "KC_LCTL",
      "KC_ENT",
      "KC_BSPC",
      "KC_SPC",
      "MO(1)",
      "KC_RSFT",
      "KC_LALT"
    ],
    [
      "KC_GRV",
      "KC_NO",
      "KC_NO",
      "KC_UP",
      "KC_TAB",
      "KC_NO",
      "KC_F6",
      "KC_NO",
      "KC_NO",
      "KC_PSCR",
      "KC_NO",
      "KC_F12",
      "KC_TRNS",
      "KC_ESC",
      "KC_LEFT",
      "KC_DOWN",
      "KC_RGHT",
      "KC_NO",
      "KC_NO",
      "KC_HOME",
      "KC_END",
      "KC_PGUP",
      "KC_PGDN",
      "KC_NO",
      "KC_TRNS",
      "KC_NO",
      "KC_APP",
      "KC_NO",
      "KC_CAPS",
      "KC_NO",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_DEL",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS"
    ],
    [
      "KC_TRNS",
      "RALT(KC_2)",
      "LSFT(KC_5)",
      "KC_MINS",
      "LSFT(KC_0)",
      "LSFT(KC_DOT)",
      "RALT(KC_7)",
      "RALT(KC_0)",
      "RALT(KC_8)",
      "RALT(KC_9)",
      "LSFT(KC_NUHS)",
      "KC_EQL",
      "KC_TRNS",
      "LSFT(KC_8)",
      "LSFT(KC_1)",
      "LSFT(KC_MINS)",
      "LSFT(KC_2)",
      "LSFT(KC_SLSH)",
      "KC_NUHS",
      "KC_COMM",
      "KC_DOT",
      "KC_SLSH",
      "LSFT(KC_9)",
      "LSFT(KC_RBRC)",
      "KC_TRNS",
      "RALT(KC_4)",
      "LSFT(KC_3)",
      "RALT(KC_RBRC)",
      "LSFT(KC_7)",
      "LSFT(KC_COMM)",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_NUBS",
      "LSFT(KC_NUBS)",
      "LSFT(KC_6)",
      "KC_GRV",
      "LSFT(KC_EQL)",
      "RALT(KC_EQL)",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_DEL",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS"
    ],
    [
      "KC_TRNS",
      "KC_F1",
      "KC_F2",
      "KC_F3",
      "KC_F4",
      "KC_F5",
      "KC_PSLS",
      "KC_7",
      "KC_8",
      "KC_9",
      "KC_PMNS",
      "KC_NO",
      "KC_TRNS",
      "KC_F6",
      "KC_F7",
      "KC_F8",
      "KC_F9",
      "KC_F10",
      "KC_PAST",
      "KC_4",
      "KC_5",
      "KC_6",
      "KC_PPLS",
      "KC_NO",
      "KC_TRNS",
      "KC_F11",
      "KC_F12",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_ENT",
      "KC_1",
      "KC_2",
      "KC_3",
      "KC_PEQL",
      "KC_NO",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_TRNS",
      "KC_0",
      "KC_COMM",
      "KC_DOT"
    ],
    [
      "KC_NO",
      "RGB_MOD",
      "RGB_HUI",
      "RGB_SAI",
      "RGB_VAI",
      "RGB_SPI",
      "BL_TOGG",
      "BL_STEP",
      "BL_BRTG",
      "BL_ON",
      "BL_UP",
      "KC_NO",
      "RGB_M_B",
      "RGB_RMOD",
      "RGB_HUD",
      "RGB_SAD",
      "RGB_VAD",
      "RGB_SPD",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "BL_OFF",
      "BL_DOWN",
      "KC_NO",
      "RGB_M_R",
      "RGB_M_SW",
      "RGB_M_SN",
      "RGB_M_K",
      "RGB_M_X",
      "RGB_M_G",
      "RGB_M_T",
      "KC_NO",
      "KC_NO",
      "KC_TRNS",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "RGB_TOG",
      "RGB_M_P",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO",
      "KC_NO"
    ]
  ],
  "author": ""
}
*/

export const mapKey = (key: string): string => {
  if (key.length === 4 && key.startsWith("KC_")) {
    return key.slice(3)
  }

  if (key.startsWith("MO(")) {
    return "L" + " "  +key.slice(3, -1)
  }

  if (key.startsWith("KC_F")) {
    return "F" + key.slice(4)
  }

  if (key.startsWith("RGB_")) {
    return key.slice(4)
  }

  if (key.startsWith("BL_")) {
    return key.slice(3)
  }

  switch (key) {
    case "KC_TRNS":
      return "▼"
    case "KC_NO":
      return ""
    case "KC_ESC":
      return "ESC"
    case "KC_MINS":
      return "+"
    case "KC_EQL":
      return "\""
    case "KC_SCLN":
      return "Ø"
    case "KC_QUOT":
      return "Æ"
    case "KC_LSFT":
    case "KC_RSFT":
      return "SHFT"
    case "KC_MPLY":
      return "▶"
    case "KC_MNXT":
      return "⏭"
    case "KC_LBRC":
      return "Å"
    case "KC_RBRC":
      return "¨"
    case "KC_NUHS":
      return "'"
    case "KC_LGUI":
      return "WIN"
    case "KC_LCTL":
    case "KC_RCTL":
      return "CTR"
    case "KC_ENT":
      return "↵"
    case "KC_BSPC":
      return "⌫"
    case "KC_SPC":
      return "SPC"
    case "KC_LALT":
      return "ALT"
    case "KC_GRV":
      return "|"
    case "KC_UP":
      return "↑"
    case "KC_TAB":
      return "⇥"
    case "KC_LEFT":
      return "←"
    case "KC_DOWN":
      return "↓"
    case "KC_RGHT":
      return "→"
    case "KC_HOME":
      return "HOME"
    case "KC_END":
      return "END"
    case "KC_PGUP":
      return "PGUP"
    case "KC_PGDN":
      return "PGDN"
    case "KC_APP":
      return "APP"
    case "KC_CAPS":
      return "CAPS"
    case "KC_PSCR":
      return "PSCR"
    case "KC_DEL":
      return "DEL"
    case "RALT(KC_2)":
      return "@"
    case "LSFT(KC_5)":
      return "%"
    case "LSFT(KC_0)":
      return "="
    case "LSFT(KC_DOT)":
      return ":"
    case "RALT(KC_7)":
      return "{"
    case "RALT(KC_0)":
      return "}"
    case "RALT(KC_8)":
      return "["
    case "RALT(KC_9)":
      return "]"
    case "LSFT(KC_NUHS)":
      return "*"
    case "LSFT(KC_8)":
      return "("
    case "LSFT(KC_1)":
      return "!"
    case "LSFT(KC_MINS)":
      return "?"
    case "LSFT(KC_2)":
      return "\""
    case "LSFT(KC_SLSH)":
      return "_"
    case "KC_COMM":
      return ","
    case "KC_DOT":
      return "."
    case "KC_SLSH":
      return "-"
    case "LSFT(KC_9)":
      return ")"
    case "LSFT(KC_RBRC)":
      return "^"
    case "RALT(KC_4)":
      return "$"
    case "LSFT(KC_3)":
      return "#"
    case "RALT(KC_RBRC)":
      return "~"
    case "LSFT(KC_7)":
      return "/"
    case "LSFT(KC_COMM)":
      return ";"
    case "KC_NUBS":
      return "<"
    case "LSFT(KC_NUBS)":
      return ">"
    case "LSFT(KC_6)":
      return "&"
    case "LSFT(KC_EQL)":
      return "`"
    case "RALT(KC_EQL)":
      return "´"
    case "KC_PSLS":
      return "/"
    case "KC_PAST":
      return "*"
    case "KC_PMNS":
      return "-"
    case "KC_PPLS":
      return "+"
    case "KC_PEQL":
      return "="
case "LT(4,KC_ESC)":
  return "4ESC"
    





    default:
      throw new Error(`Unknown key: ${key}`)
  }

}
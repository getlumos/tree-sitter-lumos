#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_struct = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_enum = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_POUND_LBRACK = 9,
  anon_sym_EQ = 10,
  anon_sym_RBRACK = 11,
  anon_sym_u8 = 12,
  anon_sym_u16 = 13,
  anon_sym_u32 = 14,
  anon_sym_u64 = 15,
  anon_sym_u128 = 16,
  anon_sym_i8 = 17,
  anon_sym_i16 = 18,
  anon_sym_i32 = 19,
  anon_sym_i64 = 20,
  anon_sym_i128 = 21,
  anon_sym_bool = 22,
  anon_sym_String = 23,
  anon_sym_PublicKey = 24,
  anon_sym_Signature = 25,
  anon_sym_Vec = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_Option = 29,
  anon_sym_LBRACK = 30,
  sym_identifier = 31,
  sym_string_literal = 32,
  sym_line_comment = 33,
  sym_block_comment = 34,
  sym_source_file = 35,
  sym__definition = 36,
  sym_struct_definition = 37,
  sym_struct_body = 38,
  sym_field = 39,
  sym_enum_definition = 40,
  sym_enum_body = 41,
  sym_enum_variant = 42,
  sym_attribute = 43,
  sym__type = 44,
  sym_primitive_type = 45,
  sym_solana_type = 46,
  sym_vec_type = 47,
  sym_option_type = 48,
  sym_array_type = 49,
  sym_comment = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_struct_definition_repeat1 = 52,
  aux_sym_struct_body_repeat1 = 53,
  aux_sym_enum_body_repeat1 = 54,
  aux_sym_enum_variant_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i128] = "i128",
  [anon_sym_bool] = "bool",
  [anon_sym_String] = "String",
  [anon_sym_PublicKey] = "PublicKey",
  [anon_sym_Signature] = "Signature",
  [anon_sym_Vec] = "Vec",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_Option] = "Option",
  [anon_sym_LBRACK] = "[",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_body] = "struct_body",
  [sym_field] = "field",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_body] = "enum_body",
  [sym_enum_variant] = "enum_variant",
  [sym_attribute] = "attribute",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_solana_type] = "solana_type",
  [sym_vec_type] = "vec_type",
  [sym_option_type] = "option_type",
  [sym_array_type] = "array_type",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_variant_repeat1] = "enum_variant_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_PublicKey] = anon_sym_PublicKey,
  [anon_sym_Signature] = anon_sym_Signature,
  [anon_sym_Vec] = anon_sym_Vec,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_Option] = anon_sym_Option,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_body] = sym_struct_body,
  [sym_field] = sym_field,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_variant] = sym_enum_variant,
  [sym_attribute] = sym_attribute,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_solana_type] = sym_solana_type,
  [sym_vec_type] = sym_vec_type,
  [sym_option_type] = sym_option_type,
  [sym_array_type] = sym_array_type,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_variant_repeat1] = aux_sym_enum_variant_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PublicKey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Signature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_solana_type] = {
    .visible = true,
    .named = true,
  },
  [sym_vec_type] = {
    .visible = true,
    .named = true,
  },
  [sym_option_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_element = 2,
  field_inner = 3,
  field_name = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_element] = "element",
  [field_inner] = "inner",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_body, 3},
    {field_name, 2},
  [4] =
    {field_name, 0},
    {field_type, 2},
  [6] =
    {field_element, 1},
  [7] =
    {field_element, 2},
  [8] =
    {field_inner, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 28,
  [35] = 35,
  [36] = 23,
  [37] = 37,
  [38] = 38,
  [39] = 24,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '"', 1,
        '#', 18,
        '(', 63,
        ')', 64,
        ',', 61,
        '/', 4,
        ':', 60,
        '<', 98,
        '=', 66,
        '>', 99,
        'O', 43,
        'P', 51,
        'S', 29,
        'V', 24,
        '[', 102,
        ']', 67,
        'b', 40,
        'e', 38,
        'i', 7,
        's', 49,
        'u', 8,
        '{', 58,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ')', 64,
        'O', 135,
        'P', 140,
        'S', 123,
        'V', 118,
        '[', 102,
        'b', 132,
        'i', 103,
        'u', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(146);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == '6') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == '6') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == '8') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == '8') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'K') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '[') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PublicKey);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PublicKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Signature);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Signature);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_Vec);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Vec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_Option);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(105);
      if (lookahead == '3') ADVANCE(106);
      if (lookahead == '6') ADVANCE(109);
      if (lookahead == '8') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead == '3') ADVANCE(107);
      if (lookahead == '6') ADVANCE(110);
      if (lookahead == '8') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(111);
      if (lookahead == '6') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(112);
      if (lookahead == '6') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_PublicKey] = ACTIONS(1),
    [anon_sym_Signature] = ACTIONS(1),
    [anon_sym_Vec] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_Option] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__definition] = STATE(9),
    [sym_struct_definition] = STATE(9),
    [sym_enum_definition] = STATE(9),
    [sym_attribute] = STATE(26),
    [sym_comment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_struct_definition_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(7),
    [anon_sym_POUND_LBRACK] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(11),
    [sym_block_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_Vec,
    ACTIONS(21), 1,
      anon_sym_Option,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_PublicKey,
      anon_sym_Signature,
    STATE(45), 6,
      sym__type,
      sym_primitive_type,
      sym_solana_type,
      sym_vec_type,
      sym_option_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_bool,
      anon_sym_String,
  [42] = 7,
    ACTIONS(19), 1,
      anon_sym_Vec,
    ACTIONS(21), 1,
      anon_sym_Option,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_PublicKey,
      anon_sym_Signature,
    STATE(48), 6,
      sym__type,
      sym_primitive_type,
      sym_solana_type,
      sym_vec_type,
      sym_option_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_bool,
      anon_sym_String,
  [81] = 7,
    ACTIONS(19), 1,
      anon_sym_Vec,
    ACTIONS(21), 1,
      anon_sym_Option,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_PublicKey,
      anon_sym_Signature,
    STATE(59), 6,
      sym__type,
      sym_primitive_type,
      sym_solana_type,
      sym_vec_type,
      sym_option_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_bool,
      anon_sym_String,
  [120] = 7,
    ACTIONS(19), 1,
      anon_sym_Vec,
    ACTIONS(21), 1,
      anon_sym_Option,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_PublicKey,
      anon_sym_Signature,
    STATE(58), 6,
      sym__type,
      sym_primitive_type,
      sym_solana_type,
      sym_vec_type,
      sym_option_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_bool,
      anon_sym_String,
  [159] = 7,
    ACTIONS(19), 1,
      anon_sym_Vec,
    ACTIONS(21), 1,
      anon_sym_Option,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_PublicKey,
      anon_sym_Signature,
    STATE(61), 6,
      sym__type,
      sym_primitive_type,
      sym_solana_type,
      sym_vec_type,
      sym_option_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_bool,
      anon_sym_String,
  [198] = 7,
    ACTIONS(19), 1,
      anon_sym_Vec,
    ACTIONS(21), 1,
      anon_sym_Option,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_PublicKey,
      anon_sym_Signature,
    STATE(43), 6,
      sym__type,
      sym_primitive_type,
      sym_solana_type,
      sym_vec_type,
      sym_option_type,
      sym_array_type,
    ACTIONS(15), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_bool,
      anon_sym_String,
  [237] = 7,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_struct,
    ACTIONS(42), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(48), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(26), 2,
      sym_attribute,
      aux_sym_struct_definition_repeat1,
    STATE(8), 5,
      sym__definition,
      sym_struct_definition,
      sym_enum_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
  [265] = 7,
    ACTIONS(5), 1,
      anon_sym_struct,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(26), 2,
      sym_attribute,
      aux_sym_struct_definition_repeat1,
    STATE(8), 5,
      sym__definition,
      sym_struct_definition,
      sym_enum_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
  [293] = 1,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [302] = 1,
    ACTIONS(55), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [311] = 1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [320] = 1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [329] = 1,
    ACTIONS(61), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [338] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_struct_body,
    ACTIONS(65), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [353] = 1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [362] = 1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [371] = 1,
    ACTIONS(73), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [380] = 1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [389] = 1,
    ACTIONS(77), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [398] = 1,
    ACTIONS(79), 6,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_GT,
      sym_identifier,
  [407] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [416] = 1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [425] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
      sym_line_comment,
      sym_block_comment,
  [434] = 3,
    ACTIONS(89), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(87), 2,
      anon_sym_struct,
      anon_sym_enum,
    STATE(25), 2,
      sym_attribute,
      aux_sym_struct_definition_repeat1,
  [446] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND_LBRACK,
    ACTIONS(92), 1,
      anon_sym_struct,
    ACTIONS(94), 1,
      anon_sym_enum,
    STATE(25), 2,
      sym_attribute,
      aux_sym_struct_definition_repeat1,
  [460] = 4,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_enum_body_repeat1,
    STATE(38), 1,
      sym_enum_variant,
  [473] = 3,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(32), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [484] = 3,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [495] = 4,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_enum_body_repeat1,
    STATE(38), 1,
      sym_enum_variant,
  [508] = 4,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_enum_body_repeat1,
    STATE(38), 1,
      sym_enum_variant,
  [521] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(32), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [532] = 3,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [543] = 3,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_field,
      aux_sym_struct_body_repeat1,
  [554] = 1,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [560] = 1,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [566] = 1,
    ACTIONS(124), 3,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
  [572] = 2,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [580] = 1,
    ACTIONS(85), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [586] = 1,
    ACTIONS(130), 3,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_POUND_LBRACK,
  [592] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_enum_variant_repeat1,
  [602] = 1,
    ACTIONS(137), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [608] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [616] = 1,
    ACTIONS(143), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [622] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_enum_variant_repeat1,
  [632] = 1,
    ACTIONS(149), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [638] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_enum_variant_repeat1,
  [648] = 1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [653] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_struct_body,
  [660] = 2,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_enum_body,
  [667] = 1,
    ACTIONS(106), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [672] = 2,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
  [679] = 2,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_enum_body,
  [686] = 1,
    ACTIONS(161), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [691] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_struct_body,
  [698] = 1,
    ACTIONS(163), 1,
      anon_sym_COLON,
  [702] = 1,
    ACTIONS(165), 1,
      sym_identifier,
  [706] = 1,
    ACTIONS(167), 1,
      anon_sym_GT,
  [710] = 1,
    ACTIONS(169), 1,
      anon_sym_GT,
  [714] = 1,
    ACTIONS(171), 1,
      sym_identifier,
  [718] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
  [722] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [726] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [730] = 1,
    ACTIONS(179), 1,
      anon_sym_LT,
  [734] = 1,
    ACTIONS(181), 1,
      sym_string_literal,
  [738] = 1,
    ACTIONS(183), 1,
      anon_sym_LT,
  [742] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [746] = 1,
    ACTIONS(187), 1,
      sym_identifier,
  [750] = 1,
    ACTIONS(189), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 237,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 302,
  [SMALL_STATE(12)] = 311,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 460,
  [SMALL_STATE(28)] = 473,
  [SMALL_STATE(29)] = 484,
  [SMALL_STATE(30)] = 495,
  [SMALL_STATE(31)] = 508,
  [SMALL_STATE(32)] = 521,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 554,
  [SMALL_STATE(36)] = 560,
  [SMALL_STATE(37)] = 566,
  [SMALL_STATE(38)] = 572,
  [SMALL_STATE(39)] = 580,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 592,
  [SMALL_STATE(42)] = 602,
  [SMALL_STATE(43)] = 608,
  [SMALL_STATE(44)] = 616,
  [SMALL_STATE(45)] = 622,
  [SMALL_STATE(46)] = 632,
  [SMALL_STATE(47)] = 638,
  [SMALL_STATE(48)] = 648,
  [SMALL_STATE(49)] = 653,
  [SMALL_STATE(50)] = 660,
  [SMALL_STATE(51)] = 667,
  [SMALL_STATE(52)] = 672,
  [SMALL_STATE(53)] = 679,
  [SMALL_STATE(54)] = 686,
  [SMALL_STATE(55)] = 691,
  [SMALL_STATE(56)] = 698,
  [SMALL_STATE(57)] = 702,
  [SMALL_STATE(58)] = 706,
  [SMALL_STATE(59)] = 710,
  [SMALL_STATE(60)] = 714,
  [SMALL_STATE(61)] = 718,
  [SMALL_STATE(62)] = 722,
  [SMALL_STATE(63)] = 726,
  [SMALL_STATE(64)] = 730,
  [SMALL_STATE(65)] = 734,
  [SMALL_STATE(66)] = 738,
  [SMALL_STATE(67)] = 742,
  [SMALL_STATE(68)] = 746,
  [SMALL_STATE(69)] = 750,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solana_type, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_type, 4, 0, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 3, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec_type, 4, 0, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lumos(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

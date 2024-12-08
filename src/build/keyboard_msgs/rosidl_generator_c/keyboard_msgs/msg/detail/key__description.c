// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice

#include "keyboard_msgs/msg/detail/key__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_keyboard_msgs
const rosidl_type_hash_t *
keyboard_msgs__msg__Key__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x01, 0x4a, 0x31, 0xd8, 0xce, 0x72, 0xbf,
      0x3d, 0xbb, 0x9d, 0x6b, 0x50, 0x1e, 0xe3, 0x5d,
      0x5f, 0x50, 0xb6, 0x53, 0xe7, 0x85, 0xde, 0xa9,
      0xed, 0x75, 0x0b, 0x7d, 0xc7, 0x4f, 0x4a, 0x48,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char keyboard_msgs__msg__Key__TYPE_NAME[] = "keyboard_msgs/msg/Key";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char keyboard_msgs__msg__Key__FIELD_NAME__header[] = "header";
static char keyboard_msgs__msg__Key__FIELD_NAME__code[] = "code";
static char keyboard_msgs__msg__Key__FIELD_NAME__modifiers[] = "modifiers";

static rosidl_runtime_c__type_description__Field keyboard_msgs__msg__Key__FIELDS[] = {
  {
    {keyboard_msgs__msg__Key__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {keyboard_msgs__msg__Key__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {keyboard_msgs__msg__Key__FIELD_NAME__modifiers, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription keyboard_msgs__msg__Key__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
keyboard_msgs__msg__Key__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {keyboard_msgs__msg__Key__TYPE_NAME, 21, 21},
      {keyboard_msgs__msg__Key__FIELDS, 3, 3},
    },
    {keyboard_msgs__msg__Key__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 KEY_UNKNOWN=0\n"
  "uint16 KEY_FIRST=0\n"
  "uint16 KEY_BACKSPACE=8\n"
  "uint16 KEY_TAB=9\n"
  "uint16 KEY_CLEAR=12\n"
  "uint16 KEY_RETURN=13\n"
  "uint16 KEY_PAUSE=19\n"
  "uint16 KEY_ESCAPE=27\n"
  "uint16 KEY_SPACE=32\n"
  "uint16 KEY_EXCLAIM=33\n"
  "uint16 KEY_QUOTEDBL=34\n"
  "uint16 KEY_HASH=35\n"
  "uint16 KEY_DOLLAR=36\n"
  "uint16 KEY_AMPERSAND=38\n"
  "uint16 KEY_QUOTE=39\n"
  "uint16 KEY_LEFTPAREN=40\n"
  "uint16 KEY_RIGHTPAREN=41\n"
  "uint16 KEY_ASTERISK=42\n"
  "uint16 KEY_PLUS=43\n"
  "uint16 KEY_COMMA=44\n"
  "uint16 KEY_MINUS=45\n"
  "uint16 KEY_PERIOD=46\n"
  "uint16 KEY_SLASH=47\n"
  "uint16 KEY_0=48\n"
  "uint16 KEY_1=49\n"
  "uint16 KEY_2=50\n"
  "uint16 KEY_3=51\n"
  "uint16 KEY_4=52\n"
  "uint16 KEY_5=53\n"
  "uint16 KEY_6=54\n"
  "uint16 KEY_7=55\n"
  "uint16 KEY_8=56\n"
  "uint16 KEY_9=57\n"
  "uint16 KEY_COLON=58\n"
  "uint16 KEY_SEMICOLON=59\n"
  "uint16 KEY_LESS=60\n"
  "uint16 KEY_EQUALS=61\n"
  "uint16 KEY_GREATER=62\n"
  "uint16 KEY_QUESTION=63\n"
  "uint16 KEY_AT=64\n"
  "uint16 KEY_LEFTBRACKET=91\n"
  "uint16 KEY_BACKSLASH=92\n"
  "uint16 KEY_RIGHTBRACKET=93\n"
  "uint16 KEY_CARET=94\n"
  "uint16 KEY_UNDERSCORE=95\n"
  "uint16 KEY_BACKQUOTE=96\n"
  "uint16 KEY_A=97\n"
  "uint16 KEY_B=98\n"
  "uint16 KEY_C=99\n"
  "uint16 KEY_D=100\n"
  "uint16 KEY_E=101\n"
  "uint16 KEY_F=102\n"
  "uint16 KEY_G=103\n"
  "uint16 KEY_H=104\n"
  "uint16 KEY_I=105\n"
  "uint16 KEY_J=106\n"
  "uint16 KEY_K=107\n"
  "uint16 KEY_L=108\n"
  "uint16 KEY_M=109\n"
  "uint16 KEY_N=110\n"
  "uint16 KEY_O=111\n"
  "uint16 KEY_P=112\n"
  "uint16 KEY_Q=113\n"
  "uint16 KEY_R=114\n"
  "uint16 KEY_S=115\n"
  "uint16 KEY_T=116\n"
  "uint16 KEY_U=117\n"
  "uint16 KEY_V=118\n"
  "uint16 KEY_W=119\n"
  "uint16 KEY_X=120\n"
  "uint16 KEY_Y=121\n"
  "uint16 KEY_Z=122\n"
  "uint16 KEY_DELETE=127\n"
  "uint16 KEY_WORLD_0=160\n"
  "uint16 KEY_WORLD_1=161\n"
  "uint16 KEY_WORLD_2=162\n"
  "uint16 KEY_WORLD_3=163\n"
  "uint16 KEY_WORLD_4=164\n"
  "uint16 KEY_WORLD_5=165\n"
  "uint16 KEY_WORLD_6=166\n"
  "uint16 KEY_WORLD_7=167\n"
  "uint16 KEY_WORLD_8=168\n"
  "uint16 KEY_WORLD_9=169\n"
  "uint16 KEY_WORLD_10=170\n"
  "uint16 KEY_WORLD_11=171\n"
  "uint16 KEY_WORLD_12=172\n"
  "uint16 KEY_WORLD_13=173\n"
  "uint16 KEY_WORLD_14=174\n"
  "uint16 KEY_WORLD_15=175\n"
  "uint16 KEY_WORLD_16=176\n"
  "uint16 KEY_WORLD_17=177\n"
  "uint16 KEY_WORLD_18=178\n"
  "uint16 KEY_WORLD_19=179\n"
  "uint16 KEY_WORLD_20=180\n"
  "uint16 KEY_WORLD_21=181\n"
  "uint16 KEY_WORLD_22=182\n"
  "uint16 KEY_WORLD_23=183\n"
  "uint16 KEY_WORLD_24=184\n"
  "uint16 KEY_WORLD_25=185\n"
  "uint16 KEY_WORLD_26=186\n"
  "uint16 KEY_WORLD_27=187\n"
  "uint16 KEY_WORLD_28=188\n"
  "uint16 KEY_WORLD_29=189\n"
  "uint16 KEY_WORLD_30=190\n"
  "uint16 KEY_WORLD_31=191\n"
  "uint16 KEY_WORLD_32=192\n"
  "uint16 KEY_WORLD_33=193\n"
  "uint16 KEY_WORLD_34=194\n"
  "uint16 KEY_WORLD_35=195\n"
  "uint16 KEY_WORLD_36=196\n"
  "uint16 KEY_WORLD_37=197\n"
  "uint16 KEY_WORLD_38=198\n"
  "uint16 KEY_WORLD_39=199\n"
  "uint16 KEY_WORLD_40=200\n"
  "uint16 KEY_WORLD_41=201\n"
  "uint16 KEY_WORLD_42=202\n"
  "uint16 KEY_WORLD_43=203\n"
  "uint16 KEY_WORLD_44=204\n"
  "uint16 KEY_WORLD_45=205\n"
  "uint16 KEY_WORLD_46=206\n"
  "uint16 KEY_WORLD_47=207\n"
  "uint16 KEY_WORLD_48=208\n"
  "uint16 KEY_WORLD_49=209\n"
  "uint16 KEY_WORLD_50=210\n"
  "uint16 KEY_WORLD_51=211\n"
  "uint16 KEY_WORLD_52=212\n"
  "uint16 KEY_WORLD_53=213\n"
  "uint16 KEY_WORLD_54=214\n"
  "uint16 KEY_WORLD_55=215\n"
  "uint16 KEY_WORLD_56=216\n"
  "uint16 KEY_WORLD_57=217\n"
  "uint16 KEY_WORLD_58=218\n"
  "uint16 KEY_WORLD_59=219\n"
  "uint16 KEY_WORLD_60=220\n"
  "uint16 KEY_WORLD_61=221\n"
  "uint16 KEY_WORLD_62=222\n"
  "uint16 KEY_WORLD_63=223\n"
  "uint16 KEY_WORLD_64=224\n"
  "uint16 KEY_WORLD_65=225\n"
  "uint16 KEY_WORLD_66=226\n"
  "uint16 KEY_WORLD_67=227\n"
  "uint16 KEY_WORLD_68=228\n"
  "uint16 KEY_WORLD_69=229\n"
  "uint16 KEY_WORLD_70=230\n"
  "uint16 KEY_WORLD_71=231\n"
  "uint16 KEY_WORLD_72=232\n"
  "uint16 KEY_WORLD_73=233\n"
  "uint16 KEY_WORLD_74=234\n"
  "uint16 KEY_WORLD_75=235\n"
  "uint16 KEY_WORLD_76=236\n"
  "uint16 KEY_WORLD_77=237\n"
  "uint16 KEY_WORLD_78=238\n"
  "uint16 KEY_WORLD_79=239\n"
  "uint16 KEY_WORLD_80=240\n"
  "uint16 KEY_WORLD_81=241\n"
  "uint16 KEY_WORLD_82=242\n"
  "uint16 KEY_WORLD_83=243\n"
  "uint16 KEY_WORLD_84=244\n"
  "uint16 KEY_WORLD_85=245\n"
  "uint16 KEY_WORLD_86=246\n"
  "uint16 KEY_WORLD_87=247\n"
  "uint16 KEY_WORLD_88=248\n"
  "uint16 KEY_WORLD_89=249\n"
  "uint16 KEY_WORLD_90=250\n"
  "uint16 KEY_WORLD_91=251\n"
  "uint16 KEY_WORLD_92=252\n"
  "uint16 KEY_WORLD_93=253\n"
  "uint16 KEY_WORLD_94=254\n"
  "uint16 KEY_WORLD_95=255\n"
  "uint16 KEY_KP0=256\n"
  "uint16 KEY_KP1=257\n"
  "uint16 KEY_KP2=258\n"
  "uint16 KEY_KP3=259\n"
  "uint16 KEY_KP4=260\n"
  "uint16 KEY_KP5=261\n"
  "uint16 KEY_KP6=262\n"
  "uint16 KEY_KP7=263\n"
  "uint16 KEY_KP8=264\n"
  "uint16 KEY_KP9=265\n"
  "uint16 KEY_KP_PERIOD=266\n"
  "uint16 KEY_KP_DIVIDE=267\n"
  "uint16 KEY_KP_MULTIPLY=268\n"
  "uint16 KEY_KP_MINUS=269\n"
  "uint16 KEY_KP_PLUS=270\n"
  "uint16 KEY_KP_ENTER=271\n"
  "uint16 KEY_KP_EQUALS=272\n"
  "uint16 KEY_UP=273\n"
  "uint16 KEY_DOWN=274\n"
  "uint16 KEY_RIGHT=275\n"
  "uint16 KEY_LEFT=276\n"
  "uint16 KEY_INSERT=277\n"
  "uint16 KEY_HOME=278\n"
  "uint16 KEY_END=279\n"
  "uint16 KEY_PAGEUP=280\n"
  "uint16 KEY_PAGEDOWN=281\n"
  "uint16 KEY_F1=282\n"
  "uint16 KEY_F2=283\n"
  "uint16 KEY_F3=284\n"
  "uint16 KEY_F4=285\n"
  "uint16 KEY_F5=286\n"
  "uint16 KEY_F6=287\n"
  "uint16 KEY_F7=288\n"
  "uint16 KEY_F8=289\n"
  "uint16 KEY_F9=290\n"
  "uint16 KEY_F10=291\n"
  "uint16 KEY_F11=292\n"
  "uint16 KEY_F12=293\n"
  "uint16 KEY_F13=294\n"
  "uint16 KEY_F14=295\n"
  "uint16 KEY_F15=296\n"
  "uint16 KEY_NUMLOCK=300\n"
  "uint16 KEY_CAPSLOCK=301\n"
  "uint16 KEY_SCROLLOCK=302\n"
  "uint16 KEY_RSHIFT=303\n"
  "uint16 KEY_LSHIFT=304\n"
  "uint16 KEY_RCTRL=305\n"
  "uint16 KEY_LCTRL=306\n"
  "uint16 KEY_RALT=307\n"
  "uint16 KEY_LALT=308\n"
  "uint16 KEY_RMETA=309\n"
  "uint16 KEY_LMETA=310\n"
  "uint16 KEY_LSUPER=311\n"
  "uint16 KEY_RSUPER=312\n"
  "uint16 KEY_MODE=313\n"
  "uint16 KEY_COMPOSE=314\n"
  "uint16 KEY_HELP=315\n"
  "uint16 KEY_PRINT=316\n"
  "uint16 KEY_SYSREQ=317\n"
  "uint16 KEY_BREAK=318\n"
  "uint16 KEY_MENU=319\n"
  "uint16 KEY_POWER=320\n"
  "uint16 KEY_EURO=321\n"
  "uint16 KEY_UNDO=322\n"
  "uint16 MODIFIER_NONE=0\n"
  "uint16 MODIFIER_LSHIFT=1\n"
  "uint16 MODIFIER_RSHIFT=2\n"
  "uint16 MODIFIER_LCTRL=64\n"
  "uint16 MODIFIER_RCTRL=128\n"
  "uint16 MODIFIER_LALT=256\n"
  "uint16 MODIFIER_RALT=512\n"
  "uint16 MODIFIER_LMETA=1024\n"
  "uint16 MODIFIER_RMETA=2048\n"
  "uint16 MODIFIER_NUM=4096\n"
  "uint16 MODIFIER_CAPS=8192\n"
  "uint16 MODIFIER_MODE=16384\n"
  "uint16 MODIFIER_RESERVED=32768\n"
  "\n"
  "std_msgs/Header header\n"
  "uint16 code\n"
  "uint16 modifiers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
keyboard_msgs__msg__Key__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {keyboard_msgs__msg__Key__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 5397, 5397},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
keyboard_msgs__msg__Key__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *keyboard_msgs__msg__Key__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

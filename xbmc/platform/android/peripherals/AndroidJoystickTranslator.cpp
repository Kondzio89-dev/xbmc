/*
 *  Copyright (C) 2017-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include "AndroidJoystickTranslator.h"

#include <android/input.h>
#include <android/keycodes.h>

using namespace PERIPHERALS;

const char* CAndroidJoystickTranslator::TranslateAxis(int axisId)
{
  switch (axisId)
  {
    case AMOTION_EVENT_AXIS_X:
      return "AMOTION_EVENT_AXIS_X";
    case AMOTION_EVENT_AXIS_Y:
      return "AMOTION_EVENT_AXIS_Y";
    case AMOTION_EVENT_AXIS_PRESSURE:
      return "AMOTION_EVENT_AXIS_PRESSURE";
    case AMOTION_EVENT_AXIS_SIZE:
      return "AMOTION_EVENT_AXIS_SIZE";
    case AMOTION_EVENT_AXIS_TOUCH_MAJOR:
      return "AMOTION_EVENT_AXIS_TOUCH_MAJOR";
    case AMOTION_EVENT_AXIS_TOUCH_MINOR:
      return "AMOTION_EVENT_AXIS_TOUCH_MINOR";
    case AMOTION_EVENT_AXIS_TOOL_MAJOR:
      return "AMOTION_EVENT_AXIS_TOOL_MAJOR";
    case AMOTION_EVENT_AXIS_TOOL_MINOR:
      return "AMOTION_EVENT_AXIS_TOOL_MINOR";
    case AMOTION_EVENT_AXIS_ORIENTATION:
      return "AMOTION_EVENT_AXIS_ORIENTATION";
    case AMOTION_EVENT_AXIS_VSCROLL:
      return "AMOTION_EVENT_AXIS_VSCROLL";
    case AMOTION_EVENT_AXIS_HSCROLL:
      return "AMOTION_EVENT_AXIS_HSCROLL";
    case AMOTION_EVENT_AXIS_Z:
      return "AMOTION_EVENT_AXIS_Z";
    case AMOTION_EVENT_AXIS_RX:
      return "AMOTION_EVENT_AXIS_RX";
    case AMOTION_EVENT_AXIS_RY:
      return "AMOTION_EVENT_AXIS_RY";
    case AMOTION_EVENT_AXIS_RZ:
      return "AMOTION_EVENT_AXIS_RZ";
    case AMOTION_EVENT_AXIS_HAT_X:
      return "AMOTION_EVENT_AXIS_HAT_X";
    case AMOTION_EVENT_AXIS_HAT_Y:
      return "AMOTION_EVENT_AXIS_HAT_Y";
    case AMOTION_EVENT_AXIS_LTRIGGER:
      return "AMOTION_EVENT_AXIS_LTRIGGER";
    case AMOTION_EVENT_AXIS_RTRIGGER:
      return "AMOTION_EVENT_AXIS_RTRIGGER";
    case AMOTION_EVENT_AXIS_THROTTLE:
      return "AMOTION_EVENT_AXIS_THROTTLE";
    case AMOTION_EVENT_AXIS_RUDDER:
      return "AMOTION_EVENT_AXIS_RUDDER";
    case AMOTION_EVENT_AXIS_WHEEL:
      return "AMOTION_EVENT_AXIS_WHEEL";
    case AMOTION_EVENT_AXIS_GAS:
      return "AMOTION_EVENT_AXIS_GAS";
    case AMOTION_EVENT_AXIS_BRAKE:
      return "AMOTION_EVENT_AXIS_BRAKE";
    case AMOTION_EVENT_AXIS_DISTANCE:
      return "AMOTION_EVENT_AXIS_DISTANCE";
    case AMOTION_EVENT_AXIS_TILT:
      return "AMOTION_EVENT_AXIS_TILT";
    case AMOTION_EVENT_AXIS_GENERIC_1:
      return "AMOTION_EVENT_AXIS_GENERIC_1";
    case AMOTION_EVENT_AXIS_GENERIC_2:
      return "AMOTION_EVENT_AXIS_GENERIC_2";
    case AMOTION_EVENT_AXIS_GENERIC_3:
      return "AMOTION_EVENT_AXIS_GENERIC_3";
    case AMOTION_EVENT_AXIS_GENERIC_4:
      return "AMOTION_EVENT_AXIS_GENERIC_4";
    case AMOTION_EVENT_AXIS_GENERIC_5:
      return "AMOTION_EVENT_AXIS_GENERIC_5";
    case AMOTION_EVENT_AXIS_GENERIC_6:
      return "AMOTION_EVENT_AXIS_GENERIC_6";
    case AMOTION_EVENT_AXIS_GENERIC_7:
      return "AMOTION_EVENT_AXIS_GENERIC_7";
    case AMOTION_EVENT_AXIS_GENERIC_8:
      return "AMOTION_EVENT_AXIS_GENERIC_8";
    case AMOTION_EVENT_AXIS_GENERIC_9:
      return "AMOTION_EVENT_AXIS_GENERIC_9";
    case AMOTION_EVENT_AXIS_GENERIC_10:
      return "AMOTION_EVENT_AXIS_GENERIC_10";
    case AMOTION_EVENT_AXIS_GENERIC_11:
      return "AMOTION_EVENT_AXIS_GENERIC_11";
    case AMOTION_EVENT_AXIS_GENERIC_12:
      return "AMOTION_EVENT_AXIS_GENERIC_12";
    case AMOTION_EVENT_AXIS_GENERIC_13:
      return "AMOTION_EVENT_AXIS_GENERIC_13";
    case AMOTION_EVENT_AXIS_GENERIC_14:
      return "AMOTION_EVENT_AXIS_GENERIC_14";
    case AMOTION_EVENT_AXIS_GENERIC_15:
      return "AMOTION_EVENT_AXIS_GENERIC_15";
    case AMOTION_EVENT_AXIS_GENERIC_16:
      return "AMOTION_EVENT_AXIS_GENERIC_16";
  }

  return "unknown";
}

const char* CAndroidJoystickTranslator::TranslateKeyCode(int keyCode)
{
  switch (keyCode)
  {
    case AKEYCODE_UNKNOWN:
      return "AKEYCODE_UNKNOWN";
    case AKEYCODE_SOFT_LEFT:
      return "AKEYCODE_SOFT_LEFT";
    case AKEYCODE_SOFT_RIGHT:
      return "AKEYCODE_SOFT_RIGHT";
    case AKEYCODE_HOME:
      return "AKEYCODE_HOME";
    case AKEYCODE_BACK:
      return "AKEYCODE_BACK";
    case AKEYCODE_CALL:
      return "AKEYCODE_CALL";
    case AKEYCODE_ENDCALL:
      return "AKEYCODE_ENDCALL";
    case AKEYCODE_0:
      return "AKEYCODE_0";
    case AKEYCODE_1:
      return "AKEYCODE_1";
    case AKEYCODE_2:
      return "AKEYCODE_2";
    case AKEYCODE_3:
      return "AKEYCODE_3";
    case AKEYCODE_4:
      return "AKEYCODE_4";
    case AKEYCODE_5:
      return "AKEYCODE_5";
    case AKEYCODE_6:
      return "AKEYCODE_6";
    case AKEYCODE_7:
      return "AKEYCODE_7";
    case AKEYCODE_8:
      return "AKEYCODE_8";
    case AKEYCODE_9:
      return "AKEYCODE_9";
    case AKEYCODE_STAR:
      return "AKEYCODE_STAR";
    case AKEYCODE_POUND:
      return "AKEYCODE_POUND";
    case AKEYCODE_DPAD_UP:
      return "AKEYCODE_DPAD_UP";
    case AKEYCODE_DPAD_DOWN:
      return "AKEYCODE_DPAD_DOWN";
    case AKEYCODE_DPAD_LEFT:
      return "AKEYCODE_DPAD_LEFT";
    case AKEYCODE_DPAD_RIGHT:
      return "AKEYCODE_DPAD_RIGHT";
    case AKEYCODE_DPAD_CENTER:
      return "AKEYCODE_DPAD_CENTER";
    case AKEYCODE_VOLUME_UP:
      return "AKEYCODE_VOLUME_UP";
    case AKEYCODE_VOLUME_DOWN:
      return "AKEYCODE_VOLUME_DOWN";
    case AKEYCODE_POWER:
      return "AKEYCODE_POWER";
    case AKEYCODE_CAMERA:
      return "AKEYCODE_CAMERA";
    case AKEYCODE_CLEAR:
      return "AKEYCODE_CLEAR";
    case AKEYCODE_A:
      return "AKEYCODE_A";
    case AKEYCODE_B:
      return "AKEYCODE_B";
    case AKEYCODE_C:
      return "AKEYCODE_C";
    case AKEYCODE_D:
      return "AKEYCODE_D";
    case AKEYCODE_E:
      return "AKEYCODE_E";
    case AKEYCODE_F:
      return "AKEYCODE_F";
    case AKEYCODE_G:
      return "AKEYCODE_G";
    case AKEYCODE_H:
      return "AKEYCODE_H";
    case AKEYCODE_I:
      return "AKEYCODE_I";
    case AKEYCODE_J:
      return "AKEYCODE_J";
    case AKEYCODE_K:
      return "AKEYCODE_K";
    case AKEYCODE_L:
      return "AKEYCODE_L";
    case AKEYCODE_M:
      return "AKEYCODE_M";
    case AKEYCODE_N:
      return "AKEYCODE_N";
    case AKEYCODE_O:
      return "AKEYCODE_O";
    case AKEYCODE_P:
      return "AKEYCODE_P";
    case AKEYCODE_Q:
      return "AKEYCODE_Q";
    case AKEYCODE_R:
      return "AKEYCODE_R";
    case AKEYCODE_S:
      return "AKEYCODE_S";
    case AKEYCODE_T:
      return "AKEYCODE_T";
    case AKEYCODE_U:
      return "AKEYCODE_U";
    case AKEYCODE_V:
      return "AKEYCODE_V";
    case AKEYCODE_W:
      return "AKEYCODE_W";
    case AKEYCODE_X:
      return "AKEYCODE_X";
    case AKEYCODE_Y:
      return "AKEYCODE_Y";
    case AKEYCODE_Z:
      return "AKEYCODE_Z";
    case AKEYCODE_COMMA:
      return "AKEYCODE_COMMA";
    case AKEYCODE_PERIOD:
      return "AKEYCODE_PERIOD";
    case AKEYCODE_ALT_LEFT:
      return "AKEYCODE_ALT_LEFT";
    case AKEYCODE_ALT_RIGHT:
      return "AKEYCODE_ALT_RIGHT";
    case AKEYCODE_SHIFT_LEFT:
      return "AKEYCODE_SHIFT_LEFT";
    case AKEYCODE_SHIFT_RIGHT:
      return "AKEYCODE_SHIFT_RIGHT";
    case AKEYCODE_TAB:
      return "AKEYCODE_TAB";
    case AKEYCODE_SPACE:
      return "AKEYCODE_SPACE";
    case AKEYCODE_SYM:
      return "AKEYCODE_SYM";
    case AKEYCODE_EXPLORER:
      return "AKEYCODE_EXPLORER";
    case AKEYCODE_ENVELOPE:
      return "AKEYCODE_ENVELOPE";
    case AKEYCODE_ENTER:
      return "AKEYCODE_ENTER";
    case AKEYCODE_DEL:
      return "AKEYCODE_DEL";
    case AKEYCODE_GRAVE:
      return "AKEYCODE_GRAVE";
    case AKEYCODE_MINUS:
      return "AKEYCODE_MINUS";
    case AKEYCODE_EQUALS:
      return "AKEYCODE_EQUALS";
    case AKEYCODE_LEFT_BRACKET:
      return "AKEYCODE_LEFT_BRACKET";
    case AKEYCODE_RIGHT_BRACKET:
      return "AKEYCODE_RIGHT_BRACKET";
    case AKEYCODE_BACKSLASH:
      return "AKEYCODE_BACKSLASH";
    case AKEYCODE_SEMICOLON:
      return "AKEYCODE_SEMICOLON";
    case AKEYCODE_APOSTROPHE:
      return "AKEYCODE_APOSTROPHE";
    case AKEYCODE_SLASH:
      return "AKEYCODE_SLASH";
    case AKEYCODE_AT:
      return "AKEYCODE_AT";
    case AKEYCODE_NUM:
      return "AKEYCODE_NUM";
    case AKEYCODE_HEADSETHOOK:
      return "AKEYCODE_HEADSETHOOK";
    case AKEYCODE_FOCUS:
      return "AKEYCODE_FOCUS";
    case AKEYCODE_PLUS:
      return "AKEYCODE_PLUS";
    case AKEYCODE_MENU:
      return "AKEYCODE_MENU";
    case AKEYCODE_NOTIFICATION:
      return "AKEYCODE_NOTIFICATION";
    case AKEYCODE_SEARCH:
      return "AKEYCODE_SEARCH";
    case AKEYCODE_MEDIA_PLAY_PAUSE:
      return "AKEYCODE_MEDIA_PLAY_PAUSE";
    case AKEYCODE_MEDIA_STOP:
      return "AKEYCODE_MEDIA_STOP";
    case AKEYCODE_MEDIA_NEXT:
      return "AKEYCODE_MEDIA_NEXT";
    case AKEYCODE_MEDIA_PREVIOUS:
      return "AKEYCODE_MEDIA_PREVIOUS";
    case AKEYCODE_MEDIA_REWIND:
      return "AKEYCODE_MEDIA_REWIND";
    case AKEYCODE_MEDIA_FAST_FORWARD:
      return "AKEYCODE_MEDIA_FAST_FORWARD";
    case AKEYCODE_MUTE:
      return "AKEYCODE_MUTE";
    case AKEYCODE_PAGE_UP:
      return "AKEYCODE_PAGE_UP";
    case AKEYCODE_PAGE_DOWN:
      return "AKEYCODE_PAGE_DOWN";
    case AKEYCODE_PICTSYMBOLS:
      return "AKEYCODE_PICTSYMBOLS";
    case AKEYCODE_SWITCH_CHARSET:
      return "AKEYCODE_SWITCH_CHARSET";
    case AKEYCODE_BUTTON_A:
      return "AKEYCODE_BUTTON_A";
    case AKEYCODE_BUTTON_B:
      return "AKEYCODE_BUTTON_B";
    case AKEYCODE_BUTTON_C:
      return "AKEYCODE_BUTTON_C";
    case AKEYCODE_BUTTON_X:
      return "AKEYCODE_BUTTON_X";
    case AKEYCODE_BUTTON_Y:
      return "AKEYCODE_BUTTON_Y";
    case AKEYCODE_BUTTON_Z:
      return "AKEYCODE_BUTTON_Z";
    case AKEYCODE_BUTTON_L1:
      return "AKEYCODE_BUTTON_L1";
    case AKEYCODE_BUTTON_R1:
      return "AKEYCODE_BUTTON_R1";
    case AKEYCODE_BUTTON_L2:
      return "AKEYCODE_BUTTON_L2";
    case AKEYCODE_BUTTON_R2:
      return "AKEYCODE_BUTTON_R2";
    case AKEYCODE_BUTTON_THUMBL:
      return "AKEYCODE_BUTTON_THUMBL";
    case AKEYCODE_BUTTON_THUMBR:
      return "AKEYCODE_BUTTON_THUMBR";
    case AKEYCODE_BUTTON_START:
      return "AKEYCODE_BUTTON_START";
    case AKEYCODE_BUTTON_SELECT:
      return "AKEYCODE_BUTTON_SELECT";
    case AKEYCODE_BUTTON_MODE:
      return "AKEYCODE_BUTTON_MODE";
    case AKEYCODE_ESCAPE:
      return "AKEYCODE_ESCAPE";
    case AKEYCODE_FORWARD_DEL:
      return "AKEYCODE_FORWARD_DEL";
    case AKEYCODE_CTRL_LEFT:
      return "AKEYCODE_CTRL_LEFT";
    case AKEYCODE_CTRL_RIGHT:
      return "AKEYCODE_CTRL_RIGHT";
    case AKEYCODE_CAPS_LOCK:
      return "AKEYCODE_CAPS_LOCK";
    case AKEYCODE_SCROLL_LOCK:
      return "AKEYCODE_SCROLL_LOCK";
    case AKEYCODE_META_LEFT:
      return "AKEYCODE_META_LEFT";
    case AKEYCODE_META_RIGHT:
      return "AKEYCODE_META_RIGHT";
    case AKEYCODE_FUNCTION:
      return "AKEYCODE_FUNCTION";
    case AKEYCODE_SYSRQ:
      return "AKEYCODE_SYSRQ";
    case AKEYCODE_BREAK:
      return "AKEYCODE_BREAK";
    case AKEYCODE_MOVE_HOME:
      return "AKEYCODE_MOVE_HOME";
    case AKEYCODE_MOVE_END:
      return "AKEYCODE_MOVE_END";
    case AKEYCODE_INSERT:
      return "AKEYCODE_INSERT";
    case AKEYCODE_FORWARD:
      return "AKEYCODE_FORWARD";
    case AKEYCODE_MEDIA_PLAY:
      return "AKEYCODE_MEDIA_PLAY";
    case AKEYCODE_MEDIA_PAUSE:
      return "AKEYCODE_MEDIA_PAUSE";
    case AKEYCODE_MEDIA_CLOSE:
      return "AKEYCODE_MEDIA_CLOSE";
    case AKEYCODE_MEDIA_EJECT:
      return "AKEYCODE_MEDIA_EJECT";
    case AKEYCODE_MEDIA_RECORD:
      return "AKEYCODE_MEDIA_RECORD";
    case AKEYCODE_F1:
      return "AKEYCODE_F1";
    case AKEYCODE_F2:
      return "AKEYCODE_F2";
    case AKEYCODE_F3:
      return "AKEYCODE_F3";
    case AKEYCODE_F4:
      return "AKEYCODE_F4";
    case AKEYCODE_F5:
      return "AKEYCODE_F5";
    case AKEYCODE_F6:
      return "AKEYCODE_F6";
    case AKEYCODE_F7:
      return "AKEYCODE_F7";
    case AKEYCODE_F8:
      return "AKEYCODE_F8";
    case AKEYCODE_F9:
      return "AKEYCODE_F9";
    case AKEYCODE_F10:
      return "AKEYCODE_F10";
    case AKEYCODE_F11:
      return "AKEYCODE_F11";
    case AKEYCODE_F12:
      return "AKEYCODE_F12";
    case AKEYCODE_NUM_LOCK:
      return "AKEYCODE_NUM_LOCK";
    case AKEYCODE_NUMPAD_0:
      return "AKEYCODE_NUMPAD_0";
    case AKEYCODE_NUMPAD_1:
      return "AKEYCODE_NUMPAD_1";
    case AKEYCODE_NUMPAD_2:
      return "AKEYCODE_NUMPAD_2";
    case AKEYCODE_NUMPAD_3:
      return "AKEYCODE_NUMPAD_3";
    case AKEYCODE_NUMPAD_4:
      return "AKEYCODE_NUMPAD_4";
    case AKEYCODE_NUMPAD_5:
      return "AKEYCODE_NUMPAD_5";
    case AKEYCODE_NUMPAD_6:
      return "AKEYCODE_NUMPAD_6";
    case AKEYCODE_NUMPAD_7:
      return "AKEYCODE_NUMPAD_7";
    case AKEYCODE_NUMPAD_8:
      return "AKEYCODE_NUMPAD_8";
    case AKEYCODE_NUMPAD_9:
      return "AKEYCODE_NUMPAD_9";
    case AKEYCODE_NUMPAD_DIVIDE:
      return "AKEYCODE_NUMPAD_DIVIDE";
    case AKEYCODE_NUMPAD_MULTIPLY:
      return "AKEYCODE_NUMPAD_MULTIPLY";
    case AKEYCODE_NUMPAD_SUBTRACT:
      return "AKEYCODE_NUMPAD_SUBTRACT";
    case AKEYCODE_NUMPAD_ADD:
      return "AKEYCODE_NUMPAD_ADD";
    case AKEYCODE_NUMPAD_DOT:
      return "AKEYCODE_NUMPAD_DOT";
    case AKEYCODE_NUMPAD_COMMA:
      return "AKEYCODE_NUMPAD_COMMA";
    case AKEYCODE_NUMPAD_ENTER:
      return "AKEYCODE_NUMPAD_ENTER";
    case AKEYCODE_NUMPAD_EQUALS:
      return "AKEYCODE_NUMPAD_EQUALS";
    case AKEYCODE_NUMPAD_LEFT_PAREN:
      return "AKEYCODE_NUMPAD_LEFT_PAREN";
    case AKEYCODE_NUMPAD_RIGHT_PAREN:
      return "AKEYCODE_NUMPAD_RIGHT_PAREN";
    case AKEYCODE_VOLUME_MUTE:
      return "AKEYCODE_VOLUME_MUTE";
    case AKEYCODE_INFO:
      return "AKEYCODE_INFO";
    case AKEYCODE_CHANNEL_UP:
      return "AKEYCODE_CHANNEL_UP";
    case AKEYCODE_CHANNEL_DOWN:
      return "AKEYCODE_CHANNEL_DOWN";
    case AKEYCODE_ZOOM_IN:
      return "AKEYCODE_ZOOM_IN";
    case AKEYCODE_ZOOM_OUT:
      return "AKEYCODE_ZOOM_OUT";
    case AKEYCODE_TV:
      return "AKEYCODE_TV";
    case AKEYCODE_WINDOW:
      return "AKEYCODE_WINDOW";
    case AKEYCODE_GUIDE:
      return "AKEYCODE_GUIDE";
    case AKEYCODE_DVR:
      return "AKEYCODE_DVR";
    case AKEYCODE_BOOKMARK:
      return "AKEYCODE_BOOKMARK";
    case AKEYCODE_CAPTIONS:
      return "AKEYCODE_CAPTIONS";
    case AKEYCODE_SETTINGS:
      return "AKEYCODE_SETTINGS";
    case AKEYCODE_TV_POWER:
      return "AKEYCODE_TV_POWER";
    case AKEYCODE_TV_INPUT:
      return "AKEYCODE_TV_INPUT";
    case AKEYCODE_STB_POWER:
      return "AKEYCODE_STB_POWER";
    case AKEYCODE_STB_INPUT:
      return "AKEYCODE_STB_INPUT";
    case AKEYCODE_AVR_POWER:
      return "AKEYCODE_AVR_POWER";
    case AKEYCODE_AVR_INPUT:
      return "AKEYCODE_AVR_INPUT";
    case AKEYCODE_PROG_RED:
      return "AKEYCODE_PROG_RED";
    case AKEYCODE_PROG_GREEN:
      return "AKEYCODE_PROG_GREEN";
    case AKEYCODE_PROG_YELLOW:
      return "AKEYCODE_PROG_YELLOW";
    case AKEYCODE_PROG_BLUE:
      return "AKEYCODE_PROG_BLUE";
    case AKEYCODE_APP_SWITCH:
      return "AKEYCODE_APP_SWITCH";
    case AKEYCODE_BUTTON_1:
      return "AKEYCODE_BUTTON_1";
    case AKEYCODE_BUTTON_2:
      return "AKEYCODE_BUTTON_2";
    case AKEYCODE_BUTTON_3:
      return "AKEYCODE_BUTTON_3";
    case AKEYCODE_BUTTON_4:
      return "AKEYCODE_BUTTON_4";
    case AKEYCODE_BUTTON_5:
      return "AKEYCODE_BUTTON_5";
    case AKEYCODE_BUTTON_6:
      return "AKEYCODE_BUTTON_6";
    case AKEYCODE_BUTTON_7:
      return "AKEYCODE_BUTTON_7";
    case AKEYCODE_BUTTON_8:
      return "AKEYCODE_BUTTON_8";
    case AKEYCODE_BUTTON_9:
      return "AKEYCODE_BUTTON_9";
    case AKEYCODE_BUTTON_10:
      return "AKEYCODE_BUTTON_10";
    case AKEYCODE_BUTTON_11:
      return "AKEYCODE_BUTTON_11";
    case AKEYCODE_BUTTON_12:
      return "AKEYCODE_BUTTON_12";
    case AKEYCODE_BUTTON_13:
      return "AKEYCODE_BUTTON_13";
    case AKEYCODE_BUTTON_14:
      return "AKEYCODE_BUTTON_14";
    case AKEYCODE_BUTTON_15:
      return "AKEYCODE_BUTTON_15";
    case AKEYCODE_BUTTON_16:
      return "AKEYCODE_BUTTON_16";
    case AKEYCODE_LANGUAGE_SWITCH:
      return "AKEYCODE_LANGUAGE_SWITCH";
    case AKEYCODE_MANNER_MODE:
      return "AKEYCODE_MANNER_MODE";
    case AKEYCODE_3D_MODE:
      return "AKEYCODE_3D_MODE";
    case AKEYCODE_CONTACTS:
      return "AKEYCODE_CONTACTS";
    case AKEYCODE_CALENDAR:
      return "AKEYCODE_CALENDAR";
    case AKEYCODE_MUSIC:
      return "AKEYCODE_MUSIC";
    case AKEYCODE_CALCULATOR:
      return "AKEYCODE_CALCULATOR";
    case AKEYCODE_ZENKAKU_HANKAKU:
      return "AKEYCODE_ZENKAKU_HANKAKU";
    case AKEYCODE_EISU:
      return "AKEYCODE_EISU";
    case AKEYCODE_MUHENKAN:
      return "AKEYCODE_MUHENKAN";
    case AKEYCODE_HENKAN:
      return "AKEYCODE_HENKAN";
    case AKEYCODE_KATAKANA_HIRAGANA:
      return "AKEYCODE_KATAKANA_HIRAGANA";
    case AKEYCODE_YEN:
      return "AKEYCODE_YEN";
    case AKEYCODE_RO:
      return "AKEYCODE_RO";
    case AKEYCODE_KANA:
      return "AKEYCODE_KANA";
    case AKEYCODE_ASSIST:
      return "AKEYCODE_ASSIST";
    case AKEYCODE_BRIGHTNESS_DOWN:
      return "AKEYCODE_BRIGHTNESS_DOWN";
    case AKEYCODE_BRIGHTNESS_UP:
      return "AKEYCODE_BRIGHTNESS_UP";
    case AKEYCODE_MEDIA_AUDIO_TRACK:
      return "AKEYCODE_MEDIA_AUDIO_TRACK";
    case AKEYCODE_SLEEP:
      return "AKEYCODE_SLEEP";
    case AKEYCODE_WAKEUP:
      return "AKEYCODE_WAKEUP";
    case AKEYCODE_PAIRING:
      return "AKEYCODE_PAIRING";
    case AKEYCODE_MEDIA_TOP_MENU:
      return "AKEYCODE_MEDIA_TOP_MENU";
    case AKEYCODE_11:
      return "AKEYCODE_11";
    case AKEYCODE_12:
      return "AKEYCODE_12";
    case AKEYCODE_LAST_CHANNEL:
      return "AKEYCODE_LAST_CHANNEL";
    case AKEYCODE_TV_DATA_SERVICE:
      return "AKEYCODE_TV_DATA_SERVICE";
    case AKEYCODE_VOICE_ASSIST:
      return "AKEYCODE_VOICE_ASSIST";
    case AKEYCODE_TV_RADIO_SERVICE:
      return "AKEYCODE_TV_RADIO_SERVICE";
    case AKEYCODE_TV_TELETEXT:
      return "AKEYCODE_TV_TELETEXT";
    case AKEYCODE_TV_NUMBER_ENTRY:
      return "AKEYCODE_TV_NUMBER_ENTRY";
    case AKEYCODE_TV_TERRESTRIAL_ANALOG:
      return "AKEYCODE_TV_TERRESTRIAL_ANALOG";
    case AKEYCODE_TV_TERRESTRIAL_DIGITAL:
      return "AKEYCODE_TV_TERRESTRIAL_DIGITAL";
    case AKEYCODE_TV_SATELLITE:
      return "AKEYCODE_TV_SATELLITE";
    case AKEYCODE_TV_SATELLITE_BS:
      return "AKEYCODE_TV_SATELLITE_BS";
    case AKEYCODE_TV_SATELLITE_CS:
      return "AKEYCODE_TV_SATELLITE_CS";
    case AKEYCODE_TV_SATELLITE_SERVICE:
      return "AKEYCODE_TV_SATELLITE_SERVICE";
    case AKEYCODE_TV_NETWORK:
      return "AKEYCODE_TV_NETWORK";
    case AKEYCODE_TV_ANTENNA_CABLE:
      return "AKEYCODE_TV_ANTENNA_CABLE";
    case AKEYCODE_TV_INPUT_HDMI_1:
      return "AKEYCODE_TV_INPUT_HDMI_1";
    case AKEYCODE_TV_INPUT_HDMI_2:
      return "AKEYCODE_TV_INPUT_HDMI_2";
    case AKEYCODE_TV_INPUT_HDMI_3:
      return "AKEYCODE_TV_INPUT_HDMI_3";
    case AKEYCODE_TV_INPUT_HDMI_4:
      return "AKEYCODE_TV_INPUT_HDMI_4";
    case AKEYCODE_TV_INPUT_COMPOSITE_1:
      return "AKEYCODE_TV_INPUT_COMPOSITE_1";
    case AKEYCODE_TV_INPUT_COMPOSITE_2:
      return "AKEYCODE_TV_INPUT_COMPOSITE_2";
    case AKEYCODE_TV_INPUT_COMPONENT_1:
      return "AKEYCODE_TV_INPUT_COMPONENT_1";
    case AKEYCODE_TV_INPUT_COMPONENT_2:
      return "AKEYCODE_TV_INPUT_COMPONENT_2";
    case AKEYCODE_TV_INPUT_VGA_1:
      return "AKEYCODE_TV_INPUT_VGA_1";
    case AKEYCODE_TV_AUDIO_DESCRIPTION:
      return "AKEYCODE_TV_AUDIO_DESCRIPTION";
    case AKEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP:
      return "AKEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP";
    case AKEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN:
      return "AKEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN";
    case AKEYCODE_TV_ZOOM_MODE:
      return "AKEYCODE_TV_ZOOM_MODE";
    case AKEYCODE_TV_CONTENTS_MENU:
      return "AKEYCODE_TV_CONTENTS_MENU";
    case AKEYCODE_TV_MEDIA_CONTEXT_MENU:
      return "AKEYCODE_TV_MEDIA_CONTEXT_MENU";
    case AKEYCODE_TV_TIMER_PROGRAMMING:
      return "AKEYCODE_TV_TIMER_PROGRAMMING";
    case AKEYCODE_HELP:
      return "AKEYCODE_HELP";
    case AKEYCODE_NAVIGATE_PREVIOUS:
      return "AKEYCODE_NAVIGATE_PREVIOUS";
    case AKEYCODE_NAVIGATE_NEXT:
      return "AKEYCODE_NAVIGATE_NEXT";
    case AKEYCODE_NAVIGATE_IN:
      return "AKEYCODE_NAVIGATE_IN";
    case AKEYCODE_NAVIGATE_OUT:
      return "AKEYCODE_NAVIGATE_OUT";
    case AKEYCODE_STEM_PRIMARY:
      return "AKEYCODE_STEM_PRIMARY";
    case AKEYCODE_STEM_1:
      return "AKEYCODE_STEM_1";
    case AKEYCODE_STEM_2:
      return "AKEYCODE_STEM_2";
    case AKEYCODE_STEM_3:
      return "AKEYCODE_STEM_3";
    case AKEYCODE_DPAD_UP_LEFT:
      return "AKEYCODE_DPAD_UP_LEFT";
    case AKEYCODE_DPAD_DOWN_LEFT:
      return "AKEYCODE_DPAD_DOWN_LEFT";
    case AKEYCODE_DPAD_UP_RIGHT:
      return "AKEYCODE_DPAD_UP_RIGHT";
    case AKEYCODE_DPAD_DOWN_RIGHT:
      return "AKEYCODE_DPAD_DOWN_RIGHT";
    case AKEYCODE_MEDIA_SKIP_FORWARD:
      return "AKEYCODE_MEDIA_SKIP_FORWARD";
    case AKEYCODE_MEDIA_SKIP_BACKWARD:
      return "AKEYCODE_MEDIA_SKIP_BACKWARD";
    case AKEYCODE_MEDIA_STEP_FORWARD:
      return "AKEYCODE_MEDIA_STEP_FORWARD";
    case AKEYCODE_MEDIA_STEP_BACKWARD:
      return "AKEYCODE_MEDIA_STEP_BACKWARD";
    case AKEYCODE_SOFT_SLEEP:
      return "AKEYCODE_SOFT_SLEEP";
    case AKEYCODE_CUT:
      return "AKEYCODE_CUT";
    case AKEYCODE_COPY:
      return "AKEYCODE_COPY";
    case AKEYCODE_PASTE:
      return "AKEYCODE_PASTE";
    case AKEYCODE_SYSTEM_NAVIGATION_UP:
      return "AKEYCODE_SYSTEM_NAVIGATION_UP";
    case AKEYCODE_SYSTEM_NAVIGATION_DOWN:
      return "AKEYCODE_SYSTEM_NAVIGATION_DOWN";
    case AKEYCODE_SYSTEM_NAVIGATION_LEFT:
      return "AKEYCODE_SYSTEM_NAVIGATION_LEFT";
    case AKEYCODE_SYSTEM_NAVIGATION_RIGHT:
      return "AKEYCODE_SYSTEM_NAVIGATION_RIGHT";
    case AKEYCODE_ALL_APPS:
      return "AKEYCODE_ALL_APPS";
    case AKEYCODE_REFRESH:
      return "AKEYCODE_REFRESH";
    case AKEYCODE_THUMBS_UP:
      return "AKEYCODE_THUMBS_UP";
    case AKEYCODE_THUMBS_DOWN:
      return "AKEYCODE_THUMBS_DOWN";
    case AKEYCODE_PROFILE_SWITCH:
      return "AKEYCODE_PROFILE_SWITCH";
    default:
      break;
  }

  return "unknown";
}

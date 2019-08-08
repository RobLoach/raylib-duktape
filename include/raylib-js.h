#ifndef RAYLIB_JS_H__
#define RAYLIB_JS_H__

#include <iostream>

#include <duktape.h>
#include <dukglue/dukglue.h>
#include <dukglue/detail_primitive_types.h>

#include "raylib-js-structs.h"
#include "raylib-js-functions.h"

void raylib_js_print(std::string out) {
    std::cout << out << std::endl;
}

std::string raylib_js_variablestring(Color c, std::string name) {
    return std::string("const ") + name +
        std::string(" = {r:") + std::to_string(c.r) +
        std::string(",g:") + std::to_string(c.g) +
        std::string(",b:") + std::to_string(c.b) +
        std::string(",a:") + std::to_string(c.a) +
        std::string("};\n");
}

void raylib_js_defines(duk_context* ctx) {
    std::string constants;
    constants += raylib_js_variablestring(LIGHTGRAY, "LIGHTGRAY");
    constants += raylib_js_variablestring(GRAY, "GRAY");
    constants += raylib_js_variablestring(DARKGRAY, "DARKGRAY");
    constants += raylib_js_variablestring(YELLOW, "YELLOW");
    constants += raylib_js_variablestring(GOLD, "GOLD");
    constants += raylib_js_variablestring(ORANGE, "ORANGE");
    constants += raylib_js_variablestring(PINK, "PINK");
    constants += raylib_js_variablestring(RED, "RED");
    constants += raylib_js_variablestring(MAROON, "MAROON");
    constants += raylib_js_variablestring(GREEN, "GREEN");
    constants += raylib_js_variablestring(LIME, "LIME");
    constants += raylib_js_variablestring(DARKGREEN, "DARKGREEN");
    constants += raylib_js_variablestring(SKYBLUE, "SKYBLUE");
    constants += raylib_js_variablestring(BLUE, "BLUE");
    constants += raylib_js_variablestring(DARKBLUE, "DARKBLUE");
    constants += raylib_js_variablestring(PURPLE, "PURPLE");
    constants += raylib_js_variablestring(VIOLET, "VIOLET");
    constants += raylib_js_variablestring(DARKPURPLE, "DARKPURPLE");
    constants += raylib_js_variablestring(BEIGE, "BEIGE");
    constants += raylib_js_variablestring(BROWN, "BROWN");
    constants += raylib_js_variablestring(DARKBROWN, "DARKBROWN");
    constants += raylib_js_variablestring(WHITE, "WHITE");
    constants += raylib_js_variablestring(BLACK, "BLACK");
    constants += raylib_js_variablestring(BLANK, "BLANK");
    constants += raylib_js_variablestring(MAGENTA, "MAGENTA");
    constants += raylib_js_variablestring(RAYWHITE, "RAYWHITE");
    duk_eval_string(ctx, constants.c_str());

    dukglue_register_global(ctx, (float)PI, "PI");
    dukglue_register_global(ctx, (int)MAX_TOUCH_POINTS, "MAX_TOUCH_POINTS");
    dukglue_register_global(ctx, (int)FLAG_SHOW_LOGO, "FLAG_SHOW_LOGO");
    dukglue_register_global(ctx, (int)FLAG_FULLSCREEN_MODE, "FLAG_FULLSCREEN_MODE");
    dukglue_register_global(ctx, (int)FLAG_WINDOW_RESIZABLE, "FLAG_WINDOW_RESIZABLE");
    dukglue_register_global(ctx, (int)FLAG_WINDOW_UNDECORATED, "FLAG_WINDOW_UNDECORATED");
    dukglue_register_global(ctx, (int)FLAG_WINDOW_TRANSPARENT, "FLAG_WINDOW_TRANSPARENT");
    dukglue_register_global(ctx, (int)FLAG_MSAA_4X_HINT, "FLAG_MSAA_4X_HINT");
    dukglue_register_global(ctx, (int)FLAG_VSYNC_HINT, "FLAG_VSYNC_HINT");
    dukglue_register_global(ctx, (int)LOG_ALL, "LOG_ALL");
    dukglue_register_global(ctx, (int)LOG_TRACE, "LOG_TRACE");
    dukglue_register_global(ctx, (int)LOG_DEBUG, "LOG_DEBUG");
    dukglue_register_global(ctx, (int)LOG_INFO, "LOG_INFO");
    dukglue_register_global(ctx, (int)LOG_WARNING, "LOG_WARNING");
    dukglue_register_global(ctx, (int)LOG_ERROR, "LOG_ERROR");
    dukglue_register_global(ctx, (int)LOG_FATAL, "LOG_FATAL");
    dukglue_register_global(ctx, (int)LOG_NONE, "LOG_NONE");
    dukglue_register_global(ctx, (int)KEY_APOSTROPHE, "KEY_APOSTROPHE");
    dukglue_register_global(ctx, (int)KEY_COMMA, "KEY_COMMA");
    dukglue_register_global(ctx, (int)KEY_MINUS, "KEY_MINUS");
    dukglue_register_global(ctx, (int)KEY_PERIOD, "KEY_PERIOD");
    dukglue_register_global(ctx, (int)KEY_SLASH, "KEY_SLASH");
    dukglue_register_global(ctx, (int)KEY_ZERO, "KEY_ZERO");
    dukglue_register_global(ctx, (int)KEY_ONE, "KEY_ONE");
    dukglue_register_global(ctx, (int)KEY_TWO, "KEY_TWO");
    dukglue_register_global(ctx, (int)KEY_THREE, "KEY_THREE");
    dukglue_register_global(ctx, (int)KEY_FOUR, "KEY_FOUR");
    dukglue_register_global(ctx, (int)KEY_FIVE, "KEY_FIVE");
    dukglue_register_global(ctx, (int)KEY_SIX, "KEY_SIX");
    dukglue_register_global(ctx, (int)KEY_SEVEN, "KEY_SEVEN");
    dukglue_register_global(ctx, (int)KEY_EIGHT, "KEY_EIGHT");
    dukglue_register_global(ctx, (int)KEY_NINE, "KEY_NINE");
    dukglue_register_global(ctx, (int)KEY_SEMICOLON, "KEY_SEMICOLON");
    dukglue_register_global(ctx, (int)KEY_EQUAL, "KEY_EQUAL");
    dukglue_register_global(ctx, (int)KEY_A, "KEY_A");
    dukglue_register_global(ctx, (int)KEY_B, "KEY_B");
    dukglue_register_global(ctx, (int)KEY_C, "KEY_C");
    dukglue_register_global(ctx, (int)KEY_D, "KEY_D");
    dukglue_register_global(ctx, (int)KEY_E, "KEY_E");
    dukglue_register_global(ctx, (int)KEY_F, "KEY_F");
    dukglue_register_global(ctx, (int)KEY_G, "KEY_G");
    dukglue_register_global(ctx, (int)KEY_H, "KEY_H");
    dukglue_register_global(ctx, (int)KEY_I, "KEY_I");
    dukglue_register_global(ctx, (int)KEY_J, "KEY_J");
    dukglue_register_global(ctx, (int)KEY_K, "KEY_K");
    dukglue_register_global(ctx, (int)KEY_L, "KEY_L");
    dukglue_register_global(ctx, (int)KEY_M, "KEY_M");
    dukglue_register_global(ctx, (int)KEY_N, "KEY_N");
    dukglue_register_global(ctx, (int)KEY_O, "KEY_O");
    dukglue_register_global(ctx, (int)KEY_P, "KEY_P");
    dukglue_register_global(ctx, (int)KEY_Q, "KEY_Q");
    dukglue_register_global(ctx, (int)KEY_R, "KEY_R");
    dukglue_register_global(ctx, (int)KEY_S, "KEY_S");
    dukglue_register_global(ctx, (int)KEY_T, "KEY_T");
    dukglue_register_global(ctx, (int)KEY_U, "KEY_U");
    dukglue_register_global(ctx, (int)KEY_V, "KEY_V");
    dukglue_register_global(ctx, (int)KEY_W, "KEY_W");
    dukglue_register_global(ctx, (int)KEY_X, "KEY_X");
    dukglue_register_global(ctx, (int)KEY_Y, "KEY_Y");
    dukglue_register_global(ctx, (int)KEY_Z, "KEY_Z");
    dukglue_register_global(ctx, (int)KEY_SPACE, "KEY_SPACE");
    dukglue_register_global(ctx, (int)KEY_ESCAPE, "KEY_ESCAPE");
    dukglue_register_global(ctx, (int)KEY_ENTER, "KEY_ENTER");
    dukglue_register_global(ctx, (int)KEY_TAB, "KEY_TAB");
    dukglue_register_global(ctx, (int)KEY_BACKSPACE, "KEY_BACKSPACE");
    dukglue_register_global(ctx, (int)KEY_INSERT, "KEY_INSERT");
    dukglue_register_global(ctx, (int)KEY_DELETE, "KEY_DELETE");
    dukglue_register_global(ctx, (int)KEY_RIGHT, "KEY_RIGHT");
    dukglue_register_global(ctx, (int)KEY_LEFT, "KEY_LEFT");
    dukglue_register_global(ctx, (int)KEY_DOWN, "KEY_DOWN");
    dukglue_register_global(ctx, (int)KEY_UP, "KEY_UP");
    dukglue_register_global(ctx, (int)KEY_PAGE_UP, "KEY_PAGE_UP");
    dukglue_register_global(ctx, (int)KEY_PAGE_DOWN, "KEY_PAGE_DOWN");
    dukglue_register_global(ctx, (int)KEY_HOME, "KEY_HOME");
    dukglue_register_global(ctx, (int)KEY_END, "KEY_END");
    dukglue_register_global(ctx, (int)KEY_CAPS_LOCK, "KEY_CAPS_LOCK");
    dukglue_register_global(ctx, (int)KEY_SCROLL_LOCK, "KEY_SCROLL_LOCK");
    dukglue_register_global(ctx, (int)KEY_NUM_LOCK, "KEY_NUM_LOCK");
    dukglue_register_global(ctx, (int)KEY_PRINT_SCREEN, "KEY_PRINT_SCREEN");
    dukglue_register_global(ctx, (int)KEY_PAUSE, "KEY_PAUSE");
    dukglue_register_global(ctx, (int)KEY_F1, "KEY_F1");
    dukglue_register_global(ctx, (int)KEY_F2, "KEY_F2");
    dukglue_register_global(ctx, (int)KEY_F3, "KEY_F3");
    dukglue_register_global(ctx, (int)KEY_F4, "KEY_F4");
    dukglue_register_global(ctx, (int)KEY_F5, "KEY_F5");
    dukglue_register_global(ctx, (int)KEY_F6, "KEY_F6");
    dukglue_register_global(ctx, (int)KEY_F7, "KEY_F7");
    dukglue_register_global(ctx, (int)KEY_F8, "KEY_F8");
    dukglue_register_global(ctx, (int)KEY_F9, "KEY_F9");
    dukglue_register_global(ctx, (int)KEY_F10, "KEY_F10");
    dukglue_register_global(ctx, (int)KEY_F11, "KEY_F11");
    dukglue_register_global(ctx, (int)KEY_F12, "KEY_F12");
    dukglue_register_global(ctx, (int)KEY_LEFT_SHIFT, "KEY_LEFT_SHIFT");
    dukglue_register_global(ctx, (int)KEY_LEFT_CONTROL, "KEY_LEFT_CONTROL");
    dukglue_register_global(ctx, (int)KEY_LEFT_ALT, "KEY_LEFT_ALT");
    dukglue_register_global(ctx, (int)KEY_LEFT_SUPER, "KEY_LEFT_SUPER");
    dukglue_register_global(ctx, (int)KEY_RIGHT_SHIFT, "KEY_RIGHT_SHIFT");
    dukglue_register_global(ctx, (int)KEY_RIGHT_CONTROL, "KEY_RIGHT_CONTROL");
    dukglue_register_global(ctx, (int)KEY_RIGHT_ALT, "KEY_RIGHT_ALT");
    dukglue_register_global(ctx, (int)KEY_RIGHT_SUPER, "KEY_RIGHT_SUPER");
    dukglue_register_global(ctx, (int)KEY_KB_MENU, "KEY_KB_MENU");
    dukglue_register_global(ctx, (int)KEY_LEFT_BRACKET, "KEY_LEFT_BRACKET");
    dukglue_register_global(ctx, (int)KEY_BACKSLASH, "KEY_BACKSLASH");
    dukglue_register_global(ctx, (int)KEY_RIGHT_BRACKET, "KEY_RIGHT_BRACKET");
    dukglue_register_global(ctx, (int)KEY_GRAVE, "KEY_GRAVE");
    dukglue_register_global(ctx, (int)KEY_KP_0, "KEY_KP_0");
    dukglue_register_global(ctx, (int)KEY_KP_1, "KEY_KP_1");
    dukglue_register_global(ctx, (int)KEY_KP_2, "KEY_KP_2");
    dukglue_register_global(ctx, (int)KEY_KP_3, "KEY_KP_3");
    dukglue_register_global(ctx, (int)KEY_KP_4, "KEY_KP_4");
    dukglue_register_global(ctx, (int)KEY_KP_5, "KEY_KP_5");
    dukglue_register_global(ctx, (int)KEY_KP_6, "KEY_KP_6");
    dukglue_register_global(ctx, (int)KEY_KP_7, "KEY_KP_7");
    dukglue_register_global(ctx, (int)KEY_KP_8, "KEY_KP_8");
    dukglue_register_global(ctx, (int)KEY_KP_9, "KEY_KP_9");
    dukglue_register_global(ctx, (int)KEY_KP_DECIMAL, "KEY_KP_DECIMAL");
    dukglue_register_global(ctx, (int)KEY_KP_DIVIDE, "KEY_KP_DIVIDE");
    dukglue_register_global(ctx, (int)KEY_KP_MULTIPLY, "KEY_KP_MULTIPLY");
    dukglue_register_global(ctx, (int)KEY_KP_SUBTRACT, "KEY_KP_SUBTRACT");
    dukglue_register_global(ctx, (int)KEY_KP_ADD, "KEY_KP_ADD");
    dukglue_register_global(ctx, (int)KEY_KP_ENTER, "KEY_KP_ENTER");
    dukglue_register_global(ctx, (int)KEY_KP_EQUAL, "KEY_KP_EQUAL");
    dukglue_register_global(ctx, (int)KEY_BACK, "KEY_BACK");
    dukglue_register_global(ctx, (int)KEY_MENU, "KEY_MENU");
    dukglue_register_global(ctx, (int)KEY_VOLUME_UP, "KEY_VOLUME_UP");
    dukglue_register_global(ctx, (int)KEY_VOLUME_DOWN, "KEY_VOLUME_DOWN");
    dukglue_register_global(ctx, (int)MOUSE_LEFT_BUTTON, "MOUSE_LEFT_BUTTON");
    dukglue_register_global(ctx, (int)MOUSE_RIGHT_BUTTON, "MOUSE_RIGHT_BUTTON");
    dukglue_register_global(ctx, (int)MOUSE_MIDDLE_BUTTON, "MOUSE_MIDDLE_BUTTON");
    dukglue_register_global(ctx, (int)GAMEPAD_PLAYER1, "GAMEPAD_PLAYER1");
    dukglue_register_global(ctx, (int)GAMEPAD_PLAYER2, "GAMEPAD_PLAYER2");
    dukglue_register_global(ctx, (int)GAMEPAD_PLAYER3, "GAMEPAD_PLAYER3");
    dukglue_register_global(ctx, (int)GAMEPAD_PLAYER4, "GAMEPAD_PLAYER4");

    // GamepadButton
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_UNKNOWN, "GAMEPAD_BUTTON_UNKNOWN");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_FACE_UP, "GAMEPAD_BUTTON_LEFT_FACE_UP");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_FACE_RIGHT, "GAMEPAD_BUTTON_LEFT_FACE_RIGHT");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_FACE_DOWN, "GAMEPAD_BUTTON_LEFT_FACE_DOWN");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_FACE_LEFT, "GAMEPAD_BUTTON_LEFT_FACE_LEFT");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_FACE_UP, "GAMEPAD_BUTTON_RIGHT_FACE_UP");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_FACE_RIGHT, "GAMEPAD_BUTTON_RIGHT_FACE_RIGHT");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_FACE_DOWN, "GAMEPAD_BUTTON_RIGHT_FACE_DOWN");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_FACE_LEFT, "GAMEPAD_BUTTON_RIGHT_FACE_LEFT");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_TRIGGER_1, "GAMEPAD_BUTTON_LEFT_TRIGGER_1");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_TRIGGER_2, "GAMEPAD_BUTTON_LEFT_TRIGGER_2");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_TRIGGER_1, "GAMEPAD_BUTTON_RIGHT_TRIGGER_1");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_TRIGGER_2, "GAMEPAD_BUTTON_RIGHT_TRIGGER_2");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_MIDDLE_LEFT, "GAMEPAD_BUTTON_MIDDLE_LEFT");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_MIDDLE, "GAMEPAD_BUTTON_MIDDLE");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_MIDDLE_RIGHT, "GAMEPAD_BUTTON_MIDDLE_RIGHT");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_LEFT_THUMB, "GAMEPAD_BUTTON_LEFT_THUMB");
    dukglue_register_global(ctx, (int)GAMEPAD_BUTTON_RIGHT_THUMB, "GAMEPAD_BUTTON_RIGHT_THUMB");

    // GamepadAxis
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_UNKNOWN, "GAMEPAD_AXIS_UNKNOWN");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_LEFT_X, "GAMEPAD_AXIS_LEFT_X");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_LEFT_Y, "GAMEPAD_AXIS_LEFT_Y");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_RIGHT_X, "GAMEPAD_AXIS_RIGHT_X");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_RIGHT_Y, "GAMEPAD_AXIS_RIGHT_Y");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_LEFT_TRIGGER, "GAMEPAD_AXIS_LEFT_TRIGGER");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_RIGHT_TRIGGER, "GAMEPAD_AXIS_RIGHT_TRIGGER");

    // TODO: Add ShaderUniformDataType, MaterialMapType, TexmapIndex, PixelFormat, TextureFilterMode.

    // ShaderLocationIndex
    dukglue_register_global(ctx, (int)LOC_VERTEX_POSITION, "LOC_VERTEX_POSITION");
    dukglue_register_global(ctx, (int)LOC_VERTEX_TEXCOORD01, "LOC_VERTEX_TEXCOORD01");
    dukglue_register_global(ctx, (int)LOC_VERTEX_TEXCOORD02, "LOC_VERTEX_TEXCOORD02");
    dukglue_register_global(ctx, (int)LOC_VERTEX_NORMAL, "LOC_VERTEX_NORMAL");
    dukglue_register_global(ctx, (int)LOC_VERTEX_TANGENT, "LOC_VERTEX_TANGENT");
    dukglue_register_global(ctx, (int)LOC_VERTEX_COLOR, "LOC_VERTEX_COLOR");
    dukglue_register_global(ctx, (int)LOC_MATRIX_MVP, "LOC_MATRIX_MVP");
    dukglue_register_global(ctx, (int)LOC_MATRIX_MODEL, "LOC_MATRIX_MODEL");
    dukglue_register_global(ctx, (int)LOC_MATRIX_VIEW, "LOC_MATRIX_VIEW");
    dukglue_register_global(ctx, (int)LOC_MATRIX_PROJECTION, "LOC_MATRIX_PROJECTION");
    dukglue_register_global(ctx, (int)LOC_VECTOR_VIEW, "LOC_VECTOR_VIEW");
    dukglue_register_global(ctx, (int)LOC_COLOR_DIFFUSE, "LOC_COLOR_DIFFUSE");
    dukglue_register_global(ctx, (int)LOC_COLOR_SPECULAR, "LOC_COLOR_SPECULAR");
    dukglue_register_global(ctx, (int)LOC_COLOR_AMBIENT, "LOC_COLOR_AMBIENT");
    dukglue_register_global(ctx, (int)LOC_MAP_ALBEDO, "LOC_MAP_ALBEDO");
    dukglue_register_global(ctx, (int)LOC_MAP_METALNESS, "LOC_MAP_METALNESS");
    dukglue_register_global(ctx, (int)LOC_MAP_NORMAL, "LOC_MAP_NORMAL");
    dukglue_register_global(ctx, (int)LOC_MAP_ROUGHNESS, "LOC_MAP_ROUGHNESS");
    dukglue_register_global(ctx, (int)LOC_MAP_OCCLUSION, "LOC_MAP_OCCLUSION");
    dukglue_register_global(ctx, (int)LOC_MAP_EMISSION, "LOC_MAP_EMISSION");
    dukglue_register_global(ctx, (int)LOC_MAP_HEIGHT, "LOC_MAP_HEIGHT");
    dukglue_register_global(ctx, (int)LOC_MAP_CUBEMAP, "LOC_MAP_CUBEMAP");
    dukglue_register_global(ctx, (int)LOC_MAP_IRRADIANCE, "LOC_MAP_IRRADIANCE");
    dukglue_register_global(ctx, (int)LOC_MAP_PREFILTER, "LOC_MAP_PREFILTER");
    dukglue_register_global(ctx, (int)LOC_MAP_BRDF, "LOC_MAP_BRDF");
    dukglue_register_global(ctx, (int)LOC_MAP_DIFFUSE, "LOC_MAP_DIFFUSE");
    dukglue_register_global(ctx, (int)LOC_MAP_SPECULAR, "LOC_MAP_SPECULAR");

    // Texture parameters: wrap mode
    dukglue_register_global(ctx, (int)WRAP_REPEAT, "WRAP_REPEAT");
    dukglue_register_global(ctx, (int)WRAP_CLAMP, "WRAP_CLAMP");
    dukglue_register_global(ctx, (int)WRAP_MIRROR_REPEAT, "WRAP_MIRROR_REPEAT");
    dukglue_register_global(ctx, (int)WRAP_MIRROR_CLAMP, "WRAP_MIRROR_CLAMP");

    // Font type, defines generation method
    dukglue_register_global(ctx, (int)FONT_DEFAULT, "FONT_DEFAULT");
    dukglue_register_global(ctx, (int)FONT_BITMAP, "FONT_BITMAP");
    dukglue_register_global(ctx, (int)FONT_SDF, "FONT_SDF");

    // Color blending modes (pre-defined)
    dukglue_register_global(ctx, (int)BLEND_ALPHA, "BLEND_ALPHA");
    dukglue_register_global(ctx, (int)BLEND_ADDITIVE, "BLEND_ADDITIVE");
    dukglue_register_global(ctx, (int)BLEND_MULTIPLIED, "BLEND_MULTIPLIED");

    // Gestures type
    dukglue_register_global(ctx, (int)GESTURE_NONE, "GESTURE_NONE");
    dukglue_register_global(ctx, (int)GESTURE_TAP, "GESTURE_TAP");
    dukglue_register_global(ctx, (int)GESTURE_DOUBLETAP, "GESTURE_DOUBLETAP");
    dukglue_register_global(ctx, (int)GESTURE_HOLD, "GESTURE_HOLD");
    dukglue_register_global(ctx, (int)GESTURE_DRAG, "GESTURE_DRAG");
    dukglue_register_global(ctx, (int)GESTURE_SWIPE_RIGHT, "GESTURE_SWIPE_RIGHT");
    dukglue_register_global(ctx, (int)GESTURE_SWIPE_LEFT, "GESTURE_SWIPE_LEFT");
    dukglue_register_global(ctx, (int)GESTURE_SWIPE_UP, "GESTURE_SWIPE_UP");
    dukglue_register_global(ctx, (int)GESTURE_SWIPE_DOWN, "GESTURE_SWIPE_DOWN");
    dukglue_register_global(ctx, (int)GESTURE_PINCH_IN, "GESTURE_PINCH_IN");
    dukglue_register_global(ctx, (int)GESTURE_PINCH_OUT, "GESTURE_PINCH_OUT");

    // Camera system modes
    dukglue_register_global(ctx, (int)CAMERA_CUSTOM, "CAMERA_CUSTOM");
    dukglue_register_global(ctx, (int)CAMERA_FREE, "CAMERA_FREE");
    dukglue_register_global(ctx, (int)CAMERA_ORBITAL, "CAMERA_ORBITAL");
    dukglue_register_global(ctx, (int)CAMERA_FIRST_PERSON, "CAMERA_FIRST_PERSON");
    dukglue_register_global(ctx, (int)CAMERA_THIRD_PERSON, "CAMERA_THIRD_PERSON");

    // Camera projection modes
    dukglue_register_global(ctx, (int)CAMERA_PERSPECTIVE, "CAMERA_PERSPECTIVE");
    dukglue_register_global(ctx, (int)CAMERA_ORTHOGRAPHIC, "CAMERA_ORTHOGRAPHIC");

    // Type of n-patch
    dukglue_register_global(ctx, (int)NPT_9PATCH, "NPT_9PATCH");
    dukglue_register_global(ctx, (int)NPT_3PATCH_VERTICAL, "NPT_3PATCH_VERTICAL");
    dukglue_register_global(ctx, (int)NPT_3PATCH_HORIZONTAL, "NPT_3PATCH_HORIZONTAL");

}

void raylib_js_context(duk_context* ctx) {
    raylib_js_defines(ctx);

    dukglue_register_function(ctx, &raylib_js_print, "print");

    raylib_js_register_functions();
}

#endif

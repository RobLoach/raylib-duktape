
#include <duktape.h>
#include <dukglue/dukglue.h>
#include <dukglue/detail_primitive_types.h>
#include <raylib.h>
#include "raylib-duktape.h"

void duk_raylib_init(duk_context* ctx, duk_uint_t flags) {
    raylib_duktape_globals(ctx);
    raylib_duktape_register_functions(ctx);
}

void raylib_duktape_globals(duk_context* ctx) {
    dukglue_register_global(ctx, LIGHTGRAY, "LIGHTGRAY");
    dukglue_register_global(ctx, GRAY, "GRAY");
    dukglue_register_global(ctx, DARKGRAY, "DARKGRAY");
    dukglue_register_global(ctx, YELLOW, "YELLOW");
    dukglue_register_global(ctx, GOLD, "GOLD");
    dukglue_register_global(ctx, ORANGE, "ORANGE");
    dukglue_register_global(ctx, PINK, "PINK");
    dukglue_register_global(ctx, RED, "RED");
    dukglue_register_global(ctx, MAROON, "MAROON");
    dukglue_register_global(ctx, GREEN, "GREEN");
    dukglue_register_global(ctx, LIME, "LIME");
    dukglue_register_global(ctx, DARKGREEN, "DARKGREEN");
    dukglue_register_global(ctx, SKYBLUE, "SKYBLUE");
    dukglue_register_global(ctx, BLUE, "BLUE");
    dukglue_register_global(ctx, DARKBLUE, "DARKBLUE");
    dukglue_register_global(ctx, PURPLE, "PURPLE");
    dukglue_register_global(ctx, VIOLET, "VIOLET");
    dukglue_register_global(ctx, DARKPURPLE, "DARKPURPLE");
    dukglue_register_global(ctx, BEIGE, "BEIGE");
    dukglue_register_global(ctx, BROWN, "BROWN");
    dukglue_register_global(ctx, DARKBROWN, "DARKBROWN");
    dukglue_register_global(ctx, WHITE, "WHITE");
    dukglue_register_global(ctx, BLACK, "BLACK");
    dukglue_register_global(ctx, BLANK, "BLANK");
    dukglue_register_global(ctx, MAGENTA, "MAGENTA");
    dukglue_register_global(ctx, RAYWHITE, "RAYWHITE");

    dukglue_register_global(ctx, (float)PI, "PI");
    // dukglue_register_global(ctx, (int)MAX_TOUCH_POINTS, "MAX_TOUCH_POINTS");
    // dukglue_register_global(ctx, (int)FLAG_SHOW_LOGO, "FLAG_SHOW_LOGO");
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
    // dukglue_register_global(ctx, (int)GAMEPAD_PLAYER1, "GAMEPAD_PLAYER1");
    // dukglue_register_global(ctx, (int)GAMEPAD_PLAYER2, "GAMEPAD_PLAYER2");
    // dukglue_register_global(ctx, (int)GAMEPAD_PLAYER3, "GAMEPAD_PLAYER3");
    // dukglue_register_global(ctx, (int)GAMEPAD_PLAYER4, "GAMEPAD_PLAYER4");

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
    //dukglue_register_global(ctx, (int)GAMEPAD_AXIS_UNKNOWN, "GAMEPAD_AXIS_UNKNOWN");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_LEFT_X, "GAMEPAD_AXIS_LEFT_X");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_LEFT_Y, "GAMEPAD_AXIS_LEFT_Y");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_RIGHT_X, "GAMEPAD_AXIS_RIGHT_X");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_RIGHT_Y, "GAMEPAD_AXIS_RIGHT_Y");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_LEFT_TRIGGER, "GAMEPAD_AXIS_LEFT_TRIGGER");
    dukglue_register_global(ctx, (int)GAMEPAD_AXIS_RIGHT_TRIGGER, "GAMEPAD_AXIS_RIGHT_TRIGGER");

    // TODO: Add ShaderUniformDataType, MaterialMapType, TexmapIndex, PixelFormat, TextureFilterMode.

    // ShaderLocationIndex
    // dukglue_register_global(ctx, (int)LOC_VERTEX_POSITION, "LOC_VERTEX_POSITION");
    // dukglue_register_global(ctx, (int)LOC_VERTEX_TEXCOORD01, "LOC_VERTEX_TEXCOORD01");
    // dukglue_register_global(ctx, (int)LOC_VERTEX_TEXCOORD02, "LOC_VERTEX_TEXCOORD02");
    // dukglue_register_global(ctx, (int)LOC_VERTEX_NORMAL, "LOC_VERTEX_NORMAL");
    // dukglue_register_global(ctx, (int)LOC_VERTEX_TANGENT, "LOC_VERTEX_TANGENT");
    // dukglue_register_global(ctx, (int)LOC_VERTEX_COLOR, "LOC_VERTEX_COLOR");
    // dukglue_register_global(ctx, (int)LOC_MATRIX_MVP, "LOC_MATRIX_MVP");
    // dukglue_register_global(ctx, (int)LOC_MATRIX_MODEL, "LOC_MATRIX_MODEL");
    // dukglue_register_global(ctx, (int)LOC_MATRIX_VIEW, "LOC_MATRIX_VIEW");
    // dukglue_register_global(ctx, (int)LOC_MATRIX_PROJECTION, "LOC_MATRIX_PROJECTION");
    // dukglue_register_global(ctx, (int)LOC_VECTOR_VIEW, "LOC_VECTOR_VIEW");
    // dukglue_register_global(ctx, (int)LOC_COLOR_DIFFUSE, "LOC_COLOR_DIFFUSE");
    // dukglue_register_global(ctx, (int)LOC_COLOR_SPECULAR, "LOC_COLOR_SPECULAR");
    // dukglue_register_global(ctx, (int)LOC_COLOR_AMBIENT, "LOC_COLOR_AMBIENT");
    // dukglue_register_global(ctx, (int)LOC_MAP_ALBEDO, "LOC_MAP_ALBEDO");
    // dukglue_register_global(ctx, (int)LOC_MAP_METALNESS, "LOC_MAP_METALNESS");
    // dukglue_register_global(ctx, (int)LOC_MAP_NORMAL, "LOC_MAP_NORMAL");
    // dukglue_register_global(ctx, (int)LOC_MAP_ROUGHNESS, "LOC_MAP_ROUGHNESS");
    // dukglue_register_global(ctx, (int)LOC_MAP_OCCLUSION, "LOC_MAP_OCCLUSION");
    // dukglue_register_global(ctx, (int)LOC_MAP_EMISSION, "LOC_MAP_EMISSION");
    // dukglue_register_global(ctx, (int)LOC_MAP_HEIGHT, "LOC_MAP_HEIGHT");
    // dukglue_register_global(ctx, (int)LOC_MAP_CUBEMAP, "LOC_MAP_CUBEMAP");
    // dukglue_register_global(ctx, (int)LOC_MAP_IRRADIANCE, "LOC_MAP_IRRADIANCE");
    // dukglue_register_global(ctx, (int)LOC_MAP_PREFILTER, "LOC_MAP_PREFILTER");
    // dukglue_register_global(ctx, (int)LOC_MAP_BRDF, "LOC_MAP_BRDF");
    // dukglue_register_global(ctx, (int)LOC_MAP_DIFFUSE, "LOC_MAP_DIFFUSE");
    // dukglue_register_global(ctx, (int)LOC_MAP_SPECULAR, "LOC_MAP_SPECULAR");

    // // Texture parameters: wrap mode
    // dukglue_register_global(ctx, (int)WRAP_REPEAT, "WRAP_REPEAT");
    // dukglue_register_global(ctx, (int)WRAP_CLAMP, "WRAP_CLAMP");
    // dukglue_register_global(ctx, (int)WRAP_MIRROR_REPEAT, "WRAP_MIRROR_REPEAT");
    // dukglue_register_global(ctx, (int)WRAP_MIRROR_CLAMP, "WRAP_MIRROR_CLAMP");

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
    // dukglue_register_global(ctx, (int)NPT_9PATCH, "NPT_9PATCH");
    // dukglue_register_global(ctx, (int)NPT_3PATCH_VERTICAL, "NPT_3PATCH_VERTICAL");
    // dukglue_register_global(ctx, (int)NPT_3PATCH_HORIZONTAL, "NPT_3PATCH_HORIZONTAL");

}

void raylib_duktape_register_functions(duk_context* ctx) {
    dukglue_register_function(ctx, &InitWindow, "InitWindow");
    dukglue_register_function(ctx, &WindowShouldClose, "WindowShouldClose");
    dukglue_register_function(ctx, &CloseWindow, "CloseWindow");
    dukglue_register_function(ctx, &IsWindowReady, "IsWindowReady");
    dukglue_register_function(ctx, &IsWindowMinimized, "IsWindowMinimized");
    dukglue_register_function(ctx, &IsWindowResized, "IsWindowResized");
    dukglue_register_function(ctx, &IsWindowHidden, "IsWindowHidden");
    dukglue_register_function(ctx, &ToggleFullscreen, "ToggleFullscreen");
    // dukglue_register_function(ctx, &UnhideWindow, "UnhideWindow");
    // dukglue_register_function(ctx, &HideWindow, "HideWindow");
    dukglue_register_function(ctx, &SetWindowIcon, "SetWindowIcon");
    dukglue_register_function(ctx, &SetWindowTitle, "SetWindowTitle");
    dukglue_register_function(ctx, &SetWindowPosition, "SetWindowPosition");
    dukglue_register_function(ctx, &SetWindowMonitor, "SetWindowMonitor");
    dukglue_register_function(ctx, &SetWindowMinSize, "SetWindowMinSize");
    dukglue_register_function(ctx, &SetWindowSize, "SetWindowSize");
    //dukglue_register_function(ctx, &GetWindowHandle, "GetWindowHandle");
    dukglue_register_function(ctx, &GetScreenWidth, "GetScreenWidth");
    dukglue_register_function(ctx, &GetScreenHeight, "GetScreenHeight");
    dukglue_register_function(ctx, &GetMonitorCount, "GetMonitorCount");
    dukglue_register_function(ctx, &GetMonitorWidth, "GetMonitorWidth");
    dukglue_register_function(ctx, &GetMonitorHeight, "GetMonitorHeight");
    dukglue_register_function(ctx, &GetMonitorPhysicalWidth, "GetMonitorPhysicalWidth");
    dukglue_register_function(ctx, &GetMonitorPhysicalHeight, "GetMonitorPhysicalHeight");
    dukglue_register_function(ctx, &GetMonitorName, "GetMonitorName");
    dukglue_register_function(ctx, &GetClipboardText, "GetClipboardText");
    dukglue_register_function(ctx, &SetClipboardText, "SetClipboardText");
    dukglue_register_function(ctx, &HideCursor, "HideCursor");
    dukglue_register_function(ctx, &IsCursorHidden, "IsCursorHidden");
    dukglue_register_function(ctx, &EnableCursor, "EnableCursor");
    dukglue_register_function(ctx, &DisableCursor, "DisableCursor");
    dukglue_register_function(ctx, &ClearBackground, "ClearBackground");
    dukglue_register_function(ctx, &BeginDrawing, "BeginDrawing");
    dukglue_register_function(ctx, &EndDrawing, "EndDrawing");

    //dukglue_register_constructor<dukglue::types::Camera2DClass, Vector2, Vector2, float, float>(ctx, "Camera");
    //dukglue_set_base_class<Camera2D, dukglue::types::Camera2DClass>(ctx);

    dukglue_register_function(ctx, &BeginMode2D, "BeginMode2D");
    dukglue_register_function(ctx, &EndMode2D, "EndMode2D");
    //dukglue_register_function(ctx, &BeginMode3D, "BeginMode3D");
    dukglue_register_function(ctx, &EndMode3D, "EndMode3D");
    //dukglue_register_function(ctx, &BeginTextureMode, "BeginTextureMode");
    dukglue_register_function(ctx, &EndTextureMode, "EndTextureMode");
    //dukglue_register_function(ctx, &GetMouseRay, "GetMouseRay");
    //dukglue_register_function(ctx, &GetWorldToScreen, "GetWorldToScreen");
    //dukglue_register_function(ctx, &GetCameraMatrix, "GetCameraMatrix");
    dukglue_register_function(ctx, &SetTargetFPS, "SetTargetFPS");
    dukglue_register_function(ctx, &GetFPS, "GetFPS");
    dukglue_register_function(ctx, &GetFrameTime, "GetFrameTime");
    dukglue_register_function(ctx, &GetTime, "GetTime");
    dukglue_register_function(ctx, &ColorToInt, "ColorToInt");
    dukglue_register_function(ctx, &ColorNormalize, "ColorNormalize");
    dukglue_register_function(ctx, &ColorToHSV, "ColorToHSV");
    dukglue_register_function(ctx, &ColorFromHSV, "ColorFromHSV");
    dukglue_register_function(ctx, &GetColor, "GetColor");
    dukglue_register_function(ctx, &Fade, "Fade");

    /*
    dukglue_register_function(ctx, &SetConfigFlags, "SetConfigFlags");
    dukglue_register_function(ctx, &SetTraceLogLevel, "SetTraceLogLevel");
    dukglue_register_function(ctx, &SetTraceLogExit, "SetTraceLogExit");
    dukglue_register_function(ctx, &SetTraceLogCallback, "SetTraceLogCallback");
    dukglue_register_function(ctx, &TraceLog, "TraceLog");
    */

    dukglue_register_function(ctx, &TakeScreenshot, "TakeScreenshot");
    dukglue_register_function(ctx, &GetRandomValue, "GetRandomValue");
    dukglue_register_function(ctx, &FileExists, "FileExists");
    dukglue_register_function(ctx, &IsFileExtension, "IsFileExtension");
    dukglue_register_function(ctx, &DirectoryExists, "DirectoryExists");
    // dukglue_register_function(ctx, &GetExtension, "GetExtension");
    dukglue_register_function(ctx, &GetFileName, "GetFileName");
    dukglue_register_function(ctx, &GetFileNameWithoutExt, "GetFileNameWithoutExt");
    dukglue_register_function(ctx, &GetDirectoryPath, "GetDirectoryPath");
    dukglue_register_function(ctx, &GetPrevDirectoryPath, "GetPrevDirectoryPath");
    dukglue_register_function(ctx, &GetWorkingDirectory, "GetWorkingDirectory");
    //dukglue_register_function(ctx, &GetDirectoryFiles, "GetDirectoryFiles");
    // dukglue_register_function(ctx, &ClearDirectoryFiles, "ClearDirectoryFiles");
    dukglue_register_function(ctx, &ChangeDirectory, "ChangeDirectory");
    dukglue_register_function(ctx, &IsFileDropped, "IsFileDropped");
    //dukglue_register_function(ctx, &GetDroppedFiles, "GetDroppedFiles");
    // dukglue_register_function(ctx, &ClearDroppedFiles, "ClearDroppedFiles");
    dukglue_register_function(ctx, &GetFileModTime, "GetFileModTime");
    // dukglue_register_function(ctx, &StorageSaveValue, "StorageSaveValue");
    // dukglue_register_function(ctx, &StorageLoadValue, "StorageLoadValue");
    dukglue_register_function(ctx, &OpenURL, "OpenURL");
    dukglue_register_function(ctx, &IsKeyPressed, "IsKeyPressed");
    dukglue_register_function(ctx, &IsKeyDown, "IsKeyDown");
    dukglue_register_function(ctx, &IsKeyReleased, "IsKeyReleased");
    dukglue_register_function(ctx, &IsKeyUp, "IsKeyUp");
    dukglue_register_function(ctx, &GetKeyPressed, "GetKeyPressed");
    dukglue_register_function(ctx, &SetExitKey, "SetExitKey");
    dukglue_register_function(ctx, &IsGamepadAvailable, "IsGamepadAvailable");
    // dukglue_register_function(ctx, &IsGamepadName, "IsGamepadName");
    dukglue_register_function(ctx, &GetGamepadName, "GetGamepadName");
    dukglue_register_function(ctx, &IsGamepadButtonPressed, "IsGamepadButtonPressed");
    dukglue_register_function(ctx, &IsGamepadButtonDown, "IsGamepadButtonDown");
    dukglue_register_function(ctx, &IsGamepadButtonReleased, "IsGamepadButtonReleased");
    dukglue_register_function(ctx, &IsGamepadButtonUp, "IsGamepadButtonUp");
    dukglue_register_function(ctx, &GetGamepadButtonPressed, "GetGamepadButtonPressed");
    dukglue_register_function(ctx, &GetGamepadAxisCount, "GetGamepadAxisCount");
    dukglue_register_function(ctx, &GetGamepadAxisMovement, "GetGamepadAxisMovement");
    dukglue_register_function(ctx, &IsMouseButtonPressed, "IsMouseButtonPressed");
    dukglue_register_function(ctx, &IsMouseButtonDown, "IsMouseButtonDown");
    dukglue_register_function(ctx, &IsMouseButtonReleased, "IsMouseButtonReleased");
    dukglue_register_function(ctx, &IsMouseButtonUp, "IsMouseButtonUp");
    dukglue_register_function(ctx, &GetMouseX, "GetMouseX");
    dukglue_register_function(ctx, &GetMouseY, "GetMouseY");
    dukglue_register_function(ctx, &GetMousePosition, "GetMousePosition");
    dukglue_register_function(ctx, &SetMousePosition, "SetMousePosition");
    dukglue_register_function(ctx, &SetMouseOffset, "SetMouseOffset");
    dukglue_register_function(ctx, &SetMouseScale, "SetMouseScale");
    dukglue_register_function(ctx, &GetMouseWheelMove, "GetMouseWheelMove");
    dukglue_register_function(ctx, &GetTouchX, "GetTouchX");
    dukglue_register_function(ctx, &GetTouchY, "GetTouchY");
    dukglue_register_function(ctx, &GetTouchPosition, "GetTouchPosition");
    dukglue_register_function(ctx, &SetGesturesEnabled, "SetGesturesEnabled");
    dukglue_register_function(ctx, &IsGestureDetected, "IsGestureDetected");
    dukglue_register_function(ctx, &GetGestureDetected, "GetGestureDetected");
    // dukglue_register_function(ctx, &GetTouchPointsCount, "GetTouchPointsCount");
    dukglue_register_function(ctx, &GetGestureHoldDuration, "GetGestureHoldDuration");
    dukglue_register_function(ctx, &GetGestureDragVector, "GetGestureDragVector");
    dukglue_register_function(ctx, &GetGestureDragAngle, "GetGestureDragAngle");
    dukglue_register_function(ctx, &GetGesturePinchVector, "GetGesturePinchVector");
    dukglue_register_function(ctx, &GetGesturePinchAngle, "GetGesturePinchAngle");
    //dukglue_register_function(ctx, &SetCameraMode, "SetCameraMode");
    //dukglue_register_function(ctx, &UpdateCamera, "UpdateCamera");
    //dukglue_register_function(ctx, &SetCameraPanControl, "SetCameraPanControl");
    //dukglue_register_function(ctx, &SetCameraAltControl, "SetCameraAltControl");
    //dukglue_register_function(ctx, &SetCameraSmoothZoomControl, "SetCameraSmoothZoomControl");
    //dukglue_register_function(ctx, &SetCameraMoveControls, "SetCameraMoveControls");
    dukglue_register_function(ctx, &DrawPixel, "DrawPixel");
    dukglue_register_function(ctx, &DrawPixelV, "DrawPixelV");
    dukglue_register_function(ctx, &DrawLine, "DrawLine");
    dukglue_register_function(ctx, &DrawLineV, "DrawLineV");
    //dukglue_register_function(ctx, &DrawLineEx, "DrawLineEx");
    dukglue_register_function(ctx, &DrawLineBezier, "DrawLineBezier");
    //dukglue_register_function(ctx, &DrawLineStrip, "DrawLineStrip");
    dukglue_register_function(ctx, &DrawCircle, "DrawCircle");
    dukglue_register_function(ctx, &DrawCircleSector, "DrawCircleSector");
    dukglue_register_function(ctx, &DrawCircleSectorLines, "DrawCircleSectorLines");
    dukglue_register_function(ctx, &DrawCircleGradient, "DrawCircleGradient");
    dukglue_register_function(ctx, &DrawCircleV, "DrawCircleV");
    dukglue_register_function(ctx, &DrawCircleLines, "DrawCircleLines");
    dukglue_register_function(ctx, &DrawRing, "DrawRing");
    dukglue_register_function(ctx, &DrawRingLines, "DrawRingLines");
    dukglue_register_function(ctx, &DrawRectangle, "DrawRectangle");
    dukglue_register_function(ctx, &DrawRectangleV, "DrawRectangleV");
    dukglue_register_function(ctx, &DrawRectangleRec, "DrawRectangleRec");
    dukglue_register_function(ctx, &DrawRectanglePro, "DrawRectanglePro");
    dukglue_register_function(ctx, &DrawRectangleGradientV, "DrawRectangleGradientV");
    dukglue_register_function(ctx, &DrawRectangleGradientH, "DrawRectangleGradientH");
    dukglue_register_function(ctx, &DrawRectangleGradientEx, "DrawRectangleGradientEx");
    dukglue_register_function(ctx, &DrawRectangleLines, "DrawRectangleLines");
    dukglue_register_function(ctx, &DrawRectangleLinesEx, "DrawRectangleLinesEx");
    dukglue_register_function(ctx, &DrawRectangleRounded, "DrawRectangleRounded");
    dukglue_register_function(ctx, &DrawRectangleRoundedLines, "DrawRectangleRoundedLines");
    dukglue_register_function(ctx, &DrawTriangle, "DrawTriangle");
    dukglue_register_function(ctx, &DrawTriangleLines, "DrawTriangleLines");
    //dukglue_register_function(ctx, &DrawTriangleFan, "DrawTriangleFan");
    //dukglue_register_function(ctx, &DrawTriangleStrip, "DrawTriangleStrip");
    dukglue_register_function(ctx, &DrawPoly, "DrawPoly");
    dukglue_register_function(ctx, &SetShapesTexture, "SetShapesTexture");
    dukglue_register_function(ctx, &CheckCollisionRecs, "CheckCollisionRecs");
    dukglue_register_function(ctx, &CheckCollisionCircles, "CheckCollisionCircles");
    dukglue_register_function(ctx, &CheckCollisionCircleRec, "CheckCollisionCircleRec");
    dukglue_register_function(ctx, &GetCollisionRec, "GetCollisionRec");
    dukglue_register_function(ctx, &CheckCollisionPointRec, "CheckCollisionPointRec");
    dukglue_register_function(ctx, &CheckCollisionPointCircle, "CheckCollisionPointCircle");
    dukglue_register_function(ctx, &CheckCollisionPointTriangle, "CheckCollisionPointTriangle");
    dukglue_register_function(ctx, &LoadImage, "LoadImage");
    //dukglue_register_function(ctx, &LoadImageEx, "LoadImageEx");
    //dukglue_register_function(ctx, &LoadImagePro, "LoadImagePro");
    dukglue_register_function(ctx, &LoadImageRaw, "LoadImageRaw");
    dukglue_register_function(ctx, &ExportImage, "ExportImage");
    dukglue_register_function(ctx, &ExportImageAsCode, "ExportImageAsCode");
    dukglue_register_function(ctx, &LoadTexture, "LoadTexture");
    dukglue_register_function(ctx, &LoadTextureFromImage, "LoadTextureFromImage");
    dukglue_register_function(ctx, &LoadTextureCubemap, "LoadTextureCubemap");
    //dukglue_register_function(ctx, &LoadRenderTexture, "LoadRenderTexture");
    dukglue_register_function(ctx, &UnloadImage, "UnloadImage");
    dukglue_register_function(ctx, &UnloadTexture, "UnloadTexture");
    //dukglue_register_function(ctx, &UnloadRenderTexture, "UnloadRenderTexture");
    //dukglue_register_function(ctx, &GetImageData, "GetImageData");
    //dukglue_register_function(ctx, &GetImageDataNormalized, "GetImageDataNormalized");
    //dukglue_register_function(ctx, &GetImageAlphaBorder, "GetImageAlphaBorder");
    //dukglue_register_function(ctx, &GetPixelDataSize, "GetPixelDataSize");
    //dukglue_register_function(ctx, &GetTextureData, "GetTextureData");
    //dukglue_register_function(ctx, &GetScreenData, "GetScreenData");
    //dukglue_register_function(ctx, &UpdateTexture, "UpdateTexture");
    //dukglue_register_function(ctx, &ImageCopy, "ImageCopy");
    //dukglue_register_function(ctx, &ImageFromImage, "ImageFromImage");
    /*
    dukglue_register_function(ctx, &ImageToPOT, "ImageToPOT");
    dukglue_register_function(ctx, &ImageFormat, "ImageFormat");
    dukglue_register_function(ctx, &ImageAlphaMask, "ImageAlphaMask");
    dukglue_register_function(ctx, &ImageAlphaClear, "ImageAlphaClear");
    dukglue_register_function(ctx, &ImageAlphaCrop, "ImageAlphaCrop");
    dukglue_register_function(ctx, &ImageAlphaPremultiply, "ImageAlphaPremultiply");
    dukglue_register_function(ctx, &ImageCrop, "ImageCrop");
    dukglue_register_function(ctx, &ImageResize, "ImageResize");
    dukglue_register_function(ctx, &ImageResizeNN, "ImageResizeNN");
    dukglue_register_function(ctx, &ImageResizeCanvas, "ImageResizeCanvas");
    dukglue_register_function(ctx, &ImageMipmaps, "ImageMipmaps");
    dukglue_register_function(ctx, &ImageDither, "ImageDither");
    dukglue_register_function(ctx, &ImageExtractPalette, "ImageExtractPalette");
    dukglue_register_function(ctx, &ImageText, "ImageText");
    dukglue_register_function(ctx, &ImageTextEx, "ImageTextEx");
    dukglue_register_function(ctx, &ImageDraw, "ImageDraw");
    dukglue_register_function(ctx, &ImageDrawRectangle, "ImageDrawRectangle");
    dukglue_register_function(ctx, &ImageDrawRectangleLines, "ImageDrawRectangleLines");
    dukglue_register_function(ctx, &ImageDrawText, "ImageDrawText");
    dukglue_register_function(ctx, &ImageDrawTextEx, "ImageDrawTextEx");
    dukglue_register_function(ctx, &ImageFlipVertical, "ImageFlipVertical");
    dukglue_register_function(ctx, &ImageFlipHorizontal, "ImageFlipHorizontal");
    dukglue_register_function(ctx, &ImageRotateCW, "ImageRotateCW");
    dukglue_register_function(ctx, &ImageRotateCCW, "ImageRotateCCW");
    dukglue_register_function(ctx, &ImageColorTint, "ImageColorTint");
    dukglue_register_function(ctx, &ImageColorInvert, "ImageColorInvert");
    dukglue_register_function(ctx, &ImageColorGrayscale, "ImageColorGrayscale");
    dukglue_register_function(ctx, &ImageColorContrast, "ImageColorContrast");
    dukglue_register_function(ctx, &ImageColorBrightness, "ImageColorBrightness");
    dukglue_register_function(ctx, &ImageColorReplace, "ImageColorReplace");
    */
    dukglue_register_function(ctx, &GenImageColor, "GenImageColor");
    dukglue_register_function(ctx, &GenImageGradientV, "GenImageGradientV");
    dukglue_register_function(ctx, &GenImageGradientH, "GenImageGradientH");
    dukglue_register_function(ctx, &GenImageGradientRadial, "GenImageGradientRadial");
    dukglue_register_function(ctx, &GenImageChecked, "GenImageChecked");
    dukglue_register_function(ctx, &GenImageWhiteNoise, "GenImageWhiteNoise");
    // dukglue_register_function(ctx, &GenImagePerlinNoise, "GenImagePerlinNoise");
    dukglue_register_function(ctx, &GenImageCellular, "GenImageCellular");
    //dukglue_register_function(ctx, &GenTextureMipmaps, "GenTextureMipmaps");
    dukglue_register_function(ctx, &SetTextureFilter, "SetTextureFilter");
    dukglue_register_function(ctx, &SetTextureWrap, "SetTextureWrap");
    dukglue_register_function(ctx, &DrawTexture, "DrawTexture");
    //dukglue_register_function(ctx, &DrawTextureV, "DrawTextureV");
    //dukglue_register_function(ctx, &DrawTextureEx, "DrawTextureEx");
    //dukglue_register_function(ctx, &DrawTextureRec, "DrawTextureRec");
    //dukglue_register_function(ctx, &DrawTextureQuad, "DrawTextureQuad");
    //dukglue_register_function(ctx, &DrawTexturePro, "DrawTexturePro");
    //dukglue_register_function(ctx, &DrawTextureNPatch, "DrawTextureNPatch");
    //dukglue_register_function(ctx, &GetFontDefault, "GetFontDefault");
    //dukglue_register_function(ctx, &LoadFont, "LoadFont");
    //dukglue_register_function(ctx, &LoadFontEx, "LoadFontEx");
    //dukglue_register_function(ctx, &LoadFontFromImage, "LoadFontFromImage");
    //dukglue_register_function(ctx, &LoadFontData, "LoadFontData");
    //dukglue_register_function(ctx, &GenImageFontAtlas, "GenImageFontAtlas");
    //dukglue_register_function(ctx, &UnloadFont, "UnloadFont");
    dukglue_register_function(ctx, &DrawFPS, "DrawFPS");
    dukglue_register_function(ctx, &DrawText, "DrawText");
    //dukglue_register_function(ctx, &DrawTextEx, "DrawTextEx");
    //dukglue_register_function(ctx, &DrawTextRec, "DrawTextRec");
    //dukglue_register_function(ctx, &DrawTextRecEx, "DrawTextRecEx");
    dukglue_register_function(ctx, &MeasureText, "MeasureText");
    //dukglue_register_function(ctx, &MeasureTextEx, "MeasureTextEx");
    //dukglue_register_function(ctx, &GetGlyphIndex, "GetGlyphIndex");
    //dukglue_register_function(ctx, &GetNextCodepoint, "GetNextCodepoint");
    dukglue_register_function(ctx, &TextIsEqual, "TextIsEqual");
    dukglue_register_function(ctx, &TextLength, "TextLength");
    // dukglue_register_function(ctx, &TextCountCodepoints, "TextCountCodepoints");
    //dukglue_register_function(ctx, &TextFormat, "TextFormat");
    dukglue_register_function(ctx, &TextSubtext, "TextSubtext");
    //dukglue_register_function(ctx, &TextReplace, "TextReplace");
    //dukglue_register_function(ctx, &TextInsert, "TextInsert");
    //dukglue_register_function(ctx, &TextJoin, "TextJoin");
    //dukglue_register_function(ctx, &TextSplit, "TextSplit");
    //dukglue_register_function(ctx, &TextAppend, "TextAppend");
    //dukglue_register_function(ctx, &TextFindIndex, "TextFindIndex");
    dukglue_register_function(ctx, &TextToUpper, "TextToUpper");
    dukglue_register_function(ctx, &TextToLower, "TextToLower");
    dukglue_register_function(ctx, &TextToPascal, "TextToPascal");
    dukglue_register_function(ctx, &TextToInteger, "TextToInteger");
    dukglue_register_function(ctx, &DrawLine3D, "DrawLine3D");
    dukglue_register_function(ctx, &DrawCircle3D, "DrawCircle3D");
    dukglue_register_function(ctx, &DrawCube, "DrawCube");
    dukglue_register_function(ctx, &DrawCubeV, "DrawCubeV");
    dukglue_register_function(ctx, &DrawCubeWires, "DrawCubeWires");
    dukglue_register_function(ctx, &DrawCubeWiresV, "DrawCubeWiresV");
    dukglue_register_function(ctx, &DrawCubeTexture, "DrawCubeTexture");
    dukglue_register_function(ctx, &DrawSphere, "DrawSphere");
    //dukglue_register_function(ctx, &DrawSphereEx, "DrawSphereEx");
    dukglue_register_function(ctx, &DrawSphereWires, "DrawSphereWires");
    dukglue_register_function(ctx, &DrawCylinder, "DrawCylinder");
    dukglue_register_function(ctx, &DrawCylinderWires, "DrawCylinderWires");
    dukglue_register_function(ctx, &DrawPlane, "DrawPlane");
    //dukglue_register_function(ctx, &DrawRay, "DrawRay");
    dukglue_register_function(ctx, &DrawGrid, "DrawGrid");
    // dukglue_register_function(ctx, &DrawGizmo, "DrawGizmo");
    /*
    dukglue_register_function(ctx, &LoadModel, "LoadModel");
    dukglue_register_function(ctx, &LoadModelFromMesh, "LoadModelFromMesh");
    dukglue_register_function(ctx, &UnloadModel, "UnloadModel");
    dukglue_register_function(ctx, &LoadMeshes, "LoadMeshes");
    dukglue_register_function(ctx, &ExportMesh, "ExportMesh");
    dukglue_register_function(ctx, &UnloadMesh, "UnloadMesh");
    dukglue_register_function(ctx, &LoadMaterials, "LoadMaterials");
    dukglue_register_function(ctx, &LoadMaterialDefault, "LoadMaterialDefault");
    dukglue_register_function(ctx, &UnloadMaterial, "UnloadMaterial");
    dukglue_register_function(ctx, &SetMaterialTexture, "SetMaterialTexture");
    dukglue_register_function(ctx, &SetModelMeshMaterial, "SetModelMeshMaterial");
    dukglue_register_function(ctx, &LoadModelAnimations, "LoadModelAnimations");
    dukglue_register_function(ctx, &UpdateModelAnimation, "UpdateModelAnimation");
    dukglue_register_function(ctx, &UnloadModelAnimation, "UnloadModelAnimation");
    dukglue_register_function(ctx, &IsModelAnimationValid, "IsModelAnimationValid");
    dukglue_register_function(ctx, &GenMeshPoly, "GenMeshPoly");
    dukglue_register_function(ctx, &GenMeshPlane, "GenMeshPlane");
    dukglue_register_function(ctx, &GenMeshCube, "GenMeshCube");
    dukglue_register_function(ctx, &GenMeshSphere, "GenMeshSphere");
    dukglue_register_function(ctx, &GenMeshHemiSphere, "GenMeshHemiSphere");
    dukglue_register_function(ctx, &GenMeshCylinder, "GenMeshCylinder");
    dukglue_register_function(ctx, &GenMeshTorus, "GenMeshTorus");
    dukglue_register_function(ctx, &GenMeshKnot, "GenMeshKnot");
    dukglue_register_function(ctx, &GenMeshHeightmap, "GenMeshHeightmap");
    dukglue_register_function(ctx, &GenMeshCubicmap, "GenMeshCubicmap");
    dukglue_register_function(ctx, &MeshBoundingBox, "MeshBoundingBox");
    dukglue_register_function(ctx, &MeshTangents, "MeshTangents");
    dukglue_register_function(ctx, &MeshBinormals, "MeshBinormals");
    */

    /*
    dukglue_register_function(ctx, &DrawModel, "DrawModel");
    dukglue_register_function(ctx, &DrawModelEx, "DrawModelEx");
    dukglue_register_function(ctx, &DrawModelWires, "DrawModelWires");
    dukglue_register_function(ctx, &DrawModelWiresEx, "DrawModelWiresEx");
    dukglue_register_function(ctx, &DrawBoundingBox, "DrawBoundingBox");
    dukglue_register_function(ctx, &DrawBillboard, "DrawBillboard");
    dukglue_register_function(ctx, &DrawBillboardRec, "DrawBillboardRec");
    dukglue_register_function(ctx, &CheckCollisionSpheres, "CheckCollisionSpheres");
    dukglue_register_function(ctx, &CheckCollisionBoxes, "CheckCollisionBoxes");
    dukglue_register_function(ctx, &CheckCollisionBoxSphere, "CheckCollisionBoxSphere");
    dukglue_register_function(ctx, &CheckCollisionRaySphere, "CheckCollisionRaySphere");
    dukglue_register_function(ctx, &CheckCollisionRaySphereEx, "CheckCollisionRaySphereEx");
    dukglue_register_function(ctx, &CheckCollisionRayBox, "CheckCollisionRayBox");
    dukglue_register_function(ctx, &GetCollisionRayModel, "GetCollisionRayModel");
    dukglue_register_function(ctx, &GetCollisionRayTriangle, "GetCollisionRayTriangle");
    dukglue_register_function(ctx, &GetCollisionRayGround, "GetCollisionRayGround");
    */
    //dukglue_register_function(ctx, &LoadText, "LoadText");
    /*
    dukglue_register_function(ctx, &LoadShader, "LoadShader");
    dukglue_register_function(ctx, &LoadShaderCode, "LoadShaderCode");
    dukglue_register_function(ctx, &UnloadShader, "UnloadShader");
    dukglue_register_function(ctx, &GetShaderDefault, "GetShaderDefault");
    dukglue_register_function(ctx, &GetTextureDefault, "GetTextureDefault");
    dukglue_register_function(ctx, &GetShaderLocation, "GetShaderLocation");
    dukglue_register_function(ctx, &SetShaderValue, "SetShaderValue");
    dukglue_register_function(ctx, &SetShaderValueV, "SetShaderValueV");
    dukglue_register_function(ctx, &SetShaderValueMatrix, "SetShaderValueMatrix");
    dukglue_register_function(ctx, &SetShaderValueTexture, "SetShaderValueTexture");
    dukglue_register_function(ctx, &SetMatrixProjection, "SetMatrixProjection");
    dukglue_register_function(ctx, &SetMatrixModelview, "SetMatrixModelview");
    dukglue_register_function(ctx, &GetMatrixModelview, "GetMatrixModelview");
    dukglue_register_function(ctx, &GenTextureCubemap, "GenTextureCubemap");
    dukglue_register_function(ctx, &GenTextureIrradiance, "GenTextureIrradiance");
    dukglue_register_function(ctx, &GenTexturePrefilter, "GenTexturePrefilter");
    dukglue_register_function(ctx, &GenTextureBRDF, "GenTextureBRDF");
    dukglue_register_function(ctx, &BeginShaderMode, "BeginShaderMode");
    dukglue_register_function(ctx, &EndShaderMode, "EndShaderMode");
    dukglue_register_function(ctx, &BeginBlendMode, "BeginBlendMode");
    dukglue_register_function(ctx, &EndBlendMode, "EndBlendMode");
    dukglue_register_function(ctx, &BeginScissorMode, "BeginScissorMode");
    dukglue_register_function(ctx, &EndScissorMode, "EndScissorMode");
    dukglue_register_function(ctx, &InitVrSimulator, "InitVrSimulator");
    dukglue_register_function(ctx, &CloseVrSimulator, "CloseVrSimulator");
    dukglue_register_function(ctx, &UpdateVrTracking, "UpdateVrTracking");
    dukglue_register_function(ctx, &SetVrConfiguration, "SetVrConfiguration");
    dukglue_register_function(ctx, &IsVrSimulatorReady, "IsVrSimulatorReady");
    dukglue_register_function(ctx, &ToggleVrMode, "ToggleVrMode");
    dukglue_register_function(ctx, &BeginVrDrawing, "BeginVrDrawing");
    dukglue_register_function(ctx, &EndVrDrawing, "EndVrDrawing");
    */
    dukglue_register_function(ctx, &InitAudioDevice, "InitAudioDevice");
    dukglue_register_function(ctx, &CloseAudioDevice, "CloseAudioDevice");

    /*
    dukglue_register_function(ctx, &IsAudioDeviceReady, "IsAudioDeviceReady");
    dukglue_register_function(ctx, &SetMasterVolume, "SetMasterVolume");
    dukglue_register_function(ctx, &LoadWave, "LoadWave");
    dukglue_register_function(ctx, &LoadSound, "LoadSound");
    dukglue_register_function(ctx, &LoadSoundFromWave, "LoadSoundFromWave");
    dukglue_register_function(ctx, &UpdateSound, "UpdateSound");
    dukglue_register_function(ctx, &UnloadWave, "UnloadWave");
    dukglue_register_function(ctx, &UnloadSound, "UnloadSound");
    dukglue_register_function(ctx, &ExportWave, "ExportWave");
    dukglue_register_function(ctx, &ExportWaveAsCode, "ExportWaveAsCode");
    dukglue_register_function(ctx, &PlaySound, "PlaySound");
    dukglue_register_function(ctx, &StopSound, "StopSound");
    dukglue_register_function(ctx, &PauseSound, "PauseSound");
    dukglue_register_function(ctx, &ResumeSound, "ResumeSound");
    dukglue_register_function(ctx, &PlaySoundMulti, "PlaySoundMulti");
    dukglue_register_function(ctx, &StopSoundMulti, "StopSoundMulti");
    dukglue_register_function(ctx, &GetSoundsPlaying, "GetSoundsPlaying");
    dukglue_register_function(ctx, &IsSoundPlaying, "IsSoundPlaying");
    dukglue_register_function(ctx, &SetSoundVolume, "SetSoundVolume");
    dukglue_register_function(ctx, &SetSoundPitch, "SetSoundPitch");
    dukglue_register_function(ctx, &WaveFormat, "WaveFormat");
    dukglue_register_function(ctx, &WaveCopy, "WaveCopy");
    dukglue_register_function(ctx, &WaveCrop, "WaveCrop");
    dukglue_register_function(ctx, &GetWaveData, "GetWaveData");
    dukglue_register_function(ctx, &LoadMusicStream, "LoadMusicStream");
    dukglue_register_function(ctx, &UnloadMusicStream, "UnloadMusicStream");
    dukglue_register_function(ctx, &PlayMusicStream, "PlayMusicStream");
    dukglue_register_function(ctx, &UpdateMusicStream, "UpdateMusicStream");
    dukglue_register_function(ctx, &StopMusicStream, "StopMusicStream");
    dukglue_register_function(ctx, &PauseMusicStream, "PauseMusicStream");
    dukglue_register_function(ctx, &ResumeMusicStream, "ResumeMusicStream");
    dukglue_register_function(ctx, &IsMusicPlaying, "IsMusicPlaying");
    dukglue_register_function(ctx, &SetMusicVolume, "SetMusicVolume");
    dukglue_register_function(ctx, &SetMusicPitch, "SetMusicPitch");
    dukglue_register_function(ctx, &SetMusicLoopCount, "SetMusicLoopCount");
    dukglue_register_function(ctx, &GetMusicTimeLength, "GetMusicTimeLength");
    dukglue_register_function(ctx, &GetMusicTimePlayed, "GetMusicTimePlayed");
    dukglue_register_function(ctx, &InitAudioStream, "InitAudioStream");
    dukglue_register_function(ctx, &UpdateAudioStream, "UpdateAudioStream");
    dukglue_register_function(ctx, &CloseAudioStream, "CloseAudioStream");
    dukglue_register_function(ctx, &IsAudioBufferProcessed, "IsAudioBufferProcessed");
    dukglue_register_function(ctx, &PlayAudioStream, "PlayAudioStream");
    dukglue_register_function(ctx, &PauseAudioStream, "PauseAudioStream");
    dukglue_register_function(ctx, &ResumeAudioStream, "ResumeAudioStream");
    dukglue_register_function(ctx, &IsAudioStreamPlaying, "IsAudioStreamPlaying");
    dukglue_register_function(ctx, &StopAudioStream, "StopAudioStream");
    dukglue_register_function(ctx, &SetAudioStreamVolume, "SetAudioStreamVolume");
    dukglue_register_function(ctx, &SetAudioStreamPitch, "SetAudioStreamPitch");
    */

}

namespace dukglue {
namespace types {

template<>
struct DukType<::Vector2> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static ::Vector2 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        ::Vector2 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, ::Vector2 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
    }
};

template<>
struct DukType<::Vector3> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static ::Vector3 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        ::Vector3 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "z");
        out.z = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, ::Vector3 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
        duk_push_number(ctx, value.z);
        duk_put_prop_string(ctx, obj_idx, "z");
    }
};

template<>
struct DukType<Vector4> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Vector4 read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Vector4 out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "z");
        out.z = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "w");
        out.w = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Vector4 value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
        duk_push_number(ctx, value.z);
        duk_put_prop_string(ctx, obj_idx, "z");
        duk_push_number(ctx, value.w);
        duk_put_prop_string(ctx, obj_idx, "w");
    }
};

template<>
struct DukType<Matrix> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Matrix read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Matrix out;
        duk_get_prop_string(ctx, arg_idx, "m0");
        out.m0 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m1");
        out.m1 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m2");
        out.m2 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m3");
        out.m3 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m4");
        out.m4 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m5");
        out.m5 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m6");
        out.m6 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m7");
        out.m7 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m8");
        out.m8 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m9");
        out.m9 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m10");
        out.m10 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m11");
        out.m11 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m12");
        out.m12 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m13");
        out.m13 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m14");
        out.m14 = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "m15");
        out.m15 = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Matrix value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.m0);
        duk_put_prop_string(ctx, obj_idx, "m0");
        duk_push_number(ctx, value.m1);
        duk_put_prop_string(ctx, obj_idx, "m1");
        duk_push_number(ctx, value.m2);
        duk_put_prop_string(ctx, obj_idx, "m2");
        duk_push_number(ctx, value.m3);
        duk_put_prop_string(ctx, obj_idx, "m3");
        duk_push_number(ctx, value.m4);
        duk_put_prop_string(ctx, obj_idx, "m4");
        duk_push_number(ctx, value.m5);
        duk_put_prop_string(ctx, obj_idx, "m5");
        duk_push_number(ctx, value.m6);
        duk_put_prop_string(ctx, obj_idx, "m6");
        duk_push_number(ctx, value.m7);
        duk_put_prop_string(ctx, obj_idx, "m7");
        duk_push_number(ctx, value.m8);
        duk_put_prop_string(ctx, obj_idx, "m8");
        duk_push_number(ctx, value.m9);
        duk_put_prop_string(ctx, obj_idx, "m9");
        duk_push_number(ctx, value.m10);
        duk_put_prop_string(ctx, obj_idx, "m10");
        duk_push_number(ctx, value.m11);
        duk_put_prop_string(ctx, obj_idx, "m11");
        duk_push_number(ctx, value.m12);
        duk_put_prop_string(ctx, obj_idx, "m12");
        duk_push_number(ctx, value.m13);
        duk_put_prop_string(ctx, obj_idx, "m13");
        duk_push_number(ctx, value.m14);
        duk_put_prop_string(ctx, obj_idx, "m14");
        duk_push_number(ctx, value.m15);
        duk_put_prop_string(ctx, obj_idx, "m15");
    }
};

template<>
struct DukType<Color> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Color read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Color out;
        duk_get_prop_string(ctx, arg_idx, "r");
        out.r = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "g");
        out.g = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "b");
        out.b = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "a");
        out.a = duk_get_int(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Color value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_int(ctx, value.r);
        duk_put_prop_string(ctx, obj_idx, "r");
        duk_push_int(ctx, value.g);
        duk_put_prop_string(ctx, obj_idx, "g");
        duk_push_int(ctx, value.b);
        duk_put_prop_string(ctx, obj_idx, "b");
        duk_push_int(ctx, value.a);
        duk_put_prop_string(ctx, obj_idx, "a");
    }
};

template<>
struct DukType<Rectangle> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Rectangle read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Rectangle out;
        duk_get_prop_string(ctx, arg_idx, "x");
        out.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "y");
        out.y = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "width");
        out.width = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "height");
        out.height = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Rectangle value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_number(ctx, value.x);
        duk_put_prop_string(ctx, obj_idx, "x");
        duk_push_number(ctx, value.y);
        duk_put_prop_string(ctx, obj_idx, "y");
        duk_push_number(ctx, value.width);
        duk_put_prop_string(ctx, obj_idx, "width");
        duk_push_number(ctx, value.height);
        duk_put_prop_string(ctx, obj_idx, "height");
    }
};


template<>
struct DukType<Image> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Image read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Image out;
        duk_get_prop_string(ctx, arg_idx, "data");
        out.data = duk_get_pointer(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "width");
        out.width = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "height");
        out.height = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "mipmaps");
        out.mipmaps = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "format");
        out.format = duk_get_int(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Image value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_pointer(ctx, value.data);
        duk_put_prop_string(ctx, obj_idx, "data");
        duk_push_int(ctx, value.width);
        duk_put_prop_string(ctx, obj_idx, "width");
        duk_push_int(ctx, value.height);
        duk_put_prop_string(ctx, obj_idx, "height");
        duk_push_int(ctx, value.mipmaps);
        duk_put_prop_string(ctx, obj_idx, "mipmaps");
        duk_push_int(ctx, value.format);
        duk_put_prop_string(ctx, obj_idx, "format");
    }
};


template<>
struct DukType<Texture2D> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Texture2D read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }
        Texture2D out;
        duk_get_prop_string(ctx, arg_idx, "id");
        out.id = duk_get_uint(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "width");
        out.width = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "height");
        out.height = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "mipmaps");
        out.mipmaps = duk_get_int(ctx, -1);
        duk_get_prop_string(ctx, arg_idx, "format");
        out.format = duk_get_int(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Texture2D value) {
        duk_idx_t obj_idx = duk_push_object(ctx);
        duk_push_uint(ctx, value.id);
        duk_put_prop_string(ctx, obj_idx, "id");
        duk_push_uint(ctx, value.width);
        duk_put_prop_string(ctx, obj_idx, "width");
        duk_push_int(ctx, value.height);
        duk_put_prop_string(ctx, obj_idx, "height");
        duk_push_int(ctx, value.mipmaps);
        duk_put_prop_string(ctx, obj_idx, "mipmaps");
        duk_push_int(ctx, value.format);
        duk_put_prop_string(ctx, obj_idx, "format");
    }
};

template<>
struct DukType<Camera2D> {
    typedef std::true_type IsValueType;
    template<typename FullT>
    static Camera2D read(duk_context* ctx, duk_idx_t arg_idx) {
        if (!duk_is_object(ctx, arg_idx)) {
            duk_int_t type_idx = duk_get_type(ctx, arg_idx);
            duk_error(ctx, DUK_ERR_TYPE_ERROR, "Argument %d: expected object, got %s", arg_idx, detail::get_type_name(type_idx));
        }

        Camera2D out;

        // Offset
        duk_get_prop_string(ctx, arg_idx, "offset");
        duk_get_prop_string(ctx, -1, "x");
        out.offset.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, -2, "y");
        out.offset.y = duk_get_number(ctx, -1);
        duk_pop(ctx);

        // Target
        duk_get_prop_string(ctx, arg_idx, "target");
        duk_get_prop_string(ctx, -1, "x");
        out.target.x = duk_get_number(ctx, -1);
        duk_get_prop_string(ctx, -2, "y");
        out.target.y = duk_get_number(ctx, -1);
        duk_pop(ctx);

        // Rotation
        duk_get_prop_string(ctx, arg_idx, "rotation");
        out.rotation = duk_get_number(ctx, -1);

        // Zoom
        duk_get_prop_string(ctx, arg_idx, "zoom");
        out.zoom = duk_get_number(ctx, -1);
        return out;
    }
    template<typename FullT>
    static void push(duk_context* ctx, Camera2D value) {
        duk_idx_t obj_idx = duk_push_object(ctx);

        // TODO: Fix push Camera.
        DukType<Vector2>::push<Vector2>(ctx, value.offset);
        duk_put_prop_string(ctx, obj_idx, "offset");
        duk_pop(ctx);

        DukType<Vector2>::push<Vector2>(ctx, value.target);
        duk_put_prop_string(ctx, obj_idx, "target");
        duk_pop(ctx);

        duk_push_number(ctx, value.rotation);
        duk_put_prop_string(ctx, obj_idx, "rotation");
        duk_push_number(ctx, value.zoom);
        duk_put_prop_string(ctx, obj_idx, "zoom");
    }
};

// TODO: Add Font
// TODO: Add RenderTexture2D
// TODO: Add NPatchInfo
// TODO: Add CharInfo
// TODO: Add Camera3D
// TODO: Add Mesh
// TODO: Add Shader
// TODO: Add MaterialMap
// TODO: Add Material
// TODO: Add Transform
// TODO: Add BoneInfo
// TODO: Add Model
// TODO: Add ModelAnimation
// TODO: Add Ray
// TODO: Add RayHitInfo
// TODO: Add BoundingBox
// TODO: Add Wave
// TODO: Add rAudioBuffer
// TODO: Add AudioStream
// TODO: Add Sound
// TODO: Add Music
// TODO: Add VrDeviceInfo

}
}

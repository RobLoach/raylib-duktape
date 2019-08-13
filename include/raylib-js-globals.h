#ifndef RAYLIB_JS_GLOBALS_H__
#define RAYLIB_JS_GLOBALS_H__

#include <raylib.h>
#include <dukglue/dukglue.h>

void raylib_js_globals(duktape::engine& js) {
    js.define("LIGHTGRAY", LIGHTGRAY);
    js.define("GRAY", GRAY);
    js.define("DARKGRAY", DARKGRAY);
    js.define("YELLOW", YELLOW);
    js.define("GOLD", GOLD);
    js.define("ORANGE", ORANGE);
    js.define("PINK", PINK);
    js.define("RED", RED);
    js.define("MAROON", MAROON);
    js.define("GREEN", GREEN);
    js.define("LIME", LIME);
    js.define("DARKGREEN", DARKGREEN);
    js.define("SKYBLUE", SKYBLUE);
    js.define("BLUE", BLUE);
    js.define("DARKBLUE", DARKBLUE);
    js.define("PURPLE", PURPLE);
    js.define("VIOLET", VIOLET);
    js.define("DARKPURPLE", DARKPURPLE);
    js.define("BEIGE", BEIGE);
    js.define("BROWN", BROWN);
    js.define("DARKBROWN", DARKBROWN);
    js.define("WHITE", WHITE);
    js.define("BLACK", BLACK);
    js.define("BLANK", BLANK);
    js.define("MAGENTA", MAGENTA);
    js.define("RAYWHITE", RAYWHITE);
    js.define("PI", (float)PI);
    js.define("MAX_TOUCH_POINTS", (int)MAX_TOUCH_POINTS);
    js.define("FLAG_SHOW_LOGO", (int)FLAG_SHOW_LOGO);
    js.define("FLAG_FULLSCREEN_MODE", (int)FLAG_FULLSCREEN_MODE);
    js.define("FLAG_WINDOW_RESIZABLE", (int)FLAG_WINDOW_RESIZABLE);
    js.define("FLAG_WINDOW_UNDECORATED", (int)FLAG_WINDOW_UNDECORATED);
    js.define("FLAG_WINDOW_TRANSPARENT", (int)FLAG_WINDOW_TRANSPARENT);
    js.define("FLAG_MSAA_4X_HINT", (int)FLAG_MSAA_4X_HINT);
    js.define("FLAG_VSYNC_HINT", (int)FLAG_VSYNC_HINT);
    js.define("LOG_ALL", (int)LOG_ALL);
    js.define("LOG_TRACE", (int)LOG_TRACE);
    js.define("LOG_DEBUG", (int)LOG_DEBUG);
    js.define("LOG_INFO", (int)LOG_INFO);
    js.define("LOG_WARNING", (int)LOG_WARNING);
    js.define("LOG_ERROR", (int)LOG_ERROR);
    js.define("LOG_FATAL", (int)LOG_FATAL);
    js.define("LOG_NONE", (int)LOG_NONE);
    js.define("KEY_APOSTROPHE", (int)KEY_APOSTROPHE);
    js.define("KEY_COMMA", (int)KEY_COMMA);
    js.define("KEY_MINUS", (int)KEY_MINUS);
    js.define("KEY_PERIOD", (int)KEY_PERIOD);
    js.define("KEY_SLASH", (int)KEY_SLASH);
    js.define("KEY_ZERO", (int)KEY_ZERO);
    js.define("KEY_ONE", (int)KEY_ONE);
    js.define("KEY_TWO", (int)KEY_TWO);
    js.define("KEY_THREE", (int)KEY_THREE);
    js.define("KEY_FOUR", (int)KEY_FOUR);
    js.define("KEY_FIVE", (int)KEY_FIVE);
    js.define("KEY_SIX", (int)KEY_SIX);
    js.define("KEY_SEVEN", (int)KEY_SEVEN);
    js.define("KEY_EIGHT", (int)KEY_EIGHT);
    js.define("KEY_NINE", (int)KEY_NINE);
    js.define("KEY_SEMICOLON", (int)KEY_SEMICOLON);
    js.define("KEY_EQUAL", (int)KEY_EQUAL);
    js.define("KEY_A", (int)KEY_A);
    js.define("KEY_B", (int)KEY_B);
    js.define("KEY_C", (int)KEY_C);
    js.define("KEY_D", (int)KEY_D);
    js.define("KEY_E", (int)KEY_E);
    js.define("KEY_F", (int)KEY_F);
    js.define("KEY_G", (int)KEY_G);
    js.define("KEY_H", (int)KEY_H);
    js.define("KEY_I", (int)KEY_I);
    js.define("KEY_J", (int)KEY_J);
    js.define("KEY_K", (int)KEY_K);
    js.define("KEY_L", (int)KEY_L);
    js.define("KEY_M", (int)KEY_M);
    js.define("KEY_N", (int)KEY_N);
    js.define("KEY_O", (int)KEY_O);
    js.define("KEY_P", (int)KEY_P);
    js.define("KEY_Q", (int)KEY_Q);
    js.define("KEY_R", (int)KEY_R);
    js.define("KEY_S", (int)KEY_S);
    js.define("KEY_T", (int)KEY_T);
    js.define("KEY_U", (int)KEY_U);
    js.define("KEY_V", (int)KEY_V);
    js.define("KEY_W", (int)KEY_W);
    js.define("KEY_X", (int)KEY_X);
    js.define("KEY_Y", (int)KEY_Y);
    js.define("KEY_Z", (int)KEY_Z);
    js.define("KEY_SPACE", (int)KEY_SPACE);
    js.define("KEY_ESCAPE", (int)KEY_ESCAPE);
    js.define("KEY_ENTER", (int)KEY_ENTER);
    js.define("KEY_TAB", (int)KEY_TAB);
    js.define("KEY_BACKSPACE", (int)KEY_BACKSPACE);
    js.define("KEY_INSERT", (int)KEY_INSERT);
    js.define("KEY_DELETE", (int)KEY_DELETE);
    js.define("KEY_RIGHT", (int)KEY_RIGHT);
    js.define("KEY_LEFT", (int)KEY_LEFT);
    js.define("KEY_DOWN", (int)KEY_DOWN);
    js.define("KEY_UP", (int)KEY_UP);
    js.define("KEY_PAGE_UP", (int)KEY_PAGE_UP);
    js.define("KEY_PAGE_DOWN", (int)KEY_PAGE_DOWN);
    js.define("KEY_HOME", (int)KEY_HOME);
    js.define("KEY_END", (int)KEY_END);
    js.define("KEY_CAPS_LOCK", (int)KEY_CAPS_LOCK);
    js.define("KEY_SCROLL_LOCK", (int)KEY_SCROLL_LOCK);
    js.define("KEY_NUM_LOCK", (int)KEY_NUM_LOCK);
    js.define("KEY_PRINT_SCREEN", (int)KEY_PRINT_SCREEN);
    js.define("KEY_PAUSE", (int)KEY_PAUSE);
    js.define("KEY_F1", (int)KEY_F1);
    js.define("KEY_F2", (int)KEY_F2);
    js.define("KEY_F3", (int)KEY_F3);
    js.define("KEY_F4", (int)KEY_F4);
    js.define("KEY_F5", (int)KEY_F5);
    js.define("KEY_F6", (int)KEY_F6);
    js.define("KEY_F7", (int)KEY_F7);
    js.define("KEY_F8", (int)KEY_F8);
    js.define("KEY_F9", (int)KEY_F9);
    js.define("KEY_F10", (int)KEY_F10);
    js.define("KEY_F11", (int)KEY_F11);
    js.define("KEY_F12", (int)KEY_F12);
    js.define("KEY_LEFT_SHIFT", (int)KEY_LEFT_SHIFT);
    js.define("KEY_LEFT_CONTROL", (int)KEY_LEFT_CONTROL);
    js.define("KEY_LEFT_ALT", (int)KEY_LEFT_ALT);
    js.define("KEY_LEFT_SUPER", (int)KEY_LEFT_SUPER);
    js.define("KEY_RIGHT_SHIFT", (int)KEY_RIGHT_SHIFT);
    js.define("KEY_RIGHT_CONTROL", (int)KEY_RIGHT_CONTROL);
    js.define("KEY_RIGHT_ALT", (int)KEY_RIGHT_ALT);
    js.define("KEY_RIGHT_SUPER", (int)KEY_RIGHT_SUPER);
    js.define("KEY_KB_MENU", (int)KEY_KB_MENU);
    js.define("KEY_LEFT_BRACKET", (int)KEY_LEFT_BRACKET);
    js.define("KEY_BACKSLASH", (int)KEY_BACKSLASH);
    js.define("KEY_RIGHT_BRACKET", (int)KEY_RIGHT_BRACKET);
    js.define("KEY_GRAVE", (int)KEY_GRAVE);
    js.define("KEY_KP_0", (int)KEY_KP_0);
    js.define("KEY_KP_1", (int)KEY_KP_1);
    js.define("KEY_KP_2", (int)KEY_KP_2);
    js.define("KEY_KP_3", (int)KEY_KP_3);
    js.define("KEY_KP_4", (int)KEY_KP_4);
    js.define("KEY_KP_5", (int)KEY_KP_5);
    js.define("KEY_KP_6", (int)KEY_KP_6);
    js.define("KEY_KP_7", (int)KEY_KP_7);
    js.define("KEY_KP_8", (int)KEY_KP_8);
    js.define("KEY_KP_9", (int)KEY_KP_9);
    js.define("KEY_KP_DECIMAL", (int)KEY_KP_DECIMAL);
    js.define("KEY_KP_DIVIDE", (int)KEY_KP_DIVIDE);
    js.define("KEY_KP_MULTIPLY", (int)KEY_KP_MULTIPLY);
    js.define("KEY_KP_SUBTRACT", (int)KEY_KP_SUBTRACT);
    js.define("KEY_KP_ADD", (int)KEY_KP_ADD);
    js.define("KEY_KP_ENTER", (int)KEY_KP_ENTER);
    js.define("KEY_KP_EQUAL", (int)KEY_KP_EQUAL);
    js.define("KEY_BACK", (int)KEY_BACK);
    js.define("KEY_MENU", (int)KEY_MENU);
    js.define("KEY_VOLUME_UP", (int)KEY_VOLUME_UP);
    js.define("KEY_VOLUME_DOWN", (int)KEY_VOLUME_DOWN);
    js.define("MOUSE_LEFT_BUTTON", (int)MOUSE_LEFT_BUTTON);
    js.define("MOUSE_RIGHT_BUTTON", (int)MOUSE_RIGHT_BUTTON);
    js.define("MOUSE_MIDDLE_BUTTON", (int)MOUSE_MIDDLE_BUTTON);
    js.define("GAMEPAD_PLAYER1", (int)GAMEPAD_PLAYER1);
    js.define("GAMEPAD_PLAYER2", (int)GAMEPAD_PLAYER2);
    js.define("GAMEPAD_PLAYER3", (int)GAMEPAD_PLAYER3);
    js.define("GAMEPAD_PLAYER4", (int)GAMEPAD_PLAYER4);
    js.define("GAMEPAD_BUTTON_UNKNOWN", (int)GAMEPAD_BUTTON_UNKNOWN);
    js.define("GAMEPAD_BUTTON_LEFT_FACE_UP", (int)GAMEPAD_BUTTON_LEFT_FACE_UP);
    js.define("GAMEPAD_BUTTON_LEFT_FACE_RIGHT", (int)GAMEPAD_BUTTON_LEFT_FACE_RIGHT);
    js.define("GAMEPAD_BUTTON_LEFT_FACE_DOWN", (int)GAMEPAD_BUTTON_LEFT_FACE_DOWN);
    js.define("GAMEPAD_BUTTON_LEFT_FACE_LEFT", (int)GAMEPAD_BUTTON_LEFT_FACE_LEFT);
    js.define("GAMEPAD_BUTTON_RIGHT_FACE_UP", (int)GAMEPAD_BUTTON_RIGHT_FACE_UP);
    js.define("GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", (int)GAMEPAD_BUTTON_RIGHT_FACE_RIGHT);
    js.define("GAMEPAD_BUTTON_RIGHT_FACE_DOWN", (int)GAMEPAD_BUTTON_RIGHT_FACE_DOWN);
    js.define("GAMEPAD_BUTTON_RIGHT_FACE_LEFT", (int)GAMEPAD_BUTTON_RIGHT_FACE_LEFT);
    js.define("GAMEPAD_BUTTON_LEFT_TRIGGER_1", (int)GAMEPAD_BUTTON_LEFT_TRIGGER_1);
    js.define("GAMEPAD_BUTTON_LEFT_TRIGGER_2", (int)GAMEPAD_BUTTON_LEFT_TRIGGER_2);
    js.define("GAMEPAD_BUTTON_RIGHT_TRIGGER_1", (int)GAMEPAD_BUTTON_RIGHT_TRIGGER_1);
    js.define("GAMEPAD_BUTTON_RIGHT_TRIGGER_2", (int)GAMEPAD_BUTTON_RIGHT_TRIGGER_2);
    js.define("GAMEPAD_BUTTON_MIDDLE_LEFT", (int)GAMEPAD_BUTTON_MIDDLE_LEFT);
    js.define("GAMEPAD_BUTTON_MIDDLE", (int)GAMEPAD_BUTTON_MIDDLE);
    js.define("GAMEPAD_BUTTON_MIDDLE_RIGHT", (int)GAMEPAD_BUTTON_MIDDLE_RIGHT);
    js.define("GAMEPAD_BUTTON_LEFT_THUMB", (int)GAMEPAD_BUTTON_LEFT_THUMB);
    js.define("GAMEPAD_BUTTON_RIGHT_THUMB", (int)GAMEPAD_BUTTON_RIGHT_THUMB);
    js.define("GAMEPAD_AXIS_UNKNOWN", (int)GAMEPAD_AXIS_UNKNOWN);
    js.define("GAMEPAD_AXIS_LEFT_X", (int)GAMEPAD_AXIS_LEFT_X);
    js.define("GAMEPAD_AXIS_LEFT_Y", (int)GAMEPAD_AXIS_LEFT_Y);
    js.define("GAMEPAD_AXIS_RIGHT_X", (int)GAMEPAD_AXIS_RIGHT_X);
    js.define("GAMEPAD_AXIS_RIGHT_Y", (int)GAMEPAD_AXIS_RIGHT_Y);
    js.define("GAMEPAD_AXIS_LEFT_TRIGGER", (int)GAMEPAD_AXIS_LEFT_TRIGGER);
    js.define("GAMEPAD_AXIS_RIGHT_TRIGGER", (int)GAMEPAD_AXIS_RIGHT_TRIGGER);
    js.define("LOC_VERTEX_POSITION", (int)LOC_VERTEX_POSITION);
    js.define("LOC_VERTEX_TEXCOORD01", (int)LOC_VERTEX_TEXCOORD01);
    js.define("LOC_VERTEX_TEXCOORD02", (int)LOC_VERTEX_TEXCOORD02);
    js.define("LOC_VERTEX_NORMAL", (int)LOC_VERTEX_NORMAL);
    js.define("LOC_VERTEX_TANGENT", (int)LOC_VERTEX_TANGENT);
    js.define("LOC_VERTEX_COLOR", (int)LOC_VERTEX_COLOR);
    js.define("LOC_MATRIX_MVP", (int)LOC_MATRIX_MVP);
    js.define("LOC_MATRIX_MODEL", (int)LOC_MATRIX_MODEL);
    js.define("LOC_MATRIX_VIEW", (int)LOC_MATRIX_VIEW);
    js.define("LOC_MATRIX_PROJECTION", (int)LOC_MATRIX_PROJECTION);
    js.define("LOC_VECTOR_VIEW", (int)LOC_VECTOR_VIEW);
    js.define("LOC_COLOR_DIFFUSE", (int)LOC_COLOR_DIFFUSE);
    js.define("LOC_COLOR_SPECULAR", (int)LOC_COLOR_SPECULAR);
    js.define("LOC_COLOR_AMBIENT", (int)LOC_COLOR_AMBIENT);
    js.define("LOC_MAP_ALBEDO", (int)LOC_MAP_ALBEDO);
    js.define("LOC_MAP_METALNESS", (int)LOC_MAP_METALNESS);
    js.define("LOC_MAP_NORMAL", (int)LOC_MAP_NORMAL);
    js.define("LOC_MAP_ROUGHNESS", (int)LOC_MAP_ROUGHNESS);
    js.define("LOC_MAP_OCCLUSION", (int)LOC_MAP_OCCLUSION);
    js.define("LOC_MAP_EMISSION", (int)LOC_MAP_EMISSION);
    js.define("LOC_MAP_HEIGHT", (int)LOC_MAP_HEIGHT);
    js.define("LOC_MAP_CUBEMAP", (int)LOC_MAP_CUBEMAP);
    js.define("LOC_MAP_IRRADIANCE", (int)LOC_MAP_IRRADIANCE);
    js.define("LOC_MAP_PREFILTER", (int)LOC_MAP_PREFILTER);
    js.define("LOC_MAP_BRDF", (int)LOC_MAP_BRDF);
    js.define("LOC_MAP_DIFFUSE", (int)LOC_MAP_DIFFUSE);
    js.define("LOC_MAP_SPECULAR", (int)LOC_MAP_SPECULAR);
    js.define("WRAP_REPEAT", (int)WRAP_REPEAT);
    js.define("WRAP_CLAMP", (int)WRAP_CLAMP);
    js.define("WRAP_MIRROR_REPEAT", (int)WRAP_MIRROR_REPEAT);
    js.define("WRAP_MIRROR_CLAMP", (int)WRAP_MIRROR_CLAMP);
    js.define("FONT_DEFAULT", (int)FONT_DEFAULT);
    js.define("FONT_BITMAP", (int)FONT_BITMAP);
    js.define("FONT_SDF", (int)FONT_SDF);
    js.define("BLEND_ALPHA", (int)BLEND_ALPHA);
    js.define("BLEND_ADDITIVE", (int)BLEND_ADDITIVE);
    js.define("BLEND_MULTIPLIED", (int)BLEND_MULTIPLIED);
    js.define("GESTURE_NONE", (int)GESTURE_NONE);
    js.define("GESTURE_TAP", (int)GESTURE_TAP);
    js.define("GESTURE_DOUBLETAP", (int)GESTURE_DOUBLETAP);
    js.define("GESTURE_HOLD", (int)GESTURE_HOLD);
    js.define("GESTURE_DRAG", (int)GESTURE_DRAG);
    js.define("GESTURE_SWIPE_RIGHT", (int)GESTURE_SWIPE_RIGHT);
    js.define("GESTURE_SWIPE_LEFT", (int)GESTURE_SWIPE_LEFT);
    js.define("GESTURE_SWIPE_UP", (int)GESTURE_SWIPE_UP);
    js.define("GESTURE_SWIPE_DOWN", (int)GESTURE_SWIPE_DOWN);
    js.define("GESTURE_PINCH_IN", (int)GESTURE_PINCH_IN);
    js.define("GESTURE_PINCH_OUT", (int)GESTURE_PINCH_OUT);
    js.define("CAMERA_CUSTOM", (int)CAMERA_CUSTOM);
    js.define("CAMERA_FREE", (int)CAMERA_FREE);
    js.define("CAMERA_ORBITAL", (int)CAMERA_ORBITAL);
    js.define("CAMERA_FIRST_PERSON", (int)CAMERA_FIRST_PERSON);
    js.define("CAMERA_THIRD_PERSON", (int)CAMERA_THIRD_PERSON);
    js.define("CAMERA_PERSPECTIVE", (int)CAMERA_PERSPECTIVE);
    js.define("CAMERA_ORTHOGRAPHIC", (int)CAMERA_ORTHOGRAPHIC);
    js.define("NPT_9PATCH", (int)NPT_9PATCH);
    js.define("NPT_3PATCH_VERTICAL", (int)NPT_3PATCH_VERTICAL);
    js.define("NPT_3PATCH_HORIZONTAL", (int)NPT_3PATCH_HORIZONTAL);

}

#endif

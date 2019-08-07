#ifndef RAYLIB_JS_H__
#define RAYLIB_JS_H__

#include <duktape.h>
#include <dukglue/dukglue.h>

void raylib_js_context(duk_context* ctx) {
	dukglue_register_method(ctx, IsWindowReady, "IsWindowReady");
	dukglue_register_method(ctx, InitWindow, "InitWindow");
}

#endif
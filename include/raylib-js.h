#ifndef RAYLIB_JS_H__
#define RAYLIB_JS_H__

#include <iostream>

#include <duktape.h>
#include <dukglue/dukglue.h>
#include <dukglue/detail_primitive_types.h>

#include "raylib-js-structs.h"
#include "raylib-js-globals.h"
#include "raylib-js-functions.h"

void raylib_js_print(std::string out) {
    std::cout << out << std::endl;
}

void raylib_js_context(duk_context* ctx) {
    raylib_js_globals(ctx);

    dukglue_register_function(ctx, &raylib_js_print, "print");

    raylib_js_register_functions(ctx);
}

#endif

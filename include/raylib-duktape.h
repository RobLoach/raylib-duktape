#ifndef RAYLIB_DUKTAPE_H__
#define RAYLIB_DUKTAPE_H__

#include <iostream>

#include <duktape.h>
#include <dukglue/dukglue.h>
#include <dukglue/detail_primitive_types.h>

#include "raylib-duktape-structs.h"
#include "raylib-duktape-globals.h"
#include "raylib-duktape-functions.h"

void duk_module_raylib_init(duk_context* ctx) {
    raylib_duktape_globals(ctx);
    raylib_duktape_register_functions(ctx);
}

#endif

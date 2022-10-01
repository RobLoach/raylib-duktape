#ifndef RAYLIB_DUKTAPE_H__
#define RAYLIB_DUKTAPE_H__

#include <duktape.h>

void raylib_duktape_register_functions(duk_context* ctx);
void raylib_duktape_globals(duk_context* ctx);
void duk_raylib_init(duk_context* ctx, duk_uint_t flags);

#endif

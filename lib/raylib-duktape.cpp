#include <duktape.h>
#include <dukglue/dukglue.h>
#include <dukglue/detail_primitive_types.h>
#include <raylib.h>
#include "raylib-duktape.h"

template<typename T>
T raylib_duktape_get(duk_context* ctx, duk_idx_t idx) {
    T* out;
    dukglue_read(ctx, idx, out);
    return *out;
}

template<typename T>
void raylib_duktape_push(duk_context* ctx, T input) {
    dukglue_push(ctx, input);
}

#include "raylib-duktape-gen.h"
void duk_raylib_init(duk_context* ctx, duk_uint_t flags) {
    raylib_duktape_gen(ctx);
}

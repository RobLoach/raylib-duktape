#include "raylib.h"
#include "raylib-assert.h"
#include <duktape.h>
#include <dukglue/dukglue.h>
#include "raylib-duktape.h"

int main() {
    // Create the Duktape environment.
    duk_context* ctx = duk_create_heap_default();

    // Register the raylib.js context.
    duk_raylib_init(ctx, 0);

    {
        bool output = dukglue_peval<bool>(ctx, "IsWindowReady()");
        AssertNot(output, "IsWindowReady()");
    }

    {
        int output = dukglue_peval<int>(ctx, "GetRandomValue(10,20)");
        Assert(output >= 10, "GetRandomValue(10,20)");
        Assert(output <= 20, "GetRandomValue(10,20)");
    }

    {
        int r = dukglue_peval<int>(ctx, "RAYWHITE.r");
        int expected = RAYWHITE.r;
        AssertEqual(r, expected);
    }

    duk_destroy_heap(ctx);

    TraceLog(LOG_INFO, "Tests completed successfully");

    return 0;
}

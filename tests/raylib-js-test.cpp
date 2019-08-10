#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "raylib.h"
#include <duktape.h>
#include <dukglue/dukglue.h>
#include "raylib-js.h"

TEST_CASE("raylib-js", "[raylib-js]") {
    // Create the Duktape environment.
    duk_context* ctx = duk_create_heap_default();

    // Register the raylib.js context.
    raylib_js_context(ctx);

    SECTION("IsWindowReady()") {
        bool output = dukglue_peval<bool>(ctx, "IsWindowReady()");
        REQUIRE(output == false);
    }

    SECTION("GetRandomValue(10,20)") {
        int output = dukglue_peval<int>(ctx, "GetRandomValue(10,20)");
        REQUIRE(output >= 10);
        REQUIRE(output <= 20);
    }

    duk_destroy_heap(ctx);
}

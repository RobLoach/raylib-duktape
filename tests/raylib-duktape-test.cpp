#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "raylib.h"
#include <duktape.h>
#include <dukglue/dukglue.h>
#include "raylib-duktape.h"

TEST_CASE("raylib-duktape", "[raylib-duktape]") {
    // Create the Duktape environment.
    duk_context* ctx = duk_create_heap_default();

    // Register the raylib.js context.
    duk_module_raylib_init(ctx);

    SECTION("IsWindowReady()") {
        bool output = dukglue_peval<bool>(ctx, "IsWindowReady()");
        REQUIRE(output == false);
    }

    SECTION("GetRandomValue(10,20)") {
        int output = dukglue_peval<int>(ctx, "GetRandomValue(10,20)");
        REQUIRE(output >= 10);
        REQUIRE(output <= 20);
    }

    SECTION("Color") {
        int r = dukglue_peval<int>(ctx, "RAYWHITE.r");
        REQUIRE(r == RAYWHITE.r);
    }

    duk_destroy_heap(ctx);
}

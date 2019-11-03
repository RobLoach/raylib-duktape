#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "raylib.h"
#include <duktape/duktape.hh>
#include "raylib-js.h"

TEST_CASE("raylib-js", "[raylib-js]") {
    // Create the Duktape environment.
    duktape::engine js;

    // Register the raylib.js context.
    raylibjs::define_in(js);

    SECTION("Vector2") {
        float x = js.eval<float>("var v = Vector2(200, 100); return v.x;")
        REQUIRE(x == 200);
    }

    SECTION("Color") {
        int r = js.eval<int>("RAYWHITE.r");
        REQUIRE(r == RAYWHITE.r);
    }

    SECTION("IsWindowReady()") {
        bool output = js.eval<bool>("IsWindowReady()");
        REQUIRE(output == false);
    }

    SECTION("GetRandomValue(10,20)") {
        int output = js.eval<int>("GetRandomValue(10,20)");
        REQUIRE(output >= 10);
        REQUIRE(output <= 20);
    }

    duk_destroy_heap(ctx);
}

add_executable(raylib-duktape-bin
    raylib-duktape.cpp
    #${duktape_SOURCE_DIR}/extras/console/duk_console.c
)
set_target_properties(raylib-duktape-bin PROPERTIES OUTPUT_NAME "raylib-duktape")
target_link_libraries(raylib-duktape-bin raylib-duktape)

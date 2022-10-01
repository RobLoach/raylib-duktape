add_executable(raylib-duktape-test
    raylib-duktape-test.cpp
    #${duktape_SOURCE_DIR}/extras/console/duk_console.c
)

target_link_libraries(raylib-duktape-test raylib-duktape)

add_test(NAME raylib-duktape-test COMMAND raylib-duktape-test)

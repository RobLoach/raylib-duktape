find_package(Duktape)
find_package(Dukglue)
find_package(Raylib)

list(APPEND LIBS raylib duktape dukglue raylib-js-h)
list(APPEND SOURCES raylib-js.cpp)
add_executable(raylib-js ${SOURCES})

target_link_libraries(raylib-js ${LIBS})

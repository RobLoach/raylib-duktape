find_package(Duktape)
find_package(Dukglue)
find_package(Raylib)

list(APPEND LIBS raylib duktape dukglue raylib-js-h)
list(APPEND SOURCES raylib-js.cpp)
add_executable(raylib-js ${SOURCES})
#target_include_directories(raylib-js PUBLIC
#    ${raylib_SOURCE_DIR}/src
#    ${duktape_SOURCE_DIR}/src
#    ${dukglue_SOURCE_DIR}/include
#)
target_link_libraries(raylib-js ${LIBS})

add_library(raylib-duktape-h INTERFACE)

set(RAYLIB_DUKTAPE_HEADERS
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-duktape.h
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-duktape-functions.h
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-duktape-globals.h
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-duktape-structs.h
)

install(FILES
  ${RAYLIB_DUKTAPE_HEADERS} DESTINATION include/raylib-duktape
)

target_include_directories(raylib-duktape-h INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_library(raylib-js-h INTERFACE)

set(RAYLIBJS_HEADERS
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-js.h
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-js-functions.h
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-js-globals.h
  ${CMAKE_CURRENT_SOURCE_DIR}/raylib-js-structs.h
)

install(FILES
  ${RAYLIBJS_HEADERS} DESTINATION include/raylib-js
)

target_include_directories(raylib-js-h INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_dependencies(raylib-js-h duktapecc)

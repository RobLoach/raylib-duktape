# Dependencies
find_package(duktape QUIET)
if (NOT duktape_FOUND)
    set(duktape_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/duktape-releases)
    add_library(duktape STATIC ${duktape_SOURCE_DIR}/src/duktape.c)
    target_link_libraries(duktape
        m dl rt
    )
    target_include_directories(duktape PUBLIC ${duktape_SOURCE_DIR}/src ${duktape_SOURCE_DIR}/extras)
endif()

find_package(dukglue QUIET)
if (NOT dukglue_FOUND)
    set(dukglue_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/dukglue)
    set(dukglue_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/dukglue)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games
    add_subdirectory(${dukglue_SOURCE_DIR} ${dukglue_BINARY_DIR})
endif()

find_package(raylib 2.5 QUIET)
if (NOT raylib_FOUND)
    set(raylib_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/raylib)
    set(raylib_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/raylib)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games
    add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
endif()

list(APPEND LIBS raylib duktape dukglue raylib-duktape-h)
list(APPEND SOURCES raylib-duktape.cpp ${duktape_SOURCE_DIR}/extras/console/duk_console.c)
add_executable(raylib-duktape ${SOURCES})

target_link_libraries(raylib-duktape ${LIBS})

add_library(raylib-duktape STATIC raylib-duktape.cpp)
install(FILES
    raylib-duktape.h DESTINATION include
)
target_include_directories(raylib-duktape INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# dukglue
find_package(dukglue 2.5 QUIET)
if (NOT dukglue_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    dukglue
    GIT_REPOSITORY https://github.com/Aloshi/dukglue.git
    GIT_TAG c2dc87602c824378cd255cb8fd7dd6b33a301bba
  )
  FetchContent_GetProperties(dukglue)
  if (NOT dukglue_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(dukglue)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games
    add_subdirectory(${dukglue_SOURCE_DIR} ${dukglue_BINARY_DIR})
  endif()
endif()

# Duktape
include(FetchContent)
FetchContent_Declare(
    duktapecmake
    GIT_REPOSITORY https://github.com/robloach/duktape-cmake.git
    GIT_TAG v2.7.0
)
FetchContent_GetProperties(duktapecmake)
if (NOT duktapecmake_POPULATED)
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(duktapecmake)
    add_subdirectory(${duktapecmake_SOURCE_DIR} ${duktapecmake_BINARY_DIR})
endif()

# raylib
set(RAYLIB_VERSION 4.2.0)
find_package(raylib ${RAYLIB_VERSION} QUIET)
if (NOT raylib_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG ${RAYLIB_VERSION}
  )
  FetchContent_GetProperties(raylib)
  if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(raylib)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games
    add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
  endif()
endif()

target_link_libraries(raylib-duktape raylib duktape dukglue)

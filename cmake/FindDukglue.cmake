find_package(dukglue 2.5 QUIET)
if (NOT dukglue_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    dukglue
    GIT_REPOSITORY https://github.com/Aloshi/dukglue.git
    GIT_TAG 7b3a4f5edc0df5df5c206d101c40c5656bc90aef
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
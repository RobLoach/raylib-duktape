find_package(duktapecc 2.5 QUIET)
if (NOT duktapecc_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    duktapecc
    GIT_REPOSITORY https://github.com/stfwi/duktape-cc.git
    GIT_TAG 31578162ae694f026b8f6f733cf7a4da6d3995d7
  )
  FetchContent_GetProperties(duktapecc)
  if (NOT dukglue_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(duktapecc)
    add_library(duktapecc ${duktapecc_SOURCE_DIR}/duktape/duktape.c)
    target_include_directories(duktapecc PUBLIC ${duktapecc_SOURCE_DIR})
  endif()
endif()

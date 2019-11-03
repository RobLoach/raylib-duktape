find_package(duktapecc 2.5 QUIET)
if (NOT duktapecc_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    duktapecc
    GIT_REPOSITORY https://github.com/stfwi/duktape-cc.git
    GIT_TAG 4b8d73dc8501779ed85a38c5586bc34ba14eca61
  )
  FetchContent_GetProperties(duktapecc)
  if (NOT duktapecc_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(duktapecc)
    add_library(duktapecc ${duktapecc_SOURCE_DIR}/duktape/duktape.c)
    target_include_directories(duktapecc PUBLIC ${duktapecc_SOURCE_DIR})
  endif()
endif()

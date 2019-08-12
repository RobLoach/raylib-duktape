find_package(duktape 2.4 QUIET)
if (NOT duktape_FOUND)
  include(FetchContent)
  FetchContent_Declare(
    duktape
    GIT_REPOSITORY https://github.com/svaarala/duktape-releases.git
    GIT_TAG a4b0358f26bfb02a314db048e036f69c7250504f
  )
  FetchContent_GetProperties(duktape)
  if (NOT duktape_POPULATED)
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(duktape)

    add_library(duktape STATIC ${duktape_SOURCE_DIR}/src/duktape.c)

    if("${CMAKE_SYSTEM_NAME}" MATCHES "Linux")
      target_link_libraries(duktape
        m dl rt
      )
    endif()

    target_include_directories(duktape PUBLIC ${duktape_SOURCE_DIR}/src ${duktape_SOURCE_DIR}/extras)
  endif()
endif()

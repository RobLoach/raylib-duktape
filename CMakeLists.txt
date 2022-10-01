cmake_minimum_required(VERSION 3.11)
project(raylib-duktape
	DESCRIPTION "raylib-duktape: raylib for Duktape JavaScript"
	HOMEPAGE_URL "https://github.com/robloach/raylib-duktape"
	VERSION 0.0.1
)

add_definitions(
	-Wfatal-errors
)

# Options
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    set(RAYLIB_DUKTAPE_IS_MAIN TRUE)
else()
    set(RAYLIB_DUKTAPE_IS_MAIN FALSE)
endif()
option(RAYLIB_DUKTAPE_BUILD_EXAMPLES "Examples" ${RAYLIB_DUKTAPE_IS_MAIN})
option(RAYLIB_DUKTAPE_BUILD_BINARY "Binary" ${RAYLIB_DUKTAPE_IS_MAIN})
option(RAYLIB_DUKTAPE_BUILD_TESTS "Tests" ${RAYLIB_DUKTAPE_IS_MAIN})

add_subdirectory(lib)

if (RAYLIB_DUKTAPE_BUILD_BINARY)
	add_subdirectory(bin)
endif()
if (RAYLIB_DUKTAPE_BUILD_EXAMPLES)
	add_subdirectory(examples)
endif()

if (RAYLIB_DUKTAPE_BUILD_TESTS)
	include(CTest)
	enable_testing()
	if (BUILD_TESTING)
		add_subdirectory(tests)
	endif()
endif()

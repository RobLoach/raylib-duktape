cmake_minimum_required(VERSION 3.11)
project(raylib-duktape
	DESCRIPTION "raylib-duktape: raylib for Duktape JavaScript"
	HOMEPAGE_URL "https://github.com/robloach/raylib-duktape"
	VERSION 0.0.1
)

add_definitions(
	-Wfatal-errors
)

add_subdirectory(lib)
add_subdirectory(bin)
add_subdirectory(examples)

include(CTest)
enable_testing()
if(BUILD_TESTING)
	add_subdirectory(tests)
endif()

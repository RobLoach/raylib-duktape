cmake_minimum_required(VERSION 3.11)
project(raylib-duktape)

add_definitions(
	-Wfatal-errors
)

add_subdirectory(include)
add_subdirectory(bin)
add_subdirectory(examples)

include(CTest)
enable_testing()
if(BUILD_TESTING)
	add_subdirectory(tests)
endif()

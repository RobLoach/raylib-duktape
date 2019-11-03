find_package(Duktapecc)
find_package(Raylib)

list(APPEND LIBS raylib duktapecc raylib-js-h)
list(APPEND SOURCES raylib-js.cpp)
add_executable(raylib-js ${SOURCES})

target_link_libraries(raylib-js ${LIBS})


set_target_properties(raylib-js PROPERTIES
	CXX_STANDARD 17
	CXX_EXTENSIONS OFF
	)

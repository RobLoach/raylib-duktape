#ifndef RAYLIB_JS_H__
#define RAYLIB_JS_H__

#include <iostream>

#include <duktape/duktape.hh>

#include "raylib-js-structs.h"
#include "raylib-js-globals.h"
#include "raylib-js-functions.h"

namespace raylibjs {
	template <typename=void>
	static void define_in(duktape::engine& js) {
		define_globals(js);
		define_functions(js);
	}
}

#endif

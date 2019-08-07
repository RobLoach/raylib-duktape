/*******************************************************************************************
*
*   raylib-chaiscript v0.0.1 - raylib ChaiScript Launcher
*
*   DEPENDENCIES:
*
*   raylib 2.0 - This program uses latest raylib version (www.raylib.com)
*   ChaiScript >= 5.x  - http://chaiscript.com
*
*   COMPILATION (GCC):
*
*     mkdir build
*     cd build
*     cmake ..
*     make
*
*   USAGE:
*
*     Just launch your raylib .lua file from command line:
*       ./raylib-chaiscript core_basic_window.chai
*
*     or drag & drop your .chai file over raylib-chaiscript.exe
*
*
*   LICENSE: zlib/libpng
*
*   Copyright (c) 2018 Rob Loach (@RobLoach)
*
*   This software is provided "as-is", without any express or implied warranty. In no event
*   will the authors be held liable for any damages arising from the use of this software.
*
*   Permission is granted to anyone to use this software for any purpose, including commercial
*   applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*     1. The origin of this software must not be misrepresented; you must not claim that you
*     wrote the original software. If you use this software in a product, an acknowledgment
*     in the product documentation would be appreciated but is not required.
*
*     2. Altered source versions must be plainly marked as such, and must not be misrepresented
*     as being the original software.
*
*     3. This notice may not be removed or altered from any source distribution.
*
********************************************************************************************/

#include <iostream>
#include <string>

#include "raylib.h"
#include <duktape.h>
#include "../include/raylib-js.hpp"

int main(int argc, char *argv[])
{
    std::string executableName;
    std::string fileToLoad;

    switch (argc) {
        case 0:
            executableName = "raylib-js";
            fileToLoad = "main.js";
            break;
        case 1:
            executableName = argv[0];
            fileToLoad = "main.js";
            break;
        default:
            executableName = argv[0];
            fileToLoad = argv[1];
            break;
    }

    if (!FileExists(fileToLoad.c_str())) {
        std::cout << "Usage:" << std::endl << "    " << GetFileName(executableName.c_str()) << " myfile.js" << std::endl << std::endl;
        std::cout << "Attempted file " << fileToLoad << " was not found." << std::endl;
        return 1;
    }

    if (!IsFileExtension(fileToLoad.c_str(), ".js")) {
        std::cout << "Expected file to be a .js file." << std::endl;
        return 1;
    }

    std::string contents(LoadText(fileToLoad.c_str()));
    if (contents.empty()) {
    	std::cout << "File was empty." << std::endl;
    	return 1;
    }

    duk_context* ctx = duk_create_heap_default();
    raylib_js_context(ctx);
	duk_eval_string(ctx, contents.c_str());
	duk_destroy_heap(ctx);

    return 0;
}
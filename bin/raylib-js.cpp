#include <iostream>
#include <string>

#include "raylib.h"
#include <duktape.h>
#include "raylib-js.h"

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
	dukglue_peval<void>(ctx, contents.c_str());
	duk_destroy_heap(ctx);

    return 0;
}

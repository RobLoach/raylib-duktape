#include <iostream>
#include <string>

#include "raylib.h"
#include <duktape.h>
//#include <console/duk_console.h>
#include "../lib/raylib-duktape.h"
#include <dukglue/dukglue.h>

int main(int argc, char *argv[]) {
    std::string executableName;
    std::string fileToLoad;

    switch (argc) {
        case 0:
            executableName = "raylib-duktape";
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

    char* fileText = LoadFileText(fileToLoad.c_str());
    std::string contents(fileText);
    UnloadFileText(fileText);
    if (contents.empty()) {
    	std::cout << "File was empty." << std::endl;
    	return 1;
    }

    // Make sure it runs in the correct folder.
    if (!ChangeDirectory(GetDirectoryPath(fileToLoad.c_str()))) {
        TraceLog(LOG_WARNING, "Failed to change directory");
    }

    // Construct the Duktape environment.
    duk_context* ctx = duk_create_heap_default();

    // Initialize the console module.
    //duk_console_init(ctx, 0);

    // Initialize the raylib module.
    duk_raylib_init(ctx, 0);

    // Eval the loaded code.
	dukglue_peval<void>(ctx, contents.c_str());

    // Destroy the environment.
	duk_destroy_heap(ctx);

    return 0;
}

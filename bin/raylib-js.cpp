#include <iostream>
#include <string>

#include "raylib.h"
#include <duktape.hh>
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

    // Construct the Duktape environment.
    duktape::engine js;

    // Initialize the raylib module.
    //duk_module_raylib_init(ctx);

    // Eval the loaded code.
    try {
	   js.eval<void>(contents);
    }
    catch (const duktape::script_error& e) {
        cout << "Caught '" << e.what() << "'" << endl;
    }

    return 0;
}

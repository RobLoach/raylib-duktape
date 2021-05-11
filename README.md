# raylib-duktape

JavaScript bindings for [raylib](https://www.raylib.com/), a simple and easy-to-use library to learn videogames programming.

`raylib-duktape` uses [Duktape](https://duktape.org/) and [Dukglue](https://github.com/Aloshi/dukglue).

## Example

``` js
const screenWidth = 800
const screenHeight = 450

InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window")
SetTargetFPS(60)

while (!WindowShouldClose()) {
    BeginDrawing()
        ClearBackground(RAYWHITE)
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY)
    EndDrawing()
}

CloseWindow()
```

## CLI

A [raylib-duktape](bin/raylib-duktape.cpp) CLI launcher is provided to allow running raylib JavaScript files.

```
raylib-duktape core_basic_window.js
```

## API

Initialize raylib-duktape through your Duktape context.

```
#include "raylib-duktape.h"

// After initializing the Duktape heap...
duk_module_raylib_init(ctx);
```

## Build

``` bash
git clone https://github.com/RobLoach/raylib-duktape.git
cd raylib-duktape
mkdir build
cd build
cmake ..
make
make test
```

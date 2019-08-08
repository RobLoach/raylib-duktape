/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2018 Rob Loach (@RobLoach)
*
********************************************************************************************/

// Initialization
//--------------------------------------------------------------------------------------
const screenWidth = 800
const screenHeight = 450
InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window")

SetTargetFPS(60)
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing()

        ClearBackground(RAYWHITE)

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY)

    EndDrawing()
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
CloseWindow()        // Close window and OpenGL context
//--------------------------------------------------------------------------------------

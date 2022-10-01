// Initialization
//--------------------------------------------------------------------------------------
const screenWidth = 800
const screenHeight = 450
const fontSize = 50
const color = Color(247, 223, 30, 255)

InitWindow(screenWidth, screenHeight, "raylib [shapes] example - raylib logo using shapes")

SetTargetFPS(60)               // Set our game to run at 60 frames-per-second
const raylibWidth = MeasureText("raylib", fontSize)
const duktapeWidth = MeasureText("duktape", fontSize)
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
    BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(screenWidth/2 - 128, screenHeight/2 - 128, 256, 256, BLACK);
        DrawRectangle(screenWidth/2 - 112, screenHeight/2 - 112, 224, 224, YELLOW);

        DrawText("raylib", screenWidth/2 + 112 - raylibWidth - 12, screenHeight/2 + 48 - 40, fontSize, BLACK);
        DrawText("duktape", screenWidth/2 + 112 - duktapeWidth - 12, screenHeight/2 + 48, fontSize, BLACK);

        DrawText("this is NOT a texture!", 350, 370, 10, GRAY);

    EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
CloseWindow();        // Close window and OpenGL context
//--------------------------------------------------------------------------------------

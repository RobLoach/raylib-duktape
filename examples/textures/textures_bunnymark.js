
const screenWidth = 800
const screenHeight = 450
InitWindow(screenWidth, screenHeight, 'raylib [textures] example - bunnymark')
SetTargetFPS(60)

const MAX_BUNNIES = 1000000
const MAX_BATCH_ELEMENTS = 8192

function Bunny () {
  const col = Color(GetRandomValue(50, 240), GetRandomValue(80, 240), GetRandomValue(100, 240), 255)
  return {
    position: GetMousePosition(),
    speed: Vector2(GetRandomValue(-250, 250) / 60, GetRandomValue(-250, 250) / 60),
    color: col
  }
}

var bunnies = []
bunnies.push(Bunny())

const texBunny = LoadTexture('resources/wabbit_alpha.png')

while (!WindowShouldClose()) {
    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
        for (var i = 0; i < 2; i++) {
            if (bunnies.length < MAX_BUNNIES) {
                bunnies.push(Bunny())
            }
        }
    }

    for (var i = 0; i < bunnies.length; i++) {
        bunnies[i].position.x += bunnies[i].speed.x
        bunnies[i].position.y += bunnies[i].speed.y

        if (((bunnies[i].position.x + texBunny.width / 2) > GetScreenWidth()) ||
            ((bunnies[i].position.x + texBunny.width / 2) < 0)) bunnies[i].speed.x *= -1
        if (((bunnies[i].position.y + texBunny.height / 2) > GetScreenHeight()) ||
            ((bunnies[i].position.y + texBunny.height / 2 - 40) < 0)) bunnies[i].speed.y *= -1
    }

    BeginDrawing()
    ClearBackground(RAYWHITE)

    for (var i = 0; i < bunnies.length; i++) {
        DrawTextureV(texBunny, bunnies[i].position, bunnies[i].color)
    }

    DrawRectangle(0, 0, screenWidth, 40, BLACK);
    DrawText("bunnies: " + bunnies.length, 120, 10, 20, GREEN);
    DrawText("batched draw calls: " + (1 + bunnies.length / MAX_BATCH_ELEMENTS), 320, 10, 20, MAROON);

    DrawFPS(10, 10)

    EndDrawing()
}

UnloadTexture(texBunny)
CloseWindow()

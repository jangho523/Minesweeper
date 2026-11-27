#include "raylib.h"
#include "game_manager.hpp"

int main()
{
    InitWindow(480, 480, "Minesweeper");
    SetTargetFPS(60);

    Minesweeper::GameManager game;
    game.init();

    while (!WindowShouldClose()) {
        game.update();

        BeginDrawing();
        ClearBackground(RAYWHITE);

        game.draw();

        EndDrawing();
    }

    game.shutdown();
    CloseWindow();

    return 0;
}
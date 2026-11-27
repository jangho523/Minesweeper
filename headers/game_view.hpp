#pragma once
#include "raylib.h"

namespace Minesweeper {
    class GameView {
    public:
        void loadTextures();
        void drawCell(int row, int col);
        void drawBoard();
        void unloadTextures();

    private:
        Texture2D numbers[9];
        Texture2D covered;
        Texture2D revealed;
        Texture2D mineExploded;
        Texture2D mineResult;
        Texture2D flaged;
        Texture2D questioned;
    };
}
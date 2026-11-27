#include "game_view.hpp"

namespace Minesweeper {
	void GameView::loadTextures() {
        // Numbers
        for (int i = 1; i <= 8; ++i) {
            numbers[i] = LoadTexture(TextFormat("resources/cell_%d.png", i)
            );
        }
        covered = LoadTexture("resources/cell_covered.png");
        flaged = LoadTexture("resources/cell_flagged.png");
        mineExploded = LoadTexture("resources/cell_mineexploded.png");
        mineResult = LoadTexture("resources/cell_mineresult.png");
        questioned = LoadTexture("resources/cell_questioned.png");
        revealed = LoadTexture("resources/cell_revealed.png");

	}

    void GameView::drawCell(int row, int col) {
        DrawTextureEx(covered, { (float)(col * 48), (float)(row * 48) }, 0, 3.0f, WHITE);
    }

    void GameView::drawBoard() {
        for (int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                drawCell(row, col);
            }
        }
    }

    void GameView::unloadTextures() {
        for (int i = 1; i <= 8; ++i) {
            UnloadTexture(numbers[i]);
        }
        UnloadTexture(covered);
        UnloadTexture(flaged);
        UnloadTexture(mineExploded);
        UnloadTexture(mineResult);
        UnloadTexture(questioned);
        UnloadTexture(revealed);
    }
}
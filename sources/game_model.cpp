#include "game_model.hpp"
#include "raylib.h"

namespace Minesweeper {
	void GameModel::generateBoard() {
		board.resize(rows, std::vector<Cell>(cols));
		
        int placedMines = 0;

        while (placedMines < mineCount) {
            int row = GetRandomValue(0, rows - 1);
            int col = GetRandomValue(0, cols - 1);

            if (!board[row][col].isMine) {
                board[row][col].isMine = true;
                ++placedMines;
            }
        }
	}
}
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

    void GameModel::calculateAdjacentMines() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                board[i][j].adjacentMines = 0;

                // Top Left
                if (i > 0 && j > 0 && board[i - 1][j - 1].isMine)
                    ++board[i][j].adjacentMines;

                // Top
                if (i > 0 && board[i - 1][j].isMine)
                    ++board[i][j].adjacentMines;

                // Top Right
                if (i > 0 && j < cols - 1 && board[i - 1][j + 1].isMine)
                    ++board[i][j].adjacentMines;

                // Left
                if (j > 0 && board[i][j - 1].isMine)
                    ++board[i][j].adjacentMines;

                // Right
                if (j < cols - 1 && board[i][j + 1].isMine)
                    ++board[i][j].adjacentMines;

                // Bottom Left
                if (i < rows - 1 && j > 0 && board[i + 1][j - 1].isMine)
                    ++board[i][j].adjacentMines;

                // Bottom
                if (i < rows - 1 && board[i + 1][j].isMine)
                    ++board[i][j].adjacentMines;

                // Bottom Right
                if (i < rows - 1 && j < cols - 1 && board[i + 1][j + 1].isMine)
                    ++board[i][j].adjacentMines;
            }
        }
    }
}
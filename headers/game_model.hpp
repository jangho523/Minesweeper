#pragma once
#include <vector>

namespace Minesweeper {
    enum class CellState
    {
        Covered,
        Revealed,
        Flagged,
        Questioned
    };

    struct Cell
    {
		bool isMine = false;
        CellState state = CellState::Covered;
        int adjacentMines = 0;
    };

    class GameModel {
    public:
        void generateBoard();
        void calculateAdjacentMines();

    private:
        int rows = 9;
        int cols = 9;
        int mineCount = 10;

        std::vector<std::vector<Cell>> board;
    };
}
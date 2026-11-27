#pragma once
#include "game_model.hpp"
#include "game_view.hpp"

namespace Minesweeper {
    class GameManager {
    public:
        void init();
        void update();
        void draw();
        void shutdown();

    private:
        GameModel model;
        GameView view;
    };
}
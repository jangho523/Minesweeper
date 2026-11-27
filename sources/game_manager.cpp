#include "game_manager.hpp"

namespace Minesweeper {
    void GameManager::init() {
        view.loadTextures();
    }

    void GameManager::update() {

    }

    void GameManager::draw() {
        view.drawBoard();
    }

    void GameManager::shutdown() {
        view.unloadTextures();
    }
}
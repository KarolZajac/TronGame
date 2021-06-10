#include <iostream>
#include "GameEngine.h"
#include <SFML/Graphics.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;

    Board board = Board(45, 35, 16);

    GameEngine game;
    GameEngine::run(board);

    return 0;
}

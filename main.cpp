#include <iostream>
#include "GameEngine.h"
#include <SFML/Graphics.hpp>

int main() {
    std::cout << "Welcome in Tron Game !!!" << std::endl;
    std::cout << "Player1 moves with: WASD !!!" << std::endl;
    std::cout << "Player2 moves with: arrow keys !!!" << std::endl;
    Board board = Board(45, 35, 16);
    GameEngine game = GameEngine(board);
    game.run();

    return 0;
}

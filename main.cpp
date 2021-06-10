#include <iostream>
#include "GameEngine.h"
#include <SFML/Graphics.hpp>

int main() {
    std::cout << "Welcome in Tron Game !!!" << std::endl;
    std::cout << "Player1 moves with: WASD !!!" << std::endl;
    std::cout << "Player2 moves with: arrow keys !!!" << std::endl;

    Board board = Board(45, 35, 16);
    Player player1 = Player();
    Player player2 = Player();
    GameEngine game = GameEngine(board, player1, player2);
    game.run();

    return 0;
}

#include <iostream>
#include "GameEngine.h"
#include "Menu.h"
#include <SFML/Graphics.hpp>

int main() {
    std::cout << "Welcome in Tron Game !!!" << std::endl;
    Board board = Board(60, 34, 20);
    Menu menu((float) (board.size * board.W), (float) (board.size * board.H));
    int mode = Menu::startMenu();

    Player player1 = Player();
    Player player2 = Player();
    GameEngine game = GameEngine(board, player1, player2, 40.f);
    game.run(mode);

    return 0;
}

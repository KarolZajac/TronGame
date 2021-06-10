

#include "Board.h"
#include "GameEngine.h"
#include "SFML/Graphics.hpp"

using namespace sf;

Board::Board(int width, int height, int size) {

    this->W = width;
    this->H = height;
    this->size = size;
}

void Board::loadTextures() {

    this->background.loadFromFile("resources/background.png");
    this->player1.loadFromFile("resources/color1.png");
    this->player2.loadFromFile("resources/color2.png");
}



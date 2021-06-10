

#include "Board.h"
#include "GameEngine.h"
#include "SFML/Graphics.hpp"

using namespace sf;

//constructor
Board::Board(int width, int height, int size) {

    this->W = width;
    this->H = height;
    this->size = size;
    this->traceArray = create2DArray(width,height);
}

//loading textures from resources
void Board::loadTextures() {

    this->background.loadFromFile("resources/background.png");
    this->color1.loadFromFile("resources/color1.png");
    this->color2.loadFromFile("resources/color2.png");
}

int **Board::create2DArray(int width, int height) {
    int **array2D = nullptr;
    array2D = new int *[height];

    for (int h = 0; h < height; h++) {
        array2D[h] = new int[width];
        for (int w = 0; w < width; w++)
            array2D[h][w] = 0;

    }
    return array2D;
}

void Board::boardWrapping(Player &player1, Player &player2) const {
    //handle reaching position out of game border
    if (player1.xPosition >= W * size) player1.xPosition = 0;
    if (player1.xPosition < 0) player1.xPosition = (W - 1) * size;
    if (player1.yPosition >= H * size) player1.yPosition = 0;
    if (player1.yPosition < 0) player1.yPosition = (H - 1) * size;

    if (player2.xPosition >= W * size) player2.xPosition = 0;
    if (player2.xPosition < 0) player2.xPosition = (W - 1) *size;
    if (player2.yPosition >= H * size) player2.yPosition = 0;
    if (player2.yPosition < 0) player2. yPosition = (H - 1) * size;
}



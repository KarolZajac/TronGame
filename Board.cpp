

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
    this->player1.loadFromFile("resources/color1.png");
    this->player2.loadFromFile("resources/color2.png");
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





#ifndef TRONGAME_BOARD_H
#define TRONGAME_BOARD_H

#include "SFML/Graphics.hpp"

using namespace sf;

class Board {

public:

    int W;
    int H;
    int size;

    Texture background;
    Texture player1;
    Texture player2;

    Board(int width, int height, int size);

    void loadTextures();

};


#endif //TRONGAME_BOARD_H

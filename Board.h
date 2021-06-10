

#ifndef TRONGAME_BOARD_H
#define TRONGAME_BOARD_H

#include "SFML/Graphics.hpp"

using namespace sf;

class Board {

public:
    //board parameters
    int W{};
    int H{};
    int size{};
    int **traceArray{};

    //textures
    Texture background;
    Texture player1;
    Texture player2;

    Board() = default;;

    Board(int width, int height, int size);

    void loadTextures();

    static int ** create2DArray(int width, int height);

};


#endif //TRONGAME_BOARD_H

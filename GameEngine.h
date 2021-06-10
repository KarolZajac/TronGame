

#ifndef TRONGAME_GAMEENGINE_H
#define TRONGAME_GAMEENGINE_H

#include <ctime>
#include <utility>
#include "Board.h"
#include "Player.h"
#include "SFML/Graphics.hpp"

using namespace sf;

class GameEngine {
    Board board;
public:

    explicit GameEngine(Board board) {
        this->board = std::move(board);
    }

    void run();

    void updateMove(int &x1, int &x2, int &y1, int &y2) const;

};


#endif //TRONGAME_GAMEENGINE_H

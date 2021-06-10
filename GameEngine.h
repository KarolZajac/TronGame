

#ifndef TRONGAME_GAMEENGINE_H
#define TRONGAME_GAMEENGINE_H

#include <ctime>
#include <utility>
#include "Board.h"
#include "Player.h"
#include "SFML/Graphics.hpp"

using namespace sf;

class GameEngine {
    Board board{};
    Player player1{};
    Player player2{};

public:

    explicit GameEngine(Board board, Player p1, Player p2) {
        this->board = std::move(board);
        this->player1 = p1;
        this->player2 = p2;
    }

    void run();

    void initPlayers();

    void updateMove(int &x1, int &x2, int &y1, int &y2) const;


};


#endif //TRONGAME_GAMEENGINE_H

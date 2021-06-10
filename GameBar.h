//
// Created by Karol on 10.06.2021.
//

#ifndef TRONGAME_GAMEBAR_H
#define TRONGAME_GAMEBAR_H

#include "SFML/Graphics.hpp"
#include "Player.h"

using namespace sf;

class GameBar {

    static Font loadFont();

public:
    Text p1Score;
    Text p2Score;
    Text p1Covered;
    Text p2Covered;
    Text timer;
    GameBar();

    void updateTexts(Player &player1, Player &player2, float time);


    Font font;

    void setTextProperties();
};


#endif //TRONGAME_GAMEBAR_H

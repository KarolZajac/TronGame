//
// Created by Karol on 10.06.2021.
//

#ifndef TRONGAME_GAMEBAR_H
#define TRONGAME_GAMEBAR_H
#include "SFML/Graphics.hpp"
#include "Player.h"

using namespace sf;
class GameBar {
    Text p1Score;
    Text p2Score;
    Text p1Covered;
    Text p2Covered;
    Text timer;
    Font font;

    GameBar();

    static Font loadFont();

    void setTextProperties();

    void updateTexts(Player &player1, Player &player2);



};


#endif //TRONGAME_GAMEBAR_H

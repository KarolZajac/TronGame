//
// Created by Karol on 10.06.2021.
//

#include "GameBar.h"
#include <sstream>

GameBar::GameBar() {
    this->font=loadFont();
}

Font GameBar::loadFont() {
    Font f;
    f.loadFromFile("fonts/CENTAUR.TTF");
    return f;
}

void GameBar::updateTexts(Player &player1, Player &player2) {
    std::stringstream ss;
    ss << player1.score;
    std::string si;
    ss >> si;

    std::stringstream ss2;
    ss2 << player2.score;
    std::string si2;
    ss2 >> si2;

    p1Score.setString("Wins: "+ si);
    p2Score.setString("Wins: "+ si2);
}

void GameBar::setTextProperties() {
    p1Score.setFont(font);
    p2Score.setFont(font);
    p1Score.setString("Wins: ");
    p2Score.setString("Wins: ");
    p1Score.setFillColor(Color::Red);
    p2Score.setFillColor(Color::Cyan);
}



#include "Player.h"

Player::Player(int x, int y) {
    this->xPosition = x;
    this->yPosition = y;
    this->counter=0;
}

void Player::changePosition(int newX, int newY) {
    this->xPosition = newX;
    this->yPosition = newY;
}

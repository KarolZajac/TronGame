
#ifndef TRONGAME_PLAYER_H
#define TRONGAME_PLAYER_H


class Player {

public:
    int xPosition;
    int yPosition;
    int score;
    int covered;

    Player() = default;;

    Player(int x, int y);

    void changePosition(int x, int y);
};


#endif //TRONGAME_PLAYER_H

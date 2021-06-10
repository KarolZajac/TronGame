
#ifndef TRONGAME_PLAYER_H
#define TRONGAME_PLAYER_H


class Player {

public:

    Player()= default;;

    Player(int x, int y);

    int yPosition;
    int xPosition;

    void changePosition(int x, int y );
};


#endif //TRONGAME_PLAYER_H

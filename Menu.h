

#ifndef TRONGAME_MENU_H
#define TRONGAME_MENU_H

#define MAX_NUMBER_OF_ITEMS 2

#include "SFML/Graphics.hpp"

using namespace sf;
class Menu {

public:
    Menu(float width, float height);

    ~Menu();

    void draw(RenderWindow &window);

    void moveUp();

    void moveDown();

    int getPressedItem() const { return selectedItemIndex; }

    static int startMenu();

private:
    int selectedItemIndex;
    Font font;
    Text menu[MAX_NUMBER_OF_ITEMS];

};

#endif //TRONGAME_MENU_H

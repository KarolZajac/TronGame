//
// Created by Karol on 14.06.2021.
//

#include "Menu.h"
#include "GameEngine.h"

Menu::Menu(float width, float height)
{
    font.loadFromFile("fonts/centaur.ttf");

    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Red);
    menu[0].setString("Play covered mode");
    menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::White);
    menu[1].setString("Play auto mode");
    menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

    selectedItemIndex = 0;
}


Menu::~Menu()
= default;

void Menu::draw(RenderWindow &window)
{
    for (const auto & i : menu)
        window.draw(i);
}

void Menu::moveUp()
{
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setFillColor(Color::White);
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(Color::Red);
    }
}

void Menu::moveDown()
{
    if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
    {
        menu[selectedItemIndex].setFillColor(Color::White);
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(Color::Red);
    }
}

int Menu::startMenu() {

    RenderWindow window(VideoMode(600, 600), "TronGame");

    Menu menu_opt(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {
        Event event{};

        while (window.pollEvent(event))
        {
            if( Keyboard::isKeyPressed(Keyboard::Up)) {menu_opt.moveUp(); break;}
            if( Keyboard::isKeyPressed(Keyboard::Down)) {menu_opt.moveDown(); break;}
            if( Keyboard::isKeyPressed(Keyboard::Return)) {
                return menu_opt.getPressedItem();
            }

            if (event.type == Event::Closed) { window.close(); }
        }

        window.clear();

        menu_opt.draw(window);

        window.display();
    }
    return 0;
}

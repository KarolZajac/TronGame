

#include "GameEngine.h"
#include "Board.h"
#include "SFML/Graphics.hpp"

using namespace sf;

void GameEngine::run() {

    auto * board = new Board(45, 35, 16);

    RenderWindow window(VideoMode(board->W * board->size, board->H * board->size), "TronGame");

    while (window.isOpen()) {

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) { window.close(); }
        }

        window.clear();
        window.display();
    }

}





#include "GameEngine.h"
#include "Board.h"
#include "SFML/Graphics.hpp"

using namespace sf;

void GameEngine::run(Board board) {

    board.loadTextures();
    RenderWindow window(VideoMode(board.W* board.size, board.H * board.size), "TronGame");

    Sprite Background(board.background);

    while (window.isOpen()) {

        Event event{};
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) { window.close(); }
        }

        window.clear();
        for(int i=0;i< board.H ;i++)
            for(int k = 0; k< board.W ;k++){
                Background.setPosition(k*board.size, i* board.size);
                window.draw(Background);
            }
        window.display();
    }

}


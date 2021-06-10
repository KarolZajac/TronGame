

#include "GameEngine.h"
#include "Player.h"
#include "SFML/Graphics.hpp"

using namespace sf;

void GameEngine::run(Board board) {

    board.loadTextures();
    RenderWindow window(VideoMode(board.W * board.size, board.H * board.size), "TronGame");

    //sprites for background and players textures
    Sprite Background(board.background);
    Sprite Player1(board.player1);
    Sprite Player2(board.player2);

    Player player1 = Player(39 * board.size, 15 * board.size);
    Player player2 = Player(5 * board.size, 15 * board.size);

    while (window.isOpen()) {

        Event event{};
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) { window.close(); }
        }

        window.clear();

        //drawing background
        for (int i = 0; i < board.H; i++){
            for (int k = 0; k < board.W; k++) {
                Background.setPosition(k * board.size, i * board.size);
                window.draw(Background);
            }
        }
        //drawing players
        Player1.setPosition(player1.xPosition, player1.yPosition);
        window.draw(Player1);
        Player2.setPosition(player2.xPosition, player2.yPosition);
        window.draw(Player2);

        window.display();
    }

}


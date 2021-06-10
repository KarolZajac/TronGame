

#include "GameEngine.h"
#include "Player.h"
#include "SFML/Graphics.hpp"

using namespace sf;


void GameEngine::run() {

    board.loadTextures();
    RenderWindow window(VideoMode(board.W * board.size, board.H * board.size), "TronGame");

    //sprites for background and players textures
    Sprite Background(board.background);
    Sprite Player1(board.player1);
    Sprite Player2(board.player2);

    Player player1 = Player(39 * board.size, 15 * board.size);
    Player player2 = Player(5 * board.size, 15 * board.size);

    float timer = 0, delay = 0.2;
    Clock clock;

    while (window.isOpen()) {

        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;

        Event event{};
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) { window.close(); }
        }

        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        updateMove(x1, x2, y1, y2);

        if (timer > delay) {
            player1.xPosition += x1;
            player1.yPosition += y1;
            player2.xPosition += x2;
            player2.yPosition += y2;

            timer = 0;
        }

        window.clear();

        //drawing background
        for (int i = 0; i < board.H; i++) {
            for (int k = 0; k < board.W; k++) {
                Background.setPosition((float) (k * board.size), (float) (i * board.size));
                window.draw(Background);
            }
        }
        //drawing players
        Player1.setPosition((float) player1.xPosition, (float) player1.yPosition);
        window.draw(Player1);
        Player2.setPosition((float) player2.xPosition, (float) player2.yPosition);
        window.draw(Player2);

        window.display();
    }

}

void GameEngine::updateMove(int &x1, int &x2, int &y1, int &y2) const {

    //printf("test");
    //player1 moves with arrow keys
    if (Keyboard::isKeyPressed(Keyboard::Left)) { x1 = -board.size, y1 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::Right)) { x1 = board.size, y1 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::Up)) { x1 = 0, y1 = -board.size; }
    if (Keyboard::isKeyPressed(Keyboard::Down)) { x1 = 0, y1 = board.size; }

    //player2 moves with WSDA keys
    if (Keyboard::isKeyPressed(Keyboard::A)) { x2 = -board.size, y2 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::D)) { x2 = board.size, y2 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::W)) { x2 = 0, y2 = -board.size; }
    if (Keyboard::isKeyPressed(Keyboard::S)) { x2 = 0, y2 = board.size; }

}


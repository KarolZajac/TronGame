

#include <iostream>
#include "GameEngine.h"
#include <sstream>
#include "Player.h"
#include "SFML/Graphics.hpp"
#include "GameBar.h"
using namespace sf;

void GameEngine::run() {

    board.loadTextures();
    RenderWindow window(VideoMode(board.W * board.size, board.H * board.size), "TronGame");

    //sprites for background and players textures
    Sprite Background(board.background);
    Sprite Player1(board.color1);
    Sprite Player2(board.color2);
    Player1.setScale(board.size / 16.0, board.size / 16.0);
    Player2.setScale(board.size / 16.0, board.size / 16.0);
    Background.setScale(board.size / 16.0, board.size / 16.0);
    initPlayers();


    Font font;
    font.loadFromFile("fonts/CENTAUR.TTF");
    Text p1Score, p2Score;

    p1Score.setFont(font);
    p2Score.setFont(font);

    p1Score.setFillColor(Color::Red);
    p2Score.setFillColor(Color::Cyan);

    p1Score.setPosition(0,0);
    p2Score.setPosition(600,0);

    p1Score.setString("Wins: ");
    p2Score.setString("Wins: ");


    float timer = 0, delay = 0.05;
    Clock clock;

    float countdown = 10.f;

    while (window.isOpen()) {

        int collision;
        float time = clock.getElapsedTime().asSeconds();
       // printf("%f\n", countdown);
        clock.restart();
        timer += time;
        countdown -= time;

        /*if (countdown <= 0) {
            checkWinner();
            continue;
        }*/

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

            board.boardWrapping(player1, player2);
            collision = checkCollision(x1, x2, y1, y2);
            saveTrace();

            timer = 0;
        }

        window.clear();

        //drawing background
        for (int i = 0; i < board.H; i++) {
            for (int k = 0; k < board.W; k++) {
                if (board.traceArray[i][k] == 0) {
                    Background.setPosition((float) (k * board.size), (float) (i * board.size));
                    window.draw(Background);
                } else if (board.traceArray[i][k] == 1) {
                    Player1.setPosition((float) (k * board.size), (float) (i * board.size));
                    window.draw(Player1);
                } else if (board.traceArray[i][k] == 2) {
                    Player2.setPosition((float) (k * board.size), (float) (i * board.size));
                    window.draw(Player2);
                }

            }
        }
        //drawing players
        Player1.setPosition((float) player1.xPosition, (float) player1.yPosition);
        window.draw(Player1);
        Player2.setPosition((float) player2.xPosition, (float) player2.yPosition);
        window.draw(Player2);

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

        window.draw((p1Score));
        window.draw((p2Score));


        if (collision == 1) {
            printf("%d",player2.score);
            printf("%d",player1.score);
            sleep(seconds(3));
            initPlayers();
            x1 = 0;
            y1 = 0;
            x2 = 0;
            y2 = 0;
            board.traceArray = Board::create2DArray(board.W, board.H);
        }
        window.display();
    }
}

//listening if players using keys for moving
void GameEngine::updateMove(int &x1, int &x2, int &y1, int &y2) const {

    //printf("test");
    //player1 moves with arrow keys
    if (Keyboard::isKeyPressed(Keyboard::Left) && x1 != board.size) { x1 = -board.size, y1 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::Right) && x1 != -board.size) { x1 = board.size, y1 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::Up) && y1 != board.size) { x1 = 0, y1 = -board.size; }
    if (Keyboard::isKeyPressed(Keyboard::Down) && y1 != -board.size) { x1 = 0, y1 = board.size; }

    //player2 moves with WSDA keys
    if (Keyboard::isKeyPressed(Keyboard::A) && x2 != board.size) { x2 = -board.size, y2 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::D) && x2 != -board.size) { x2 = board.size, y2 = 0; }
    if (Keyboard::isKeyPressed(Keyboard::W) && y2 != board.size) { x2 = 0, y2 = -board.size; }
    if (Keyboard::isKeyPressed(Keyboard::S) && y2 != -board.size) { x2 = 0, y2 = board.size; }

}

//random player start positions
void GameEngine::initPlayers() {
    this->player1.changePosition(5 * board.size, 15 * board.size);
    this->player2.changePosition(39 * board.size, 15 * board.size);
    this->player1.covered = 0;
    this->player2.covered = 0;
}

bool GameEngine::checkCollision(int &x1, int &x2, int &y1, int &y2) {
    //handle collisions
    if (board.traceArray[player1.yPosition / board.size][player1.xPosition / board.size] == 1 && x1 + y1 != 0 ||
        board.traceArray[player1.yPosition / board.size][player1.xPosition / board.size] == 2) {
        player2.score++;
        return true;
    }
    if (board.traceArray[player2.yPosition / board.size][player2.xPosition / board.size] == 2 && x2 + y2 != 0 ||
        board.traceArray[player2.yPosition / board.size][player2.xPosition / board.size] == 1) {
        player1.score++;
        return true;
    }
    else return false;
}

void GameEngine::saveTrace() const {
    //filling array for drawing player's traces
    if (board.traceArray[player1.yPosition / board.size][player1.xPosition / board.size] == 0)
        board.traceArray[player1.yPosition / board.size][player1.xPosition / board.size] = 1;
    if (board.traceArray[player2.yPosition / board.size][player2.xPosition / board.size] == 0)
        board.traceArray[player2.yPosition / board.size][player2.xPosition / board.size] = 2;
}

void GameEngine::checkWinner() {
    if (player1.covered > player2.covered) { player1.score++; }
    else if (player2.covered > player1.covered) { player2.score++; }
}









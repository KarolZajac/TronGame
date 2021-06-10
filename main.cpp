#include <iostream>
#include "GameEngine.h"
#include <SFML/Graphics.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;

    GameEngine game;
    GameEngine::run();

    return 0;
}

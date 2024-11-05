#ifndef SURVIVOR_GAME_H
#define SURVIVOR_GAME_H
#include <SFML/Graphics.hpp>
#include <sstream>
#include "player.h"
#include "environment.h"

class Game {
    public:
        Game();
        void run();
        sf::Clock clock;
        sf::Text TimeText;
        sf::Font font;
    private:
        sf::RenderWindow window;
        Player player;
        void processInput();
        void update();
        void render();
        void checkBoundaries();
        void updateTime();
        Environment environment;
};


#endif //SURVIVOR_GAME_H

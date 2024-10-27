#ifndef SURVIVOR_GAME_H
#define SURVIVOR_GAME_H
#include <SFML/Graphics.hpp>
#include <sstream>
#include "player.h"

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
};


#endif //SURVIVOR_GAME_H

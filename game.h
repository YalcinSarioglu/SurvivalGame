#ifndef SURVIVOR_GAME_H
#define SURVIVOR_GAME_H
#include <SFML/Graphics.hpp>
#include "player.h"

class Game {
    public:
        Game();
        void run();
    private:
        sf::RenderWindow window;
        Player player;
        void processInput();
        void update();
        void render();
        void checkBoundaries();
};


#endif //SURVIVOR_GAME_H

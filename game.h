#ifndef SURVIVOR_GAME_H
#define SURVIVOR_GAME_H
#include <SFML/Graphics.hpp>
#include "player.h"

class Game {
    public:
        Game();
        void run();
    private:
        void processInput();
        void update();
        void render();
        sf::RenderWindow window;
        Player player;
};


#endif //SURVIVOR_GAME_H

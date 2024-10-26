#ifndef SURVIVOR_PLAYER_H
#define SURVIVOR_PLAYER_H
#include <SFML/Graphics.hpp>

class Player {
    public:
        Player();
        void update();
        void render(sf::RenderWindow &window);
    private:
        sf::RectangleShape shape; // Player's shape
};


#endif //SURVIVOR_PLAYER_H

#ifndef SURVIVOR_PLAYER_H
#define SURVIVOR_PLAYER_H
#include <SFML/Graphics.hpp>

class Player {
    public:
        Player(float speed);
        void update();
        void render(sf::RenderWindow &window);
        sf::FloatRect getBounds() const;
        void setPosition(float x, float y);
        sf::Vector2f getPosition() const;
        float getSpeed() const;
        void setSpeed(float newSpeed);
    private:
        sf::RectangleShape shape; // Player's shape
        float speed; // Player's speed
};


#endif //SURVIVOR_PLAYER_H

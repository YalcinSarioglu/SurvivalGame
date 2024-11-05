#ifndef ROCK_H
#define ROCK_H

#include <SFML/Graphics.hpp>
#include <memory>

class Rock {
    public:
        Rock(float x, float y, std::shared_ptr<sf::Texture> texture);
        void draw(sf::RenderWindow& window) const;

    private:
        sf::Sprite sprite;
        std::shared_ptr<sf::Texture> texture;
};

#endif // ROCK_H

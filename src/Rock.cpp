#include "Rock.h"

Rock::Rock(float x, float y, std::shared_ptr<sf::Texture> texture) : texture(texture) {
    sprite.setTexture(*this->texture);
    sprite.setPosition(x, y);
    sprite.setScale(3.0f, 3.0f);
}

void Rock::draw(sf::RenderWindow& window) const {
    window.draw(sprite);
}


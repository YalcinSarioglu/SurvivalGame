#include "Tree.h"

Tree::Tree(float x, float y, std::shared_ptr<sf::Texture> texture) : texture(texture) {
    sprite.setTexture(*this->texture);
    sprite.setPosition(x, y);
    sprite.setScale(5.0f, 5.0f);
}

void Tree::draw(sf::RenderWindow& window) const {
    window.draw(sprite);
}

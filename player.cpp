#include "player.h"

Player::Player() : shape(sf::Vector2f(50, 50)) {
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(400, 300);
}

void Player::update() {
}

void Player::render(sf::RenderWindow &window) {
    window.draw(shape);
}


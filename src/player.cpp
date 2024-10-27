#include "player.h"

Player::Player(float speed) : speed(speed) {
    shape.setSize(sf::Vector2f(50, 50));
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(400, 300);
}

void Player::update() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        shape.move(0, -speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        shape.move(0, speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        shape.move(-speed, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        shape.move(speed, 0);
    }
}

void Player::render(sf::RenderWindow &window) {
    window.draw(shape);
}
sf::FloatRect Player::getBounds() const {
    return shape.getGlobalBounds();
}

sf::Vector2f Player::getPosition() const {
    return shape.getPosition();
}

void Player::setPosition(float x, float y) {
    shape.setPosition(x, y);
}

float Player::getSpeed() const {
    return speed;
}

void Player::setSpeed(float newSpeed) {
    speed = newSpeed;
}

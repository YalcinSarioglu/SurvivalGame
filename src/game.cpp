#include "game.h"
#include <iostream>

Game::Game() :  window(sf::VideoMode(800, 600), "SURVIVOR"), player(0.1f)  {
    if (!font.loadFromFile("../assets/fonts/arial.ttf")) {
        std::cerr << "Failed to load font" << std::endl;
    }
}

void Game::run() {
    while (window.isOpen()) {
        updateTime();
        update();
        render();
    }
}

void Game::processInput() {
    sf::Event event{};
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
    player.update();
}

void Game::update() {
    processInput();
    checkBoundaries();
}

void Game::render() {
    window.clear();
    player.render(window);
    window.draw(TimeText);
    window.display();
}

void Game::checkBoundaries() {
    sf::Vector2f pos = player.getPosition();
    float playerWidth = player.getBounds().width;
    float playerHeight = player.getBounds().height;

    if (pos.x < 0) pos.x = 0;
    if (pos.y < 0) pos.y = 0;
    if (pos.x + playerWidth > window.getSize().x) pos.x = window.getSize().x - playerWidth;
    if (pos.y + playerHeight > window.getSize().y) pos.y = window.getSize().y - playerHeight;

    player.setPosition(pos.x, pos.y);
}

void Game::updateTime() {
    int time = clock.getElapsedTime().asSeconds();
    std::stringstream ss;
    ss << "Time: " << time;
    TimeText.setString(ss.str());
    TimeText.setFont(font);
    TimeText.setCharacterSize(24);
    TimeText.setFillColor(sf::Color::White);
    TimeText.setPosition(10, 10);
    window.draw(TimeText);
}
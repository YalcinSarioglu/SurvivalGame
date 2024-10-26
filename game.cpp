#include "game.h"

Game::Game() :  window(sf::VideoMode(800, 600), "Game")  {}

void Game::run() {
    while (window.isOpen()) {
        processInput();
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
}

void Game::update() {
    //player.update();
}

void Game::render() {
    window.clear();
    player.render(window);
    window.display();
}


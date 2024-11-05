#include "environment.h"
#include <iostream>
Environment::Environment() : treeTexture(std::make_shared<sf::Texture>()) , rockTexture(std::make_shared<sf::Texture>()) {
    if (!treeTexture->loadFromFile("../assets/sprites/TreeSprite.png")) {
        std::cerr << "Error: Failed to load tree texture from file" << std::endl;
    }
    if (!rockTexture->loadFromFile("../assets/sprites/RockSprite.png")) {
        std::cerr << "Error: Failed to load rock texture from file" << std::endl;
    }
    addRock(100, 100);
    addTree(200, 200);
}

void Environment::draw(sf::RenderWindow& window) {
    for (const auto& tree : trees) {
        tree.draw(window);
    }
    for (const auto& rock : rocks) {
        rock.draw(window);
    }
}

void Environment::addTree(float x, float y) {
    trees.emplace_back(x, y, treeTexture);
}

void Environment::addRock(float x, float y) {
    rocks.emplace_back(x, y, rockTexture);
}
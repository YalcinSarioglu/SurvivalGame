#ifndef TREE_H
#define TREE_H

#include <SFML/Graphics.hpp>
#include <memory>

class Tree {
    public:
        Tree(float x, float y, std::shared_ptr<sf::Texture> texture);
        void draw(sf::RenderWindow& window) const;

    private:
        sf::Sprite sprite;
        std::shared_ptr<sf::Texture> texture;
};

#endif // TREE_H


#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include <memory>
#include "Tree.h"
#include "Rock.h"

class Environment {
public:
    Environment();
    void draw(sf::RenderWindow& window);
    void update();
    void addTree(float x, float y);
    void addRock(float x, float y);

private:
    std::vector<Tree> trees;
    std::vector<Rock> rocks;
    std::shared_ptr<sf::Texture> treeTexture;
    std::shared_ptr<sf::Texture> rockTexture;
};

#endif // ENVIRONMENT_H


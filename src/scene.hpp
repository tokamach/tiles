#pragma once

#include <vector>
#include <forward_list>

#include "tile.hpp"
#include "entity.hpp"

class Scene
{
public:
    Scene();
    void update();
    void render();
private:
    std::vector<std::vector<Tile> > tiles;
    std::forward_list<Entity> entities;
};

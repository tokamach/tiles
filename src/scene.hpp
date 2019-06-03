#pragma once

#include <vector>
#include <forward_list>

#include "tile.hpp"
#include "entity.hpp"
#include "complex_tile.hpp"

class Scene
{
public:
    Scene(int _x_size, int _y_size);
    void add(int x, int y, Tile t);
    void add_complex(int x, int y, ComplexTile *ct);
    void update();
    void print();
    
private:
    int x_size, y_size;
    std::vector<std::vector<Tile> > tiles;
    std::forward_list<ComplexTile*> complex_tiles;
    std::forward_list<Entity*>      entities;

    void generateTestWorld();
};

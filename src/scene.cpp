#include <iostream>

#include "scene.hpp"
#include "tile.hpp"
#include "complex_tile.hpp"

Scene::Scene(int _x_size, int _y_size) : tiles(_x_size, std::vector<Tile>(_y_size))
{
    //TODO: load from disk
    this->x_size = _x_size;
    this->y_size = _y_size;

    //gen empty tile array
    for(int i = 0; i < x_size; i++)    
	for(int j = 0; j < y_size; j++)
	    tiles[i][j] = Tile::NIL;
}

void Scene::add(int x, int y, Tile t)
{
    //TODO: safety checks
    tiles[x][y] = t;
}

void Scene::add_complex(int x, int y, ComplexTile *ct)
{
    tiles[x][y] = Tile::COMPLEX;
    complex_tiles.push_front(ct);
}

void Scene::update()
{
    for(auto ct : complex_tiles)
    {
	ct->update();
    }
}

void Scene::print()
{
    for(int i = 0; i < x_size; i++)
    {
	for(int j = 0; j < y_size; j++)
	{
	    std::cout << tile_to_string(tiles[i][j]); //TODO: ideal way of printing tiles
	}
	std::cout << std::endl;
    }
}

void Scene::generateTestWorld()
{
    for(int i = 0; i < x_size; i++)
    {
	for(int j = 0; j < y_size; j++)
	{
	    tiles[i][j] = Tile::DIRT;
	}
    }
}

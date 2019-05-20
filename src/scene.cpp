#include <iostream>

#include "scene.hpp"
#include "tile.hpp"

Scene::Scene(int _x_size, int _y_size) : tiles(_x_size, std::vector<Tile>(_y_size)), entities()
{
    //TODO: load from disk
    this->x_size = _x_size;
    this->y_size = _y_size;

    generateTestWorld();
    print();
}

void Scene::update()
{
    
}

void Scene::print()
{
    for(int i = 0; i < x_size; i++)
    {
	for(int j = 0; j < y_size; j++)
	{
	    std::cout << tile_to_string(tiles[i][j]); //TODO: 
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


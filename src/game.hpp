#pragma once

#include <SFML/Graphics.hpp>

#include "tile.hpp"
#include "scene.hpp"

//root class which handles game state
class Game
{
public:
    Game(int x, int y);
    int start(); //returns error code

private:
    Scene scene;

    sf::RenderWindow win;
    sf::View view;
    sf::Clock clock;
};

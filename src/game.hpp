#pragma once

#include "tile.hpp"

//root class which handles game state
class Game
{
public:
    Game game();
    int start();

private:
    Map map;

};

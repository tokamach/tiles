#pragma once

class GameObject
{
    int id;
};

struct Tile
{
    int id; //tile type
    int light_level;
};

struct SolidTile : Tile
{
    
};

struct ObjectTile : Tile
{
    
};

class Map
{
public:
    Map(int id_arr[30][30]);

private:
    Tile tile_arr[30][30];
};

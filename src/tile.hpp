#pragma once

#include <string>

/* List of all simple tiles */
enum class Tile
{
    NIL,
    COMPLEX,
    DIRT,
    GRASS,
    STONE
};

//TODO: move to a cpp file
inline std::string tile_to_string(Tile t)
{
    switch(t)
    {
    case Tile::NIL:
	return "";
	break;

    case Tile::COMPLEX:
	return "cplx";
	break;
	
    case Tile::DIRT:
	return "dirt";
	break;

    case Tile::GRASS:
	return "gras";
	break;
    }
}

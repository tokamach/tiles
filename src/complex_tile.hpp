#pragma once

#include <SFML/Graphics.hpp>

//Abstract class
class ComplexTile
{
public:
    virtual void update() = 0;
    virtual void render() = 0;
    
    //ComplexTile(int x, int y) = 0;
    //virtual ~ComplexTile() {};
protected:
    int x, y;
    sf::Texture texture;
    //TODO: sound
};

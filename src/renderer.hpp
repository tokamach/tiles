#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

#include "scene.hpp"

//utility class which handles drawing game to sfml window
class Renderer
{
public:
    Renderer(sf::RenderWindow *win, Scene *scn);
    void render();

private:
    sf::RenderWindow *win;
    Scene *scn;
};

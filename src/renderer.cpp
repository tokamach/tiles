#include <SFML/Graphics.hpp>

#include "renderer.hpp"

Renderer::Renderer(sf::RenderWindow *win, Scene *scn)
{
    this->scn = scn;
    this->win = win;
}

void Renderer::render()
{
    
}

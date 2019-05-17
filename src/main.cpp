#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "game.hpp"
#include "renderer.hpp"
#include "tile.hpp"

int main()
{
    Game game;
    Renderer rend;

    sf::RenderWindow rwin(sf::VideoMode(800, 600), "Tiles");

    while(rwin.isOpen())
    {
	sf::Event e;
	while(rwin.pollEvent(e))
	{
	    switch(e.type)
	    {
	    case sf::Event::Closed:
		rwin.close();
		break;

	    default:
		break;
	    }
	}

	rwin.clear(sf::Color::Magenta);
	rwin.display();
    }
}

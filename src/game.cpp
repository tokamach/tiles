#include <iostream>

#include "game.hpp"
#include "tile.hpp"


Game::Game(int x, int y) : win(sf::VideoMode(x, y), "Tiles", sf::Style::Resize), scene(x, y)
{
    //scene = Scene(30, 30);
}

int Game::start()
{    
    while(win.isOpen())
    {	
	sf::Event ev;	
	while(win.pollEvent(ev))
	{
	    switch(ev.type)
	    {
	    case sf::Event::KeyPressed:
		//TODO: dispatch to key controller
		break;
		
	    case sf::Event::Closed:
		win.close();
		break;
		
	    case sf::Event::Resized:
		view.setSize(win.getSize().x, win.getSize().y);
		break;
	    
	    default:
		//std::cout << "Unhandled Event: " << ev.type << "\n";
		break;
	    }
	}
    }
}


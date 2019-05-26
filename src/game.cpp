#include <iostream>

#include "game.hpp"
#include "tile.hpp"


Game::Game(int win_x, int win_y, int scn_x, int scn_y) : win(sf::VideoMode(win_x, win_y), "Tiles", sf::Style::Resize), scene(scn_x, scn_y)
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
		std::cout << view.getSize().x << ", " << view.getSize().y << std::endl;
		break;
	    
	    default:
		//std::cout << "Unhandled Event: " << ev.type << "\n";
		//TODO: sort this, maybe just use if else
		break;
	    }
	}
    }
}

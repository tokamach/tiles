#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "game.hpp"

int main(int argc, char **argv)
{
    Game game(800, 600);
    game.start();
    return 0;
}

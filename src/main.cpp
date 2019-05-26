#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "game.hpp"

int main(int argc, char **argv)
{
    Game game(1920, 1080, 30, 30);
    game.start();
    return 0;
}

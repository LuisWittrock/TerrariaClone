#include "game.hpp"
#include "renderer.hpp"


void Game::start()
{
    window.create(sf::VideoMode(1920, 1080), "Terraria");
    run();
}

void Game::run()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        //draw stuff here
        window.display();
    }
}
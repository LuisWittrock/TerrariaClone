//handles how everything interacts with one another
#pragma once
#include <SFML/Graphics.hpp>

class Game
{
    public:
        sf::RenderWindow window;
        void start();
        void run();
        void newWorld();
        void loadWorld();
        void saveWorld();
};
//handles all the player stats.
#pragma once
#include <inventory.hpp>


class Player
{
    public:
        int health = 10;
        int money = 0;
        int armor = 0;
        int xPos, yPos;
        Inventory inventory;

        void save(); //save stats of the player in file
        void respawn(); //if health == 0 respawn
        void jump();
        void move(int xVel, int yVel);
        void changeHealth(int dHealth);
        void drawPlayer();
        void drawStats();
        void drawInventory();
};
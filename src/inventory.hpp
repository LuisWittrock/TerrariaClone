//this is the players Inventory it handles all the stuff the player can hold as a list of items 
#pragma once
#include "item.hpp"
#include <vector>

class Inventory
{
    public:
        Item* item;
        std::vector<Item*> invecntory;
};




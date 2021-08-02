//saves the map of the whole world as a 2D-Array of Blocks
//here it is where the map gets saved in a file

#pragma once
#include "block.hpp"
#include <vector>

class World
{
     public:
        std::vector<std::vector<Block*>> map;

        void createNewWorld(); //world generation
        void addBlock(int x, int y, int newID); // adds/changes a block in the map to that of the newID
        void drawMap();
        void save();
        void load();
};
//holds information for any specific block
//block id, block x-position, block y-position

class Block
{
    Block(int blockID, int xPos, int yPos) //constructor
    {
        this->blockID = blockID;
        this->xPos = xPos;
        this->yPos = yPos;
    }

    public:
        int blockID; //any block holds a specific id to know which block it is
        int xPos, yPos; //the x and y position
        bool collision; //can the player collide with the block

        void draw(); //function for the block to be drawn to the screen

};
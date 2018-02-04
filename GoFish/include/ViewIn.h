#ifndef VIEWIN_H
#define VIEWIN_H
#include <iostream>
#include <string>
#include "ViewOut.h"
#include <ctype.h>
#include <stdio.h>
using namespace std;

/**
*View for the input statements. (View class)
*/
class ViewIn
{
    public:
        /**
        *ViewIn constructor
        */
        ViewIn();
        /**
        *ViewIn destructor
        */
        ~ViewIn();
        /**
        *Choose the player that will be checked for cards
        *@return The players choice of player to fish
        *@param The number of players currently playing
        *@param The player number of the person fishing
        */
        int choosePlayer(int,int);
        /**
        *Chooses the number of players that will play the came
        *@return The number of players
        */
        int chooseNumPlayers();
        /**
        *Ask if the turn is ending
        *@return True if the turn is ending, False if the player wants to fish another player
        */
        bool endTurn();
    protected:

    private:
};

#endif // VIEWIN_H

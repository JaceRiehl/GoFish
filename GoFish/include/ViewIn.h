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
        virtual ~ViewIn(){}
        /**
        *Choose the player that will be checked for cards
        *@return The players choice of player to fish
        *@param The number of players currently playing
        *@param The player number of the person fishing
        */
        virtual int choosePlayer(int,int);
        /**
        *Choose the Card number that will be checked against a player
        *@return The players choice of Card
        *@param int that is the size of the hand.
        */
        virtual int chooseCard(int);
        /**
        *Chooses the number of players that will play the came
        *@param The maximum number of players
        *@return The number of players
        */
        virtual int chooseNumPlayers(int);
    protected:

    private:
};

#endif // VIEWIN_H

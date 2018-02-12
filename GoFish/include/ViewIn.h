#ifndef VIEWIN_H
#define VIEWIN_H
#include <iostream>
#include <string>
#include "ViewOut.h"
#include <ctype.h>
#include <stdio.h>
using namespace std;

/**
*View for the input statements. (cin portion of the View)
*/
class ViewIn
{
    public:
        /**
        *ViewIn constructor.
        */
        ViewIn();
        /**
        *ViewIn destructor.
        */
        virtual ~ViewIn(){}
        /**
        *Choose the player that will be checked for cards.
        *@return The choice of player to do somethng to.
        *@param The number of players currently playing.
        *@param The players number.
        */
        virtual int choosePlayer(int,int);
        /**
        *Choose the Card number that will be checked against a player.
        *@return The players choice of Card.
        *@param The size of the hand.
        */
        virtual int chooseCard(int);
        /**
        *Chooses the number of players that will play the game.
        *@param The maximum number of players
        *@return The number of players that will play.
        */
        virtual int chooseNumPlayers(int);
    protected:

    private:
};

#endif // VIEWIN_H

#ifndef VIEWOUT_H
#define VIEWOUT_H
#include <iostream>
#include <string>
#include "Player.h"
#include "Card.h"
#include <vector>
using namespace std;

/**
*Class for the output statements. (cout potion of View)
*/
class ViewOut
{
    public:
        /**
        *Constructor for ViewOut.
        */
        ViewOut();
        /**
        *Destructor for ViewOut.
        */
        virtual ~ViewOut(){}
        /**
        *The welcome message to the game. It's the first message to be displayed when the game starts.
        */
        virtual void welcomeMessage();
        /**
        *Display the hand inputted.
        *@param Vector of Card to be displayed
        */
        virtual void coutDisplayPlayersHand(vector<Card>);
        /**
        *Tell the Player that they had to GoFish.
        *@param bool that is true if the player can go fish and false if the deck is empty.
        */
        virtual void goFish(bool);
        /**
        *Displays which Players' turn it is.
        *@param The Player who's turn it is.
        */
        virtual void displayTurn(Player);
        /**
        *The display message for the end of a turn.
        */
        virtual void endTurn();
        /**
        *Displays the ending message to the game. To be displayed when the game has ended.
        *@param The player number of the winner.
        */
        virtual void endingMessage(int);
        /**
        *Clears the terminal so that the player can't see the other players hand.
        */
        virtual void clearTerminal();

    protected:

    private:
};

#endif // VIEWOUT_H

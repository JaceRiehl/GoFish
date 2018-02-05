#ifndef VIEWOUT_H
#define VIEWOUT_H
#include <iostream>
#include <string>
#include "Player.h"
#include "Card.h"
#include <vector>
using namespace std;

/**
*Class for the output statements. (View Class)
*/
class ViewOut
{
    public:
        /**
        *Constructor for ViewOut
        */
        ViewOut();
        /**
        *Destructor for ViewOut
        */
        ~ViewOut(){}
        /**
        *The welcome message to the game. It's the first message to be displayed when the game starts.
        */
        virtual void welcomeMessage();
        /**
        *Display the hand of the person inputted
        *@param Vector of Card objects
        */
        void coutDisplayPlayersHand(vector<Card>);
        /**
        *Tell the Player that they had to GoFish.
        */
        void goFish();
        /**
        *Displays which Players' turn it is.
        */
        void displayTurn(Player);
        /**
        *Displays the ending message to the game. To be displayed when the game has ended.
        */
        virtual void endingMessage();

    protected:

    private:
};

#endif // VIEWOUT_H

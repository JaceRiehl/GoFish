#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Player.h"
#include "Deck.h"
#include "ViewIn.h"
#include "ViewOut.h"
#include <iostream>
/**
*The 'game' aspect of GoFish, it controls everything that happens in the game.
*/
class Controller
{
    public:
        /**
        *Constructor for Controller
        */
        Controller(){}
        /**
        *Destructor for Controller
        */
        ~Controller(){}
        /**
        *Starts the game, creates players, and cascades events.
        */
        void startGame();
        /**
        *Deals Cards to all Players
        */
        void initalDeal();
        /**
        *Deals a card to the player if they get a 'GoFish'
        */
        void goFishDeal(int);
        /**
        *
        */


    protected:

    private:
        vector<Player> players;
        Deck dealersDeck;
        int numPlayers;
        ViewOut vO;
        ViewIn vI;
};

#endif // CONTROLLER_H

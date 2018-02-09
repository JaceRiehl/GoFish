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
        *Constructor for Controller, contains dependency injection for the tests.
        *@param Deck or MockDeck that will be used to play the game
        *@param The vector of Player or MockPlayer Objects that will be used, always enter the max number of players and choose how many to use in a viewIn function
        *@param The ViewIn or ViewInMock object to be used to gather input
        *@param The ViewOut or ViewOutMock object to be used to display messages.
        */
        Controller(Deck*, vector<Player*>, ViewIn*, ViewOut*);
        /**
        *Destructor for Controller
        */
        ~Controller();
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
        @param int that is the players number
        */
        void goFishDeal(int);
        /**
        *runGame does the loop that calls the appropriate functions to run the game until the game is won.
        */
        void runGame();
        /**
        *Calls a turn
        *@param int that is the players number
        *@return The Player that the current Player fished
        */
        int turn(int);



    protected:

    private:
        /**
        *Checks who has the most matches
        *@return The index of the player who has the most matches.
        */
        int mostMatches();
        /**
        *The players in the game.
        */
        vector<Player*> players;
        /**
        *The deck to be used for the game.
        */
        Deck* dealersDeck;
        /**
        *The number of players
        */
        int numPlayers = 0;
        /**
        *The total number of matches
        */
        int numMatches = 0;
        /**
        *The View cout object
        */
        ViewOut* vO;
        /**
        *The View cin object for input
        */
        ViewIn* vI;
};

#endif // CONTROLLER_H

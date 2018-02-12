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
        *Destructor for Controller, it destroys the pointers given by the constructor.
        */
        ~Controller();
        /**
        *Starts the game, creates players, and sets up the game.
        */
        void startGame();
        /**
        *Deals Cards to all Players. It deals 5 cards per player if there are 4-5 players and 7 if there are 2-3 players. 
        */
        void initalDeal();
        /**
        *Deals a card to the player if they get a 'GoFish' (the player they fished didn't have the card).
        @param int that is the index of the player in the players vector
        */
        void goFishDeal(int);
        /**
        *runGame does the loop that calls the appropriate functions to run the game until the game is won.
        */
        void runGame();
        /**
        *Calls a turn
        *@param int that is the players number.
        *@return The index of the Player in the players vector taking a turn.
        */
        int turn(int);
        /**
        *Checks who has the most matches of the players in the Player vector.
        *@return The index of the player who has the most matches.
        */
        int mostMatches();


    protected:

    private:

        /**
        *The players in the game.
        */
        vector<Player*> players;
        /**
        *The deck to be used for the game.
        */
        Deck* dealersDeck;
        /**
        *The number of players to be used.
        */
        int numPlayers = 0;
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

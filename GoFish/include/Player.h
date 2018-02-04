#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
class Player
{
    public:
        /**
        *Constructor for Player
        *@param the players number
        */
        Player(int pN);
        /**
        *Destructor for Player
        */
        ~Player(){}
        /**
        *Getter for the players number
        */
        int getPlayerNumber();
        /**
        *Add a card to the players hand
        *@param Card(s) to add
        */
        void addToHand(vector<Card> c);
        /**
        *Take one or more of the same card Face from the players hand
        *@param Card to take
        *@return The matching cards
        */
        Card takeFromHand(Card);
        /**
        *Check if there is any matching pairs in the players hand
        *@return bool
        */
        bool checkMatchingPairs();
        /**
        *Get players hand
        *@return vector<Card> hand
        */
        vector<Card> getHand();
        /**
        *Sorting hand helper function.
        */
        void sortHand();


    protected:

    private:
        /**
        *The players number.
        */
        int playerNumber;
        /**
        *The number of matching pairs the player has gained.
        */
        int matchingPairs = 0;
        /**
        *The players current hand.
        */
        vector<Card> currentHand;
        /**
        *The players current matches.
        */
        vector<Card> matchingPairsInHand;

};

#endif // PLAYER_H

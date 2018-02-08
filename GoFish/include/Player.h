#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "Card.h"
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

/**
*Class to represent a player to the game.
*/
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
        virtual ~Player(){}
        /**
        *Getter for the players number
        *@return The player number
        */
        virtual int getPlayerNumber();
        /**
        *Getter for the number of matches
        *@return The number of matches
        */
        virtual int getNumMatches();
        /**
        *Getter for the number of cards in their hand
        *@return The number of cards in their hand
        */
        virtual int getNumCards();
        /**
        *Add a card to the players hand
        *@param Card(s) to add
        */
        virtual void addToHand(vector<Card> c);
        /**
        *Take one of the same card Face from the players hand
        *@param Card to take
        *@return The matching cards
        */
        virtual Card takeFromHand(Card);
        /**
        *Take one or more of the same card Face from the players hand
        *@param Card to check against
        *@return true if it's in the hand, false otherwise
        */
        virtual bool checkIfInHand(Card);
        /**
        *Check if there is any matching pairs in the players hand
        *@return bool
        */
        virtual bool checkMatchingPairs();
        /**
        *Get players hand
        *@return vector<Card> hand
        */
        virtual vector<Card> getHand();
        /**
        *Get players matched hand
        *@return vector<Card> hand
        */
        virtual vector<Card> getMatchedHand();
        /**
        *Sorting hand helper function.
        */
        virtual void sortHand();


    protected:
        /**
        *The players number.
        */
        int playerNumber;
    private:

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

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
        *Constructor for Player.
        *@param The players number. (this is not static to leave the programmer room to expand)
        */
        explicit Player(int pN);
        /**
        *Destructor for Player.
        */
        virtual ~Player(){}
        /**
        *Getter for the players number.
        *@return The player number.
        */
        virtual int getPlayerNumber();
        /**
        *Getter for the number of matches that the player has.
        *@return The number of matches.
        */
        virtual int getNumMatches();
        /**
        *Getter for the number of cards in the players hand.
        *@return The number of cards in their hand.
        */
        virtual int getNumCards();
        /**
        *Add a vector of cards to the players hand.
        *@param Card(s) to add to their hand.
        */
        virtual void addToHand(vector<Card> c);
        /**
        *Take one of the same face of cards from the players hand.
        *@param Card to take.
        *@return The matching card.
        */
        virtual Card takeFromHand(Card);
        /**
        *Check if one or more of the card faces is in this players hand. 
        *@param Card to check against.
        *@return True if it's in the hand, false otherwise.
        */
        virtual bool checkIfInHand(Card);
        /**
        *Check if there is any matching pairs in the players hand.
        *@return True if there are any matching pairs, false otherwise.
        */
        virtual bool checkMatchingPairs();
        /**
        *Get the players hand.
        *@return The players had in the form of a vector of cards.
        */
        virtual vector<Card> getHand();
        /**
        *Get the players hand of matching cards.
        *@return vector<Card> hand
        */
        virtual vector<Card> getMatchedHand();
        /**
        *Sorting the players hand.
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

#ifndef DECK_H
#define DECK_H
#include <vector>
#include <string>
#include "Card.h"
#include <iostream>
#include <algorithm>
using namespace std;
/**
*Class to represent a deck of a standard 52 card deck.
*/
class Deck
{
    public:
        /**
        *Constructor to build a deck of a standard 52 card deck.
        */
        Deck();
        /**
        *Destructor for Deck.
        */
        virtual ~Deck();
        /**
        *Shuffles the current deck, no matter what the size is.
        */
        virtual void shuffleDeck();
        /**
        *Deals a card from the 'top' of the deck, that card is returned and removed from the deck.
        *@param The Card that is dealt.
        */
        virtual Card dealCard();
        /**
        *Getter for the entire deck for testing purposes
        */
        virtual vector<Card> getDeck();
        /**
        *Getter for the size of the deck.
        */
        virtual int getDeckSize();


    protected:

    private:
        /**
        *The size of the original deck.
        */
        int maxCards = 52;
        /**
        *Current deck of cards.
        */
        vector<Card> deck;
        /**
        *Current index in the deck.
        */
        int indexCurrent = 0;
        /**
        *Faces that cards can have. This is used in the constructor to construct a deck.
        */
        string faces[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King","Ace"};
        /**
        *The values that that cards will have. This is used in the constructor to construct a deck.
        */
        string suits[4] = {"Spades", "Clubs", "Hearts", "Diamonds"};
};

#endif // DECK_H

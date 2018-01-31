#ifndef DECK_H
#define DECK_H
#include <vector>
#include <string>
#include "Card.h"
#include <iostream>
#include <algorithm>
using namespace std;

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
        Shuffles the current deck, no matter what the size is
        */
        void shuffleDeck();
        /**
        *Constructor to build a card.
        *@param The Card that is dealt that is removed from the deck
        */
        Card dealCard();
        /**
        *Prints the deck to console - to be deleted.
        */
        void printDeck();

    protected:

    private:
        /**
        *Current deck size
        */
        int maxCards = 52;
        /**
        *Current deck
        */
        vector<Card> deck;
        /**
        *Index of the deck
        */
        int indexCurrent = 0;
        /**
        *Faces that cards can have - to be deleted
        */
        string faces[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King","Ace"};
        /**
        *Suits that the cards can have - to be deleted
        */
        string suits[4] = {"Spades", "Clubs", "Hearts", "Diamonds"};
};

#endif // DECK_H

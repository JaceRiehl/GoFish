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
        Deck();
        virtual ~Deck();
        void shuffleDeck();
        Card dealCard();
        void printDeck();

    protected:

    private:
        int maxCards = 52;
        vector<Card> deck;
        int indexCurrent = 0;
        string faces[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King","Ace"};
        string suits[4] = {"Spades", "Clubs", "Hearts", "Diamonds"};
};

#endif // DECK_H

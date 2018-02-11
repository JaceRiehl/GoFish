#include "Deck.h"

Deck::Deck()
{
    for(int i = 0; i<maxCards; i++)
    {
        deck.push_back(Card(faces[i%13],suits[i/13]));
    }
}

Deck::~Deck()
{
    //dtor
}

void Deck::shuffleDeck()
{
    srand(time(0));
    random_shuffle(deck.begin(), deck.end());
}


vector<Card> Deck::getDeck()
{
    return deck;
}

Card Deck::dealCard()
{
    int ind = indexCurrent;
    ++indexCurrent;
    if(ind >= 52)
    {
        Card endDeck("NULL","NULL");
        return endDeck;
    }
    return deck[ind];
}

int Deck::getDeckSize()
{
    return maxCards-indexCurrent;
}

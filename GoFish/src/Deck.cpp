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
    random_shuffle(deck.begin(), deck.end());
}

void Deck::printDeck()
{
    for(int i=0;i<maxCards;i++)
    {
        cout << deck[i].getSuit() << " " << deck[i].getFace() << endl;
    }
}

Card Deck::dealCard()
{
    return deck[1];
}

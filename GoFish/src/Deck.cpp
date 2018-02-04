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

void Deck::printDeck()
{
    for(int i=0;i<maxCards;i++)
    {
        cout << deck[i].getSuit() << " " << deck[i].getFace() << endl;
    }
}
vector<Card> Deck::getDeck()
{
    return deck;
}

Card Deck::dealCard()
{
    if(indexCurrent%52 == 0 && indexCurrent != 0)
        shuffleDeck();
    int ind = indexCurrent % maxCards;
    ++indexCurrent;
    return deck[ind];
}

int Deck::getDeckSize()
{
    return deck.size();
}

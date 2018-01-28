#include <iostream>
#include "Card.h"
#include "Deck.h"
using namespace std;

int main()
{
    Deck tempDeck;
    tempDeck.shuffleDeck();
    tempDeck.printDeck();
    Card c = tempDeck.dealCard();
    return 0;
}

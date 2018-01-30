#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "TestCard.h"
#include "gtest/gtest.h"
using namespace std;

int main(int argc, char **argv)
{
    Deck tempDeck;
    tempDeck.shuffleDeck();
    tempDeck.printDeck();
    Card c = tempDeck.dealCard();
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

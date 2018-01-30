#ifndef TESTDECK_H
#define TESTDECK_H
#include "gtest/gtest.h"
#include "../src/Deck.h"
#include "../src/Card.h"
#include <vector>
class TestDeck : public ::testing::Test
{
    public:
        virtual void SetUp()
        {
          deck = new Deck();
          shuffledDeck = new Deck();
          shuffledDeck->shuffleDeck();
          retShufDeck = shuffledDeck->getDeck();
          returnedDeck = deck->getDeck();

        }

        virtual void TearDown()
        {
           delete deck;
           delete shuffledDeck;
        }


    protected:
        Deck* deck;
        vector<Card> returnedDeck;
        Deck* shuffledDeck;
        vector<Card> retShufDeck;
    private:
};

#endif // TESTDECK_H

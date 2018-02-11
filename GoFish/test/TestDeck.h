#ifndef TESTDECK_H
#define TESTDECK_H
#include "gtest/gtest.h"
#include "Deck.h"
#include "Card.h"
#include <vector>
class TestDeck : public ::testing::Test
{
    public:
        /**
        *Google Test Setup function override to build testing objects
        */
        virtual void SetUp()
        {
          deck = new Deck();
          shuffledDeck = new Deck();
          shuffledDeck->shuffleDeck();
          retShufDeck = shuffledDeck->getDeck();
          returnedDeck = deck->getDeck();
          fullDeck = new Deck();
        }

        /**
        *Google Test TearDown function override to delete testing objects
        */
        virtual void TearDown()
        {
           delete deck;
           delete shuffledDeck;
           delete fullDeck;
        }


    protected:
        Deck* deck;
        Deck* fullDeck;
        vector<Card> returnedDeck;
        Deck* shuffledDeck;
        vector<Card> retShufDeck;
    private:
};

#endif // TESTDECK_H

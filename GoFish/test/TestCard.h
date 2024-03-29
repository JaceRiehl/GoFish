#ifndef TESTCARD_H
#define TESTCARD_H
#include "gtest/gtest.h"
#include "Card.h"
class TestCard : public ::testing::Test
{
    public:
        /**
        *Google Test Setup function override to build testing objects
        */
        virtual void SetUp()
        {
            card1 = new Card("2", "Hearts");
            card2 = new Card("6", "Spades");
            card3 = new Card("3", "Clubs");
            card4 = new Card("4", "Diamonds");
            card5 = new Card("King", "Diamonds");
        }
        /**
        *Google Test TearDown function override to delete testing objects
        */
        virtual void TearDown()
        {
            delete card1;
            delete card2;
            delete card3;
            delete card4;
            delete card5;
        }






    protected:
        Card* card1;
        Card* card2;
        Card* card3;
        Card* card4;
        Card* card5;

    private:
};

#endif // TESTCARD_H

#ifndef TESTPLAYER_H
#define TESTPLAYER_H
#include "gtest/gtest.h"
#include "Player.h"
#include <vector>
#include "Card.h"
#include <iostream>
using namespace std;

class TestPlayer : public ::testing::Test
{
    public:
        /**
        *Google Test Setup function override to build testing objects
        */
        virtual void SetUp()
        {
            c1 = new Card("2", "Spades");
            c2 = new Card("2", "Clubs");
            c3 = new Card("2", "Hearts");
            c4 = new Card("2", "Diamonds");
            c5 = new Card("6", "Diamonds");
            c6 = new Card("9", "Diamonds");
            p1 = new Player(1);
            p2 = new Player(2);
            p3 = new Player(3);
            p4 = new Player(4);
            p5 = new Player(5);
            addCard.push_back(*c4);
            addCard.push_back(*c3);
            addCard.push_back(*c2);
            addCard.push_back(*c1);
            sortedCard.push_back(*c1);
            sortedCard.push_back(*c5);
            sortedCard.push_back(*c2);
            sortedCard.push_back(*c6);
            sortedCard.push_back(*c3);
            sortedCard.push_back(*c6);
            sortedCard.push_back(*c4);

        }
        /**
        *Google Test TearDown function override to delete testing objects
        */
        virtual void TearDown()
        {
            delete p1;
            delete p2;
            delete p3;
            delete p4;
            delete p5;
            delete c1;
            delete c2;
            delete c3;
            delete c4;
        }




    protected:
        Player* p1;
        Player* p2;
        Player* p3;
        Player* p4;
        Player* p5;
        Card* c1;
        Card* c2;
        Card* c3;
        Card* c4;
        Card* c5;
        Card* c6;
        vector<Card> currentHand;
        vector<Card> addCard;
        vector<Card> takeCard;
        vector<Card> sortedCard;

    private:
};

#endif // TESTPLAYER_H

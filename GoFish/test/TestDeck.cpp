#include "TestDeck.h"

TEST_F(TestDeck,testConstructor)
{
    ASSERT_TRUE(returnedDeck.size() == 52);
    ASSERT_TRUE(returnedDeck[12].getFace() == "Ace");
    ASSERT_TRUE(returnedDeck[51].getFace() == "Ace");
    ASSERT_TRUE(returnedDeck[0].getFace() == "2");

}

TEST_F(TestDeck,testShuffleDeck)
{
    //not sure how to test this, revisit
    ASSERT_FALSE(retShufDeck[0].getFace() == "2");

}

TEST_F(TestDeck,testDealCard)
{
    Card c1 = deck->dealCard();
    Card c2 = deck->dealCard();
    Card c3 = deck->dealCard();
    ASSERT_TRUE(returnedDeck[0].getFace() == c1.getFace());
    ASSERT_TRUE(returnedDeck[0].getSuit() == c1.getSuit());
    ASSERT_TRUE(returnedDeck[1].getFace() == c2.getFace());
    ASSERT_TRUE(returnedDeck[1].getSuit() == c2.getSuit());
    ASSERT_TRUE(returnedDeck[2].getFace() == c3.getFace());
    ASSERT_TRUE(returnedDeck[2].getSuit() == c3.getSuit());


    ASSERT_EQ(49,deck->getDeckSize());
    ASSERT_TRUE(returnedDeck[3].getFace() == deck->dealCard().getFace());
    ASSERT_TRUE(returnedDeck[3].getSuit() == deck->dealCard().getSuit());

}


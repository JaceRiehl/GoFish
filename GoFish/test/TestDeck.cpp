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
    ASSERT_TRUE(returnedDeck[0].getFace() == deck->dealCard().getFace());
    ASSERT_TRUE(returnedDeck[0].getSuit() == deck->dealCard().getSuit());
    Card c1 = deck->dealCard();
    ASSERT_TRUE(deck->getDeckSize() == 52);
    ASSERT_TRUE(returnedDeck[3].getFace() == deck->dealCard().getFace());
    ASSERT_TRUE(returnedDeck[3].getSuit() == deck->dealCard().getSuit());

}


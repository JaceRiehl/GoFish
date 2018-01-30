#include "TestCard.h"


TEST_F(TestCard,DefaultConstructor)
{
    ASSERT_TRUE(card1->getFace() == "2");
    ASSERT_TRUE(card2->getFace() == "6");
    ASSERT_TRUE(card3->getFace() == "3");
    ASSERT_TRUE(card4->getFace() == "4");
    ASSERT_TRUE(card5->getFace() == "King");
    ASSERT_TRUE(card1->getSuit() == "Hearts");
    ASSERT_TRUE(card2->getSuit() == "Spades");
    ASSERT_TRUE(card3->getSuit() == "Clubs");
    ASSERT_TRUE(card4->getSuit() == "Diamonds");
    ASSERT_TRUE(card5->getSuit() == "Diamonds");

}

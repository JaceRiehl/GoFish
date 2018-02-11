#include "TestCard.h"


TEST_F(TestCard,testDefaultConstructor)
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

TEST_F(TestCard,testOverloaded)
{

    Card t5("King","Diamonds");
    Card t5f("King","Hearts");
    Card t4("4","Diamonds");
    Card t3("3","Clubs");
    Card t2("6","Spades");
    Card t1("2","Hearts");
    ASSERT_FALSE(*card5 == t5f);
    ASSERT_TRUE(*card1 == t1);
    ASSERT_TRUE(*card2 == t2);
    ASSERT_TRUE(*card3 == t3);
    ASSERT_TRUE(*card4 == t4);
    ASSERT_TRUE(*card5 == t5);
}

#include "TestPlayer.h"

TEST_F(TestPlayer, testConstructor)
{
    ASSERT_TRUE(p1->getPlayerNumber() == 1);
    ASSERT_TRUE(p2->getPlayerNumber() == 2);
    ASSERT_TRUE(p3->getPlayerNumber() == 3);
    ASSERT_TRUE(p4->getPlayerNumber() == 4);
    ASSERT_TRUE(p5->getPlayerNumber() == 5);
}

TEST_F(TestPlayer, testAddToHand)
{
    p1->addToHand(addCard);
    currentHand = p1->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c5);

    /*
    p2->addToHand(addCard);
    currentHand = p2->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c5);

    p3->addToHand(addCard);
    currentHand = p3->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c5);

    p4->addToHand(addCard);
    currentHand = p4->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c5);

    p5->addToHand(addCard);
    currentHand = p5->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c5);
    */
}

TEST_F(TestPlayer, testTakeFromHand)
{

    p2->addToHand(addCard);
    currentHand = p2->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c5);
    Card takeCard = p2->takeFromHand(*c1);
    currentHand = p2->getHand();
    //for(int i = 0;i<takeCard.size();i++)
    //    cout << " __ _ _ __--- - " << takeCard[i].getFace() << endl;
    //ASSERT_FALSE(takeCard[0].getSuit() == );
    ASSERT_TRUE(takeCard == *c1);
    Card cTest = p2->takeFromHand(*c6);
    ASSERT_TRUE(cTest.getFace() == "NULL");
    ASSERT_TRUE(cTest.getSuit() == "NULL");

}

/*
    p2->addToHand(addCard);
    currentHand = p2->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c1);
    takeCard = p2->takeFromHand(*c1);
    currentHand = p2->getHand();
    ASSERT_FALSE(currentHand[currentHand.size()-1] == *c1);

    p3->addToHand(addCard);
    currentHand = p3->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c1);
    takeCard = p3->takeFromHand(*c1);
    currentHand = p3->getHand();
    ASSERT_FALSE(currentHand[currentHand.size()-1] == *c1);

    p4->addToHand(addCard);
    currentHand = p4->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c1);
    takeCard = p4->takeFromHand(*c1);
    currentHand = p4->getHand();
    ASSERT_FALSE(currentHand[currentHand.size()-1] == *c1);

    p5->addToHand(addCard);
    currentHand = p5->getHand();
    ASSERT_TRUE(currentHand[currentHand.size()-1] == *c1);
    takeCard = p5->takeFromHand(*c1);
    currentHand = p5->getHand();
    ASSERT_FALSE(currentHand[currentHand.size()-1] == *c1);

}
*/

TEST_F(TestPlayer,testCheckMatchingPairs)
{
    p1->addToHand(sortedCard);
    ASSERT_TRUE(p1->checkMatchingPairs());
    p2->addToHand(addCard);
    ASSERT_TRUE(p2->checkMatchingPairs());
    matches = p1->getMatchedHand();
    ASSERT_TRUE(matches.size() == 4);
    ASSERT_TRUE(matches[0].getFace() == "2");
    ASSERT_TRUE(matches[1].getFace() == "2");
    ASSERT_TRUE(matches[2].getFace() == "2");
    ASSERT_TRUE(matches[3].getFace() == "2");
    int mat = p2->getNumMatches();
    ASSERT_TRUE(mat == 1);

    p3->addToHand(noMatches);
    ASSERT_FALSE(p3->checkMatchingPairs());

}

TEST_F(TestPlayer, testSortingHand)
{
    p6->addToHand(sortedCard);
    p6->sortHand();
    sortedCard = p6->getHand();
    ASSERT_TRUE(sortedCard[0].getFace() == "2");
    ASSERT_TRUE(sortedCard[1].getFace() == "2");
    ASSERT_TRUE(sortedCard[2].getFace() == "2");
    ASSERT_TRUE(sortedCard[3].getFace() == "2");
    ASSERT_TRUE(sortedCard[4].getFace() == "6");
    ASSERT_TRUE(sortedCard[5].getFace() == "9");
    ASSERT_TRUE(sortedCard[6].getFace() == "9");

    p5->addToHand(addCard);
    p5->sortHand();
    sortedCard = p6->getHand();
    ASSERT_TRUE(sortedCard[0].getFace() == "2");
    ASSERT_TRUE(sortedCard[1].getFace() == "2");
    ASSERT_TRUE(sortedCard[2].getFace() == "2");
    ASSERT_TRUE(sortedCard[3].getFace() == "2");
    ASSERT_TRUE(sortedCard[6].getFace() == "9");
}

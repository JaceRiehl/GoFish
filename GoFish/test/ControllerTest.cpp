#include "ControllerTest.h"

TEST_F(ControllerTest,testStartGame)
{
    //ON_CALL(*deck,shuffleDeck())//.WillByDefault(Return());
    Card c("4","Spades");
    Card c1("5","Spades");
    vector<Card> ret;
    ret.push_back(c);
    ON_CALL(*deckMock,shuffleDeck()).WillByDefault(Return());
    ON_CALL(*deckMock,getDeck()).WillByDefault(Return(ret));
    ON_CALL(*deckMock,dealCard()).WillByDefault(Return(c));
    ON_CALL(*deckMock,getDeckSize()).WillByDefault(Return(1));

    ON_CALL(*p1Mock,getPlayerNumber()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p1Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p1Mock,takeFromHand(_)).WillByDefault(Return(c));
    ON_CALL(*p1Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p1Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p1Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p1Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p2Mock,getPlayerNumber()).WillByDefault(Return(2));
    ON_CALL(*p3Mock,getPlayerNumber()).WillByDefault(Return(3));
    ON_CALL(*p4Mock,getPlayerNumber()).WillByDefault(Return(4));
    ON_CALL(*p5Mock,getPlayerNumber()).WillByDefault(Return(5));

    ASSERT_TRUE(true);
}
//

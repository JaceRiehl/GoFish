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
    ON_CALL(*p2Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p2Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p2Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p2Mock,takeFromHand(_)).WillByDefault(Return(c));
    ON_CALL(*p2Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p2Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p2Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p2Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*p3Mock,getPlayerNumber()).WillByDefault(Return(3));
    ON_CALL(*p3Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p3Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p3Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p3Mock,takeFromHand(_)).WillByDefault(Return(c));
    ON_CALL(*p3Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p3Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p3Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p3Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*p4Mock,getPlayerNumber()).WillByDefault(Return(4));
    ON_CALL(*p4Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p4Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p4Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p4Mock,takeFromHand(_)).WillByDefault(Return(c));
    ON_CALL(*p4Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p4Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p4Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p4Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*p5Mock,getPlayerNumber()).WillByDefault(Return(5));
    ON_CALL(*p5Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p5Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p5Mock,takeFromHand(_)).WillByDefault(Return(c));
    ON_CALL(*p5Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p5Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p5Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p5Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*vIMock,choosePlayer(_,_)).WillByDefault(Return(1));
    ON_CALL(*vIMock,chooseNumPlayers()).WillByDefault(Return(5));
    ON_CALL(*vIMock,chooseCard(_)).WillByDefault(Return(1));

    ON_CALL(*vOMock,welcomeMessage()).WillByDefault(Return());
    ON_CALL(*vOMock,coutDisplayPlayersHand(_)).WillByDefault(Return());
    ON_CALL(*vOMock,goFish(_)).WillByDefault(Return());
    ON_CALL(*vOMock,displayTurn(_)).WillByDefault(Return());
    ON_CALL(*vOMock,endTurn()).WillByDefault(Return());
    ON_CALL(*vOMock,clearTerminal()).WillByDefault(Return());
    ON_CALL(*vOMock,endingMessage(_)).WillByDefault(Return());

    EXPECT_CALL(*deckMock,shuffleDeck())
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*vOMock,welcomeMessage())
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*vIMock,chooseNumPlayers())
    .Times(1)
    .WillOnce(Return(5));

    controller->startGame();
    ASSERT_TRUE(true);
}
//

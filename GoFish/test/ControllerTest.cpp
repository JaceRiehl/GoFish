#include "ControllerTest.h"

TEST_F(ControllerTest,testStartGame)
{
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
    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));
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

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(5));

    controller->startGame();
}

TEST_F(ControllerTest,testInitalDeal)
{
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
    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));
    ON_CALL(*vIMock,chooseCard(_)).WillByDefault(Return(1));

    ON_CALL(*vOMock,welcomeMessage()).WillByDefault(Return());
    ON_CALL(*vOMock,coutDisplayPlayersHand(_)).WillByDefault(Return());
    ON_CALL(*vOMock,goFish(_)).WillByDefault(Return());
    ON_CALL(*vOMock,displayTurn(_)).WillByDefault(Return());
    ON_CALL(*vOMock,endTurn()).WillByDefault(Return());
    ON_CALL(*vOMock,clearTerminal()).WillByDefault(Return());
    ON_CALL(*vOMock,endingMessage(_)).WillByDefault(Return());



    EXPECT_CALL(*deckMock,shuffleDeck())
    .Times(2)
    .WillRepeatedly(Return());

    EXPECT_CALL(*vOMock,welcomeMessage())
    .Times(2)
    .WillRepeatedly(Return());

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(5));


    EXPECT_CALL(*deckMock,dealCard())
    .Times(46)
    .WillRepeatedly(Return(c));

    EXPECT_CALL(*p1Mock,addToHand(_))
    .Times(2)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p2Mock,addToHand(_))
    .Times(2)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p3Mock,addToHand(_))
    .Times(2)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p4Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p5Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());

//    EXPECT_CALL(*p1Mock,getHand())
//    .Times(2)
//    .WillRepeatedly(Return(ret));
//    EXPECT_CALL(*p2Mock,getHand())
//    .Times(2)
//    .WillRepeatedly(Return(ret));
//    EXPECT_CALL(*p3Mock,getHand())
//    .Times(2)
//    .WillRepeatedly(Return(ret));
//    EXPECT_CALL(*p4Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p5Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));

//    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
//    .Times(8)
//    .WillRepeatedly(Return());

    controller->startGame();
    controller->initalDeal();

    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(3));

    controller->startGame();
    controller->initalDeal();
}

TEST_F(ControllerTest,testGoFishDeal)
{
    Card c("4","Spades");
    Card c1("5","Spades");
    vector<Card> ret;
    ret.push_back(c);
    ON_CALL(*deckMock,shuffleDeck()).WillByDefault(Return());
    ON_CALL(*deckMock,getDeck()).WillByDefault(Return(ret));
    ON_CALL(*deckMock,dealCard()).WillByDefault(Return(c));
    ON_CALL(*deckMock,getDeckSize()).WillByDefault(Return(0));

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
    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));
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

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(5));


    EXPECT_CALL(*deckMock,dealCard())
    .Times(25)
    .WillRepeatedly(Return(c));

    EXPECT_CALL(*p1Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p2Mock,addToHand(_))
    .Times(2)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p3Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p4Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p5Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());

//    EXPECT_CALL(*p1Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
    EXPECT_CALL(*p2Mock,getHand())
    .Times(1)
    .WillRepeatedly(Return(ret));
//    EXPECT_CALL(*p3Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p4Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p5Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));

//    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
//    .Times(5)
//    .WillRepeatedly(Return());

    EXPECT_CALL(*vOMock,goFish(false))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*deckMock,getDeckSize())
    .Times(1)
    .WillOnce(Return(0));

    controller->startGame();
    controller->initalDeal();
    controller->goFishDeal(1);

    ON_CALL(*deckMock,getDeckSize()).WillByDefault(Return(5));

    EXPECT_CALL(*vOMock,goFish(true))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*deckMock,getDeckSize())
    .Times(1)
    .WillOnce(Return(5));

    EXPECT_CALL(*deckMock,dealCard())
    .Times(1)
    .WillOnce(Return(c));

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(1)
    .WillOnce(Return());

    controller->goFishDeal(1);
}



TEST_F(ControllerTest,testMostMatches)
{
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
    ON_CALL(*p5Mock,getNumMatches()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p5Mock,takeFromHand(_)).WillByDefault(Return(c));
    ON_CALL(*p5Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p5Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p5Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p5Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*vIMock,choosePlayer(_,_)).WillByDefault(Return(1));
    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));
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

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(5));


    EXPECT_CALL(*deckMock,dealCard())
    .Times(25)
    .WillRepeatedly(Return(c));

    EXPECT_CALL(*p1Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p2Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p3Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p4Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p5Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());

//    EXPECT_CALL(*p1Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p2Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p3Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p4Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p5Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));

//    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
//    .Times(5)
//    .WillRepeatedly(Return());

    EXPECT_CALL(*p1Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p2Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p3Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p4Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p5Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(1));

    controller->startGame();
    controller->initalDeal();
    controller->mostMatches();
}

TEST_F(ControllerTest,turnTest)
{
    Card c("4","Hearts");
    Card c1("5","Spades");
    Card cNull("NULL","NULL");
    vector<Card> ret;
    ret.push_back(cNull);
    ret.push_back(cNull);
    ret.push_back(cNull);
    ret.push_back(cNull);
    ret.push_back(cNull);


    ON_CALL(*deckMock,shuffleDeck()).WillByDefault(Return());
    ON_CALL(*deckMock,getDeck()).WillByDefault(Return(ret));
    ON_CALL(*deckMock,dealCard()).WillByDefault(Return(cNull));
    ON_CALL(*deckMock,getDeckSize()).WillByDefault(Return(40));

    ON_CALL(*p1Mock,getPlayerNumber()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p1Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p1Mock,takeFromHand(_)).WillByDefault(Return(cNull));
    ON_CALL(*p1Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p1Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p1Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p1Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p2Mock,getPlayerNumber()).WillByDefault(Return(2));
    ON_CALL(*p2Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p2Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p2Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p2Mock,takeFromHand(_)).WillByDefault(Return(cNull));
    ON_CALL(*p2Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p2Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p2Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p2Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*p3Mock,getPlayerNumber()).WillByDefault(Return(3));
    ON_CALL(*p3Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p3Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p3Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p3Mock,takeFromHand(cNull)).WillByDefault(Return(cNull));
    ON_CALL(*p3Mock,checkIfInHand(cNull)).WillByDefault(Return(true));
    ON_CALL(*p3Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p3Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p3Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p4Mock,getPlayerNumber()).WillByDefault(Return(4));
    ON_CALL(*p4Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p4Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p4Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p4Mock,takeFromHand(cNull)).WillByDefault(Return(cNull));
    ON_CALL(*p4Mock,checkIfInHand(cNull)).WillByDefault(Return(true));
    ON_CALL(*p4Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p4Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p4Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p5Mock,getPlayerNumber()).WillByDefault(Return(5));
    ON_CALL(*p5Mock,getNumMatches()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p5Mock,takeFromHand(cNull)).WillByDefault(Return(cNull));
    ON_CALL(*p5Mock,checkIfInHand(cNull)).WillByDefault(Return(true));
    ON_CALL(*p5Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p5Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p5Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*vIMock,choosePlayer(_,1)).WillByDefault(Return(2));
    ON_CALL(*vIMock,choosePlayer(_,2)).WillByDefault(Return(3));
    ON_CALL(*vIMock,choosePlayer(_,3)).WillByDefault(Return(5));
    ON_CALL(*vIMock,choosePlayer(_,4)).WillByDefault(Return(5));
    ON_CALL(*vIMock,choosePlayer(_,5)).WillByDefault(Return(4));
    ON_CALL(*vIMock,choosePlayer(_,_)).WillByDefault(Return(2));
    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));
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

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(5));


    EXPECT_CALL(*deckMock,dealCard())
    .Times(26)
    .WillRepeatedly(Return(cNull));

    EXPECT_CALL(*p1Mock,addToHand(_))
    .Times(3)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p2Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p3Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*p4Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p5Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());


//    EXPECT_CALL(*p2Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p3Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//
//    EXPECT_CALL(*p4Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p5Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));

    //Game*************************************************************************************************

    EXPECT_CALL(*deckMock,getDeckSize())
    .Times(1)
    .WillOnce(Return(40));

    EXPECT_CALL(*vOMock,goFish(_))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*vOMock,displayTurn(_))
    .Times(2)
    .WillRepeatedly(Return());

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(4)
    .WillRepeatedly(Return());

    EXPECT_CALL(*p1Mock,getHand())
    .Times(6)
    .WillRepeatedly(Return(ret));

    EXPECT_CALL(*vIMock,choosePlayer(_,_))
    .Times(2)
    .WillRepeatedly(Return(2));

    EXPECT_CALL(*vIMock,chooseCard(_))
    .Times(2)
    .WillRepeatedly(Return(1));

    EXPECT_CALL(*p2Mock,checkIfInHand(_))
    .Times(3)
    .WillRepeatedly(Return(true));

    EXPECT_CALL(*p2Mock,takeFromHand(_))
    .Times(3)
    .WillRepeatedly(Return(cNull));

    controller->startGame();
    controller->initalDeal();
    controller->turn(0);

    ON_CALL(*p1Mock,checkIfInHand(_)).WillByDefault(Return(false));
    ON_CALL(*p2Mock,checkIfInHand(_)).WillByDefault(Return(false));
    ON_CALL(*p3Mock,checkIfInHand(_)).WillByDefault(Return(false));
    ON_CALL(*p4Mock,checkIfInHand(_)).WillByDefault(Return(false));
    ON_CALL(*p5Mock,checkIfInHand(_)).WillByDefault(Return(false));

    EXPECT_CALL(*p2Mock,checkIfInHand(_))
    .Times(1)
    .WillRepeatedly(Return(false));

    controller->turn(0);
}

TEST_F(ControllerTest,runGameTest)
{

    Card c("4","Hearts");
    Card c1("5","Spades");
    Card cNull("NULL","NULL");
    vector<Card> ret;
    ret.push_back(cNull);
    ret.push_back(cNull);
    ret.push_back(cNull);
    ret.push_back(cNull);
    ret.push_back(cNull);


    ON_CALL(*deckMock,shuffleDeck()).WillByDefault(Return());
    ON_CALL(*deckMock,getDeck()).WillByDefault(Return(ret));
    ON_CALL(*deckMock,dealCard()).WillByDefault(Return(cNull));
    ON_CALL(*deckMock,getDeckSize()).WillByDefault(Return(40));

    ON_CALL(*p1Mock,getPlayerNumber()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p1Mock,getNumCards()).WillByDefault(Return(0));
    ON_CALL(*p1Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p1Mock,takeFromHand(_)).WillByDefault(Return(cNull));
    ON_CALL(*p1Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p1Mock,checkMatchingPairs()).WillByDefault(Return(false));
    ON_CALL(*p1Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p1Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p2Mock,getPlayerNumber()).WillByDefault(Return(2));
    ON_CALL(*p2Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p2Mock,getNumCards()).WillByDefault(Return(0));
    ON_CALL(*p2Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p2Mock,takeFromHand(_)).WillByDefault(Return(cNull));
    ON_CALL(*p2Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p2Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p2Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p2Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*p3Mock,getPlayerNumber()).WillByDefault(Return(3));
    ON_CALL(*p3Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p3Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p3Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p3Mock,takeFromHand(cNull)).WillByDefault(Return(cNull));
    ON_CALL(*p3Mock,checkIfInHand(cNull)).WillByDefault(Return(true));
    ON_CALL(*p3Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p3Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p3Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p4Mock,getPlayerNumber()).WillByDefault(Return(4));
    ON_CALL(*p4Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p4Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p4Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p4Mock,takeFromHand(cNull)).WillByDefault(Return(cNull));
    ON_CALL(*p4Mock,checkIfInHand(cNull)).WillByDefault(Return(true));
    ON_CALL(*p4Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p4Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p4Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*p5Mock,getPlayerNumber()).WillByDefault(Return(5));
    ON_CALL(*p5Mock,getNumMatches()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p5Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p5Mock,takeFromHand(cNull)).WillByDefault(Return(cNull));
    ON_CALL(*p5Mock,checkIfInHand(cNull)).WillByDefault(Return(true));
    ON_CALL(*p5Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p5Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p5Mock,sortHand()).WillByDefault(Return());


    ON_CALL(*vIMock,choosePlayer(_,1)).WillByDefault(Return(2));
    ON_CALL(*vIMock,choosePlayer(_,2)).WillByDefault(Return(3));
    ON_CALL(*vIMock,choosePlayer(_,3)).WillByDefault(Return(5));
    ON_CALL(*vIMock,choosePlayer(_,4)).WillByDefault(Return(5));
    ON_CALL(*vIMock,choosePlayer(_,5)).WillByDefault(Return(4));
    ON_CALL(*vIMock,choosePlayer(_,_)).WillByDefault(Return(2));
    ON_CALL(*vIMock,chooseNumPlayers(_)).WillByDefault(Return(5));
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

    EXPECT_CALL(*vIMock,chooseNumPlayers(_))
    .Times(1)
    .WillOnce(Return(5));


    EXPECT_CALL(*deckMock,dealCard())
    .Times(25)
    .WillRepeatedly(Return(cNull));

    EXPECT_CALL(*p1Mock,addToHand(_))
    .Times(2)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p2Mock,addToHand(_))
    .Times(2)
    .WillRepeatedly(Return());
    EXPECT_CALL(*p3Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*p4Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p5Mock,addToHand(_))
    .Times(1)
    .WillOnce(Return());


    EXPECT_CALL(*p2Mock,getHand())
    .Times(3)
    .WillRepeatedly(Return(ret));
//    EXPECT_CALL(*p3Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//
//    EXPECT_CALL(*p4Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));
//    EXPECT_CALL(*p5Mock,getHand())
//    .Times(1)
//    .WillOnce(Return(ret));


    //Game*************************************************************************************************

    EXPECT_CALL(*p1Mock, checkMatchingPairs())
    .Times(1)
    .WillOnce(Return(false));

    EXPECT_CALL(*p2Mock, checkMatchingPairs())
    .Times(1)
    .WillOnce(Return(true));

    EXPECT_CALL(*p2Mock, getNumCards())
    .Times(1)
    .WillOnce(Return(0));


    EXPECT_CALL(*vOMock, endingMessage(_))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*p1Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p2Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p3Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p4Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(0));
    EXPECT_CALL(*p5Mock,getNumMatches())
    .Times(1)
    .WillRepeatedly(Return(1));

    EXPECT_CALL(*vOMock,displayTurn(_))
    .Times(2)
    .WillRepeatedly(Return());

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(4)
    .WillRepeatedly(Return());

    EXPECT_CALL(*p1Mock,getHand())
    .Times(3)
    .WillRepeatedly(Return(ret));

    EXPECT_CALL(*vIMock,choosePlayer(_,_))
    .Times(2)
    .WillRepeatedly(Return(2));

    EXPECT_CALL(*vIMock,chooseCard(_))
    .Times(2)
    .WillRepeatedly(Return(1));

    EXPECT_CALL(*p2Mock,checkIfInHand(_))
    .Times(6)
    .WillRepeatedly(Return(true));

    EXPECT_CALL(*p2Mock,takeFromHand(_))
    .Times(6)
    .WillRepeatedly(Return(cNull));

    controller->startGame();
    controller->initalDeal();
    controller->runGame();

}

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
}

TEST_F(ControllerTest,testInitalDeal)
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

    EXPECT_CALL(*p1Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p2Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p3Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p4Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p5Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(5)
    .WillRepeatedly(Return());

    controller->startGame();
    controller->initalDeal();
}

TEST_F(ControllerTest,testGoFishDeal)
{
    //ON_CALL(*deck,shuffleDeck())//.WillByDefault(Return());
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

    EXPECT_CALL(*p1Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p2Mock,getHand())
    .Times(2)
    .WillRepeatedly(Return(ret));
    EXPECT_CALL(*p3Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p4Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p5Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(5)
    .WillRepeatedly(Return());

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

//    EXPECT_CALL(*p2Mock,addToHand(_))
//    .Times(1)
//    .WillOnce(Return());

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(1)
    .WillOnce(Return());

    controller->goFishDeal(1);
}



TEST_F(ControllerTest,testMostMatches)
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
    ON_CALL(*p5Mock,getNumMatches()).WillByDefault(Return(1));
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

    EXPECT_CALL(*p1Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p2Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p3Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p4Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p5Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(5)
    .WillRepeatedly(Return());

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
/*
TEST_F(ControllerTest,runGameAndTurnTest)
{

    //ON_CALL(*deck,shuffleDeck())//.WillByDefault(Return());
    Card c("4","Hearts");
    Card c1("5","Spades");

    Card p1C1("2","Spades");
    Card p1C2("2","Clubs");
    Card p1C3("2","Hearts");
    Card p1C4("3","Clubs");
    Card p1C5("3","Spades");

    Card p2C1("3","Hearts");
    Card p2C2("3","Diamonds");
    Card p2C3("4","Clubs");
    Card p2C4("4","Diamonds");
    Card p2C5("4","Spades");

    Card p3C1("2","Diamonds");
    Card p3C2("5","Clubs");
    Card p3C3("5","Diamonds");
    Card p3C4("5","Spades");
    Card p3C5("6","Diamonds");

    Card p4C1("King","Spades");
    Card p4C2("King","Clubs");
    Card p4C3("Queen","Spades");
    Card p4C4("Queen","Clubs");
    Card p4C5("Jack","Spades");

    Card p5C1("King","Diamonds");
    Card p5C2("Jack","Clubs");
    Card p5C3("Jack","Diamonds");
    Card p5C4("10","Clubs");
    Card p5C5("10","Spades");

    vector<Card> ret;
    vector<Card> p1Hand;
    vector<Card> p2Hand;
    vector<Card> p3Hand;
    vector<Card> p4Hand;
    vector<Card> p5Hand;
    p1Hand.push_back(p1C1);
    p1Hand.push_back(p1C2);
    p1Hand.push_back(p1C3);
    p1Hand.push_back(p1C4);
    p1Hand.push_back(p1C5);

    p2Hand.push_back(p2C1);
    p2Hand.push_back(p2C2);
    p2Hand.push_back(p2C3);
    p2Hand.push_back(p2C4);
    p2Hand.push_back(p2C5);

    p3Hand.push_back(p3C1);
    p3Hand.push_back(p3C2);
    p3Hand.push_back(p3C3);
    p3Hand.push_back(p3C4);
    p3Hand.push_back(p3C5);


    p4Hand.push_back(p4C1);
    p4Hand.push_back(p4C2);
    p4Hand.push_back(p4C3);
    p4Hand.push_back(p4C4);
    p4Hand.push_back(p4C5);

    p5Hand.push_back(p5C1);
    p5Hand.push_back(p5C2);
    p5Hand.push_back(p5C3);
    p5Hand.push_back(p5C4);
    p5Hand.push_back(p5C5);

    ret.push_back(c);

    vector<Card> takeFromP2_2;
    vector<Card> takeFromP2_3;
    vector<Card> takeFromP3_1;

    takeFromP2_2.push_back(p2C1);
    takeFromP2_2.push_back(p2C2);
    takeFromP2_3.push_back(p2C3);
    takeFromP2_3.push_back(p2C4);
    takeFromP2_3.push_back(p2C5);
    takeFromP3_1.push_back(p3C1);

    ON_CALL(*deckMock,shuffleDeck()).WillByDefault(Return());
    ON_CALL(*deckMock,getDeck()).WillByDefault(Return(ret));
    ON_CALL(*deckMock,dealCard()).WillByDefault(Return(Card("NULL","NULL")));
    ON_CALL(*deckMock,getDeckSize()).WillByDefault(Return(1));

    ON_CALL(*p1Mock,getPlayerNumber()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p1Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p1Mock,addToHand(takeFromP2_2)).WillByDefault(Return());
    ON_CALL(*p1Mock,addToHand(takeFromP3_1)).WillByDefault(Return());
    ON_CALL(*p1Mock,addToHand(takeFromP2_3)).WillByDefault(Return());
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
    ON_CALL(*p2Mock,takeFromHand(p2C1)).WillByDefault(Return(p2C1));
    ON_CALL(*p2Mock,takeFromHand(p2C2)).WillByDefault(Return(p2C2));
    ON_CALL(*p2Mock,takeFromHand(p2C3)).WillByDefault(Return(p2C3));
    ON_CALL(*p2Mock,takeFromHand(p2C4)).WillByDefault(Return(p2C4));
    ON_CALL(*p2Mock,takeFromHand(p2C5)).WillByDefault(Return(p2C5));
    ON_CALL(*p2Mock,checkIfInHand(_)).WillByDefault(Return(true));
    ON_CALL(*p2Mock,checkMatchingPairs()).WillByDefault(Return(true));
    ON_CALL(*p2Mock,getHand()).WillByDefault(Return(ret));
    ON_CALL(*p2Mock,sortHand()).WillByDefault(Return());

    ON_CALL(*p3Mock,getPlayerNumber()).WillByDefault(Return(3));
    ON_CALL(*p3Mock,getNumMatches()).WillByDefault(Return(0));
    ON_CALL(*p3Mock,getNumCards()).WillByDefault(Return(1));
    ON_CALL(*p3Mock,addToHand(_)).WillByDefault(Return());
    ON_CALL(*p3Mock,takeFromHand(p3C1)).WillByDefault(Return(p3C1));
    ON_CALL(*p3Mock,takeFromHand(p3C2)).WillByDefault(Return(p3C2));
    ON_CALL(*p3Mock,takeFromHand(p3C3)).WillByDefault(Return(p3C3));
    ON_CALL(*p3Mock,takeFromHand(p3C4)).WillByDefault(Return(p3C4));
    ON_CALL(*p3Mock,takeFromHand(_)).WillByDefault(Return(Card("NULL","NULL")));
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


    ON_CALL(*vIMock,choosePlayer(_,1)).WillByDefault(Return(2));
    ON_CALL(*vIMock,choosePlayer(_,2)).WillByDefault(Return(2));
    ON_CALL(*vIMock,choosePlayer(_,3)).WillByDefault(Return(5));
    ON_CALL(*vIMock,choosePlayer(_,4)).WillByDefault(Return(5));
    ON_CALL(*vIMock,choosePlayer(_,5)).WillByDefault(Return(4));
    ON_CALL(*vIMock,choosePlayer(_,_)).WillByDefault(Return(3));
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


    EXPECT_CALL(*deckMock,dealCard())
    .Times(25)
    .WillRepeatedly(Return(c));

    EXPECT_CALL(*p1Mock,addToHand(p1Hand))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p2Mock,addToHand(p2Hand))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p3Mock,addToHand(p3Hand))
    .Times(1)
    .WillOnce(Return());

    EXPECT_CALL(*p4Mock,addToHand(p4Hand))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p5Mock,addToHand(p5Hand))
    .Times(1)
    .WillOnce(Return());


    EXPECT_CALL(*p1Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p2Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p3Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));

    EXPECT_CALL(*p4Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));
    EXPECT_CALL(*p5Mock,getHand())
    .Times(1)
    .WillOnce(Return(ret));

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(5)
    .WillOnce(Return());

    EXPECT_CALL(*vOMock,endingMessage(_))
    .Times(1)
    .WillOnce(Return());

    //Game*************************************************************************************************

    EXPECT_CALL(*p1Mock,checkMatchingPairs())
    .Times(3)
    .WillOnce(Return(false))
    .WillOnce(Return(true))
    .WillOnce(Return(true));

    EXPECT_CALL(*vOMock,displayTurn(_))
    .Times(16)
    .WillOnce(Return());

    EXPECT_CALL(*vOMock,coutDisplayPlayersHand(_))
    .Times(16)
    .WillOnce(Return());

    EXPECT_CALL(*p1Mock,getHand())
    .Times(4)
    .WillOnce(Return(ret));

    //EXPECT_CALL(*vIMock,choosePlayer())
    //.Times(16)
    //.WillOnce(Return());

    EXPECT_CALL(*p2Mock,takeFromHand(p2C1))
    .Times(1)
    .WillOnce(Return(p2C1));
    EXPECT_CALL(*p2Mock,takeFromHand(p2C2))
    .Times(1)
    .WillOnce(Return(p2C2));
    EXPECT_CALL(*p2Mock,takeFromHand(p2C3))
    .Times(1)
    .WillOnce(Return(p2C3));
    EXPECT_CALL(*p2Mock,takeFromHand(p2C4))
    .Times(1)
    .WillOnce(Return(p2C4));
    EXPECT_CALL(*p2Mock,takeFromHand(p2C5))
    .Times(1)
    .WillOnce(Return(p2C5));
    EXPECT_CALL(*p3Mock,takeFromHand(p3C1))
    .Times(1)
    .WillOnce(Return(p3C1));
    EXPECT_CALL(*p3Mock,takeFromHand(p3C2))
    .Times(1)
    .WillOnce(Return(p3C2));
    EXPECT_CALL(*p3Mock,takeFromHand(p3C3))
    .Times(1)
    .WillOnce(Return(p3C3));
    EXPECT_CALL(*p3Mock,takeFromHand(p3C4))
    .Times(1)
    .WillOnce(Return(p3C4));



    EXPECT_CALL(*p1Mock,addToHand(takeFromP2_2))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p1Mock,addToHand(takeFromP2_3))
    .Times(1)
    .WillOnce(Return());
    EXPECT_CALL(*p1Mock,addToHand(takeFromP3_1))
    .Times(1)
    .WillOnce(Return());

//    EXPECT_CALL(*p1Mock,checkMatchingPairs())
//    .Times(1)
//    .WillOnce(Return(true));

    controller->startGame();
    controller->initalDeal();
    controller->runGame();
}
*/

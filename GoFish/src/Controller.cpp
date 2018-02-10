#include "Controller.h"

Controller::Controller(Deck* dealer, vector<Player*> play, ViewIn* viewIn, ViewOut* viewOut)
{
    players = play;
    dealersDeck = dealer;
    vI = viewIn;
    vO = viewOut;

}

Controller::~Controller()
{
    delete dealersDeck;
    delete vI;
    delete vO;
}

void Controller::startGame()
{
    dealersDeck->shuffleDeck();
    vO->welcomeMessage();
    numPlayers = vI->chooseNumPlayers();
    //numPlayers = 3;
//    for(int player=0;player<numPlayers;player++)
//    {
//        players.push_back(Player(player+1));
//    }
//    initalDeal();
}

void Controller::initalDeal()
{
    //cout << "Num PlayersL " << numPlayers << endl;
    if(numPlayers <= 0 || numPlayers > 5)
        numPlayers = 5;
    int cardPerPlayer = 7;
    if(numPlayers == 2 || numPlayers == 3)
        cardPerPlayer = 7;
    else if(numPlayers == 4 || numPlayers == 5)
        cardPerPlayer = 5;

    cout << "----------" << numPlayers << endl;

    for(int player=0;player<numPlayers;player++)
    {
        vector<Card> addCard;
        for(int cardsDealt=0;cardsDealt<cardPerPlayer;cardsDealt++)
        {
            Card temp = dealersDeck->dealCard();
            addCard.push_back(temp);
//            cout << dealersDeck.getDeckSize() << endl;
//            cout << "-_----- " << temp.getFace() << " " << temp.getSuit() << endl;

        }
        players[player]->addToHand(addCard);
    }

    /*
    REMOVE AFTER DONE TESTING AND REMOVE FROM TESTS
    */
    for(int i=0;i<numPlayers;i++)
    {
        vector<Card> pr = players[i]->getHand();
        vO->coutDisplayPlayersHand(pr);
    }
//    runGame();
}

void Controller::runGame()
{
    int index = 0;
    while(true)
    {
        //vO.clearTerminal();
        int fishedPlayer = turn(index);
        if(players[index]->checkMatchingPairs())
        {
            numMatches++;
            if(players[index]->getNumCards() == 0 || players[fishedPlayer]->getNumCards() == 0)
            {
                int winner = mostMatches();
                vO->endingMessage(winner);
                break;
            }
        }

        index += 1;
        index = index % numPlayers;
        if(numMatches == 13)
            break;
    }
}

int Controller::turn(int p)
{
    vO->displayTurn(*players[p]);
    vO->coutDisplayPlayersHand(players[p]->getHand());
    int fishPlayer = vI->choosePlayer(numPlayers,p+1);
    vector<Card> hand = players[p]->getHand();
    int cardNum = vI->chooseCard(hand.size());
//    bool canFish = players[fishPlayer-1].checkIfInHand(hand[cardNum-1]);
//    cout << "Player Number : " << players[fishPlayer-1].getPlayerNumber() << " Card: " << hand[cardNum-1].getFace();
//    cout << "Can Fish: " << canFish << endl;
    if(players[fishPlayer-1]->checkIfInHand(hand[cardNum-1]))
    {
        vector<Card> add;
        add.push_back(players[fishPlayer-1]->takeFromHand(hand[cardNum-1]));
        //players[p].addToHand(players[fishPlayer-1].takeFromHand(hand[cardNum-1]);
        if(players[fishPlayer-1]->checkIfInHand(hand[cardNum-1]))
        {
            add.push_back(players[fishPlayer-1]->takeFromHand(hand[cardNum-1]));
            //players[p].addToHand(players[fishPlayer-1].takeFromHand(hand[cardNum-1]));
            if(players[fishPlayer-1]->checkIfInHand(hand[cardNum-1]))
            {
                add.push_back(players[fishPlayer-1]->takeFromHand(hand[cardNum-1]));
                //players[p].addToHand(players[fishPlayer-1].takeFromHand(hand[cardNum-1]);
            }
        }
        players[p]->addToHand(add);
        vO->coutDisplayPlayersHand(players[p]->getHand());
    }
    else
        goFishDeal(p);

    return fishPlayer-1;

}

void Controller::goFishDeal(int p)
{
    if(dealersDeck->getDeckSize() == 0)
    {
        vO->goFish(false);
    }
    else
    {
        vO->goFish(true);
        vector<Card> addToPlayersHand;
        addToPlayersHand.push_back(dealersDeck->dealCard());
        players[p]->addToHand(addToPlayersHand);
        vO->coutDisplayPlayersHand(players[p]->getHand());
    }
}

int Controller::mostMatches()
{
    int indexOfMostMatches;
    int mostMatches = 0;
    for(int i=0;i<numPlayers;i++)
    {
        if(players[i]->getNumMatches() > mostMatches)
            indexOfMostMatches = i;
    }
    return indexOfMostMatches;
}


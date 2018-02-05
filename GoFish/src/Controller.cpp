#include "Controller.h"



void Controller::startGame()
{
    dealersDeck.shuffleDeck();
    vO.welcomeMessage();
    //numPlayers = vI.chooseNumPlayers();
    numPlayers = 3;
    for(int player=0;player<numPlayers;player++)
    {
        players.push_back(Player(player+1));
    }
    this->initalDeal();
}

void Controller::initalDeal()
{
    if(numPlayers > 5 || numPlayers < 0)
        numPlayers = 5;
    cout << "Num PlayersL " << numPlayers << endl;
    int cardPerPlayer = 7;
    if(numPlayers == 2 || numPlayers == 3)
        cardPerPlayer = 7;
    else if(numPlayers == 4 || numPlayers == 5)
        cardPerPlayer = 5;
    for(int cardsDealt=0;cardsDealt<cardPerPlayer;cardsDealt++)
    {
        for(int player=0;player<numPlayers;player++)
        {
            vector<Card> addCard;
            Card temp = dealersDeck.dealCard();
            addCard.push_back(temp);
//            cout << dealersDeck.getDeckSize() << endl;
//            cout << "-_----- " << temp.getFace() << " " << temp.getSuit() << endl;
            players[player].addToHand(addCard);
        }
    }

    for(int i=0;i<players.size();i++)
    {
        vector<Card> pr = players[i].getHand();
        vO.coutDisplayPlayersHand(pr);
    }
    runGame();
}

void Controller::runGame()
{
    int index = 0;
    while(true)
    {
        turn(index);
        index += 1;
        index = index % players.size();
        if(dealersDeck.getDeckSize() == 0)
            break;
        break;
    }
}

void Controller::turn(int p)
{
    vO.displayTurn(players[p]);
    vO.coutDisplayPlayersHand(players[p].getHand());
    int fishPlayer = vI.choosePlayer(players.size(),p+1);
    vector<Card> hand = players[p].getHand();
    int cardNum = vI.chooseCard(hand.size());
//    bool canFish = players[fishPlayer-1].checkIfInHand(hand[cardNum-1]);
//    cout << "Player Number : " << players[fishPlayer-1].getPlayerNumber() << " Card: " << hand[cardNum-1].getFace();
//    cout << "Can Fish: " << canFish << endl;
    if(players[fishPlayer-1].checkIfInHand(hand[cardNum-1]))
    {
        vector<Card> add;
        add.push_back(players[fishPlayer-1].takeFromHand(hand[cardNum-1]));
        //players[p].addToHand(players[fishPlayer-1].takeFromHand(hand[cardNum-1]);
        if(players[fishPlayer-1].checkIfInHand(hand[cardNum-1]))
        {
            add.push_back(players[fishPlayer-1].takeFromHand(hand[cardNum-1]));
            //players[p].addToHand(players[fishPlayer-1].takeFromHand(hand[cardNum-1]));
            if(players[fishPlayer-1].checkIfInHand(hand[cardNum-1]))
            {
                add.push_back(players[fishPlayer-1].takeFromHand(hand[cardNum-1]));
                //players[p].addToHand(players[fishPlayer-1].takeFromHand(hand[cardNum-1]);
            }
        }
        players[p].addToHand(add);
        vO.coutDisplayPlayersHand(players[p].getHand());
    }
    goFishDeal(p);
}

void Controller::goFishDeal(int p)
{
    if(dealersDeck.getDeckSize() == 0)
        vO.goFish(false);
    else
    {
        vO.goFish(true);
        vector<Card> addToPlayersHand;
        addToPlayersHand.push_back(dealersDeck.dealCard());
        players[p].addToHand(addToPlayersHand);
        vO.coutDisplayPlayersHand(players[p].getHand());
    }

}


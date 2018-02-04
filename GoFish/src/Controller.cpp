#include "Controller.h"



void Controller::startGame()
{
    int numPlayers;
    dealersDeck.shuffleDeck();
    vO.welcomeMessage();
    numPlayers = vI.chooseNumPlayers();
    for(int player=0;player<numPlayers;player++)
    {
        players.push_back(Player(player+1));
    }
    initalDeal();
}

void Controller::initalDeal()
{
    int cardPerPlayer = 7;
    if(numPlayers == 2 || numPlayers == 3)
        cardPerPlayer = 7;
    else if(numPlayers == 4 || numPlayers == 5)
        cardPerPlayer = 5;
    cout << "NUMBRT CARDS " << dealersDeck.getDeckSize() << endl;
    for(int cardsDealt=0;cardsDealt<cardPerPlayer;cardsDealt++)
    {
        for(int player=0;player<numPlayers;player++)
        {
            vector<Card> addCard;
            Card temp = dealersDeck.dealCard();
            addCard.push_back(temp);
            cout << dealersDeck.getDeckSize() << endl;
            cout << "-_----- " << temp.getFace() << " " << temp.getSuit() << endl;
            players[player].addToHand(addCard);
        }
    }

    for(int i=0;i<players.size();i++)
    {
        vector<Card> pr = players[i].getHand();
        vO.coutDisplayPlayersHand(pr);
    }
}

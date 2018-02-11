#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "ViewIn.h"
#include "ViewOut.h"
#include "Controller.h"
#include "gtest/gtest.h"
using namespace std;

int main()
{
    Player* p1;
    Player* p2;
    Player* p3;
    Player* p4;
    Player* p5;
    Deck* deck;
    ViewIn* vI;
    ViewOut* vO;

    deck = new Deck();
    vI = new ViewIn();
    vO = new ViewOut();
    p1 = new Player(1);
    p2 = new Player(2);
    p3 = new Player(3);
    p4 = new Player(4);
    p5 = new Player(5);
    vector<Player*> players;
    players.push_back(p1);
    players.push_back(p2);
    players.push_back(p3);
    players.push_back(p4);
    players.push_back(p5);

    Controller cont(deck,players,vI,vO);
    cont.startGame();
    cont.initalDeal();
    cont.runGame();
    delete p1, p2, p3, p4, p5, vO, vI, deck;
    return 0;
}

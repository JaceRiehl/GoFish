#ifndef VIEWOUT_H
#define VIEWOUT_H
#include <iostream>
#include <string>
#include "Player.h"
#include "Card.h"
#include <vector>
using namespace std;
class ViewOut
{
    public:
        ViewOut();
        ~ViewOut(){}
        virtual void welcomeMessage();
        void coutDisplayPlayersHand(vector<Card>);
        void displayTurn(Player);
        virtual void endingMessage();

    protected:

    private:
};

#endif // VIEWOUT_H

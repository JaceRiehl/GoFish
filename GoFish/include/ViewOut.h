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
        void welcomeMessage();
        void coutDisplayPlayersHand(Player);

    protected:

    private:
};

#endif // VIEWOUT_H

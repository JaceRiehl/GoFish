#ifndef VIEWIN_H
#define VIEWIN_H
#include <iostream>
#include <string>
#include "ViewOut.h"
#include <ctype.h>
#include <stdio.h>
using namespace std;
class ViewIn
{
    public:
        ViewIn();
        ~ViewIn();
        int choosePlayer(int,int);
        int chooseNumPlayers();
        bool endTurn();
    protected:

    private:
};

#endif // VIEWIN_H

#ifndef CARD_H
#define CARD_H
#include <string>
#include <ctype.h>
#include <stdio.h>
using namespace std;
class Card
{
    public:
        Card(string f, string s);
        string getSuit();
        string getFace();
        virtual ~Card();

    protected:

    private:
        string suit;
        string face;
        string faces[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King","Ace"};
        string suits[4] = {"Spades", "Clubs", "Hearts", "Diamonds"};
};

#endif // CARD_H

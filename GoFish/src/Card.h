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
};

#endif // CARD_H

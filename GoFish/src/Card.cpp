#include "Card.h"

Card::Card(string f, string s)
{
    for(int i = 0; i < 13; i++)
    {
        if(f == this->faces[i])
        {
            face = f;
        }
        if(s == this->suits[i%4])
        {
            suit = s;
        }
    }
    face = f;
    suit = s;

}

Card::~Card()
{

}

string Card::getFace()
{
    return face;
}

string Card::getSuit()
{
    return suit;
}

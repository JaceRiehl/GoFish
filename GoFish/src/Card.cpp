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

string Card::getSomething()
{
    return "sefew";
}

bool Card::operator==(Card c)
{
    if(this->face== c.getFace() && this->suit == c.getSuit())
        return true;
    else
        return false;
}

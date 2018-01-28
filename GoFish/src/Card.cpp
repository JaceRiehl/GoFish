#include "Card.h"

Card::Card(string f, string s)
{
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

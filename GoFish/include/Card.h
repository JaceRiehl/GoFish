#ifndef CARD_H
#define CARD_H
#include <string>
#include <ctype.h>
#include <stdio.h>
using namespace std;
class Card
{
    public:
        /**
        *Constructor to build a card.
        *@param string face of card
        *@param string suit of card
        */
        Card(string f, string s);
        /**
        *Destructor
        */
        virtual ~Card();
        /**
        *Getter for the suit of the card.
        *@return string suit
        */
        string getSuit();
        /**
        *Getter for the face of the card.
        *@return string face
        */
        string getFace();
        /**
        *Overloading ==
        */
        bool operator==(Card c);



    protected:

    private:
        /**
        *Suit of current Card object.
        */
        string suit;
        /**
        *Face of the current Card object.
        */
        string face;
        /**
        *The faces that the card can be.
        */
        string faces[14] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King","Ace","NULL"};
        /**
        *The suits that the card can be.
        */
        string suits[5] = {"Spades", "Clubs", "Hearts", "Diamonds","NULL"};
};

#endif // CARD_H

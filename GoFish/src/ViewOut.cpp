#include "ViewOut.h"

ViewOut::ViewOut()
{
    //ctor
}

void ViewOut::welcomeMessage()
{
    cout << "Welcome to Go Fish!" << endl;
    cout << "For rules and regulations see: https://www.bicyclecards.com/how-to-play/go-fish/" << endl;

}
void ViewOut::coutDisplayPlayersHand(vector<Card> playersHand)
{
    cout << "Your hand is: " << endl;
    for(int hand=0; hand<playersHand.size();hand++)
    {
        if(hand == playersHand.size()-1)
            cout << playersHand[hand].getFace() << " " << playersHand[hand].getSuit() << endl;
        else
            cout << playersHand[hand].getFace() << " " << playersHand[hand].getSuit() << ", ";
    }
}

void ViewOut::goFish()
{
    cout << endl;
    cout << "Go Fish! ";
    cout << endl;
}

void ViewOut::displayTurn(Player p1)
{
    cout << endl;
    cout << "Player " << p1.getPlayerNumber() << "'s turn:" << endl;
    //coutDisplayPlayersHand(p1.getHand());
}

void ViewOut::endingMessage()
{
    cout << "Thanks for playing GoFish";
}

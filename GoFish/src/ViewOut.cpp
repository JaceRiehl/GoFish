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

void ViewOut::goFish(bool canGoFish)
{
    if(canGoFish)
        cout << "Go Fish! " << endl;
    else
        cout << "The deck is empty. " << endl;;

}

void ViewOut::displayTurn(Player p1)
{
    cout << "Player " << p1.getPlayerNumber() << "'s turn:" << endl;
    //coutDisplayPlayersHand(p1.getHand());
}

void ViewOut::endTurn()
{
    cout << "Your turn is ending." << endl;
}

void ViewOut::clearTerminal()
{
    for(int i=0;i<100;i++)
        cout << '\n';
}


void ViewOut::endingMessage(int winner)
{
    cout << "The winner is: Player " << winner << "! "<< endl;
    cout << "Thanks for playing GoFish";
}

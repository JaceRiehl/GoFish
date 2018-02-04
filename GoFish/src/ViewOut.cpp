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
void ViewOut::coutDisplayPlayersHand(Player p1)
{
    vector<Card> c1 = p1.getHand();
    cout << "Your hand is: " << endl;
    for(int hand=0; hand<c1.size();hand++)
    {
        if(hand == c1.size()-1)
            cout << c1[hand].getFace() << " " << c1[hand].getSuit() << endl;
        else
            cout << c1[hand].getFace() << " " << c1[hand].getSuit() << ", ";
    }
}

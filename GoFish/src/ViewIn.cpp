#include "ViewIn.h"

ViewIn::ViewIn()
{
    //ctor
}

int ViewIn::choosePlayer(int numPlayers, int playerNum)
{
    cout << "Player Number: " << playerNum << endl;
    int playerChoice;
    cout << "Which Player do you want to fish: (1-" << numPlayers << ") ";
    cin >> playerChoice;
    cout << endl;
    while(playerChoice <= 0 || playerChoice > numPlayers || playerChoice == playerNum)
    {
        cout << "Enter a valid choice: ";
        cin >> playerChoice;
        cout << endl;
    }
    return playerChoice;
}

int ViewIn::chooseNumPlayers()
{
    int numPlayers;
    cout << "How many players do you want to add? ";
    cin >> numPlayers;
    cout << endl;
    while(numPlayers <= 1 || numPlayers > 5)
    {
        cout << "Enter a valid choice";
        cin >> numPlayers;
        cout << endl;
    }

    return numPlayers;
}

int ViewIn::chooseCard(int maxCard)
{
    int cardNum;
    cout << "Which card number do you fish? (1-" << maxCard << ") ";
    cin >> cardNum;
    cout << endl;
    while(cardNum < 1 || cardNum > maxCard)
    {
        cout << "Enter a valid choice (1-" << maxCard << ") ";
        cin >> cardNum;
        cout << endl;
    }
    return cardNum;
}

bool ViewIn::endTurn()
{
    string strInput;
    char c;
    cout << "Do you want to end your turn? (Y/N): ";
    cin >> strInput;
    c = strInput[0];
    putchar(toupper(c));
    while(c != 'Y' || c != 'N')
    {
        cin >> strInput;
        c = strInput[0];
        putchar(toupper(c));
    }
    if(c == 'Y')
        return true;
    else
        return false;
}



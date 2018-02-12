#include "ViewIn.h"

ViewIn::ViewIn()
{
    //ctor
}

int ViewIn::choosePlayer(int numPlayers, int playerNum)
{
    char playerChoice;
    int choice;
    cout << "Which Player do you want to fish: (1-" << numPlayers << ") ";
    while(cin >> playerChoice)
    {
        choice = playerChoice - '0';
        if(choice > 0 && choice <= numPlayers && choice != playerNum)
            break;
        cin.ignore(10000, '\n');
        cout << "Enter a valid choice (1-" << numPlayers << "): ";
    }
    return choice;
}

int ViewIn::chooseNumPlayers(int maxPlayers)
{
    int players;
    char numPlayers = 0;
    int test = 0;
    cout << "How many players do you want to add (2-" << maxPlayers << ")? ";
    while(cin >> numPlayers)
    {
        players = numPlayers - '0';
        if(players >= 2 && players <= maxPlayers)
            break;
        cin.ignore(10000, '\n');
        cout << "Enter a valid input (2-5): ";
    }

    return players;
}

int ViewIn::chooseCard(int maxCard)
{
    int card;
    char cardNum;
    cout << "Which card number do you fish? (1-" << maxCard << ") ";
    //cin >> cardNum;
    //cout << endl;
    while(cin >> cardNum)
    {
        card = cardNum - '0';
        if(card >= 1 && card <= maxCard)
            break;
        cin.ignore(10000, '\n');
        cout << "Enter a valid input (1-" << maxCard << ") ";
    }
    return card;
}
//
//bool ViewIn::endTurn()
//{
//    string strInput;
//    char c;
//    cout << "Do you want to end your turn? (Y/N): ";
//    cin >> strInput;
//    c = strInput[0];
//    putchar(toupper(c));
//    while(c != 'Y' || c != 'N')
//    {
//        cin >> strInput;
//        c = strInput[0];
//        putchar(toupper(c));
//    }
//    if(c == 'Y')
//        return true;
//    else
//        return false;
//}



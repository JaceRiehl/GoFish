#ifndef CONTROLLERTEST_H
#define CONTROLLERTEST_H
#include "Controller.h"
#include "DeckMock.h"
#include "PlayerMock.h"
#include "ViewInMock.h"
#include "ViewOutMock.h"
#include "Player.h"
#include "Deck.h"
#include "ViewIn.h"
#include "ViewOut.h"
#include "Card.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
using namespace std;


class ControllerTest : public ::testing::Test
{
    public:
        /**
        *Google Test Setup function override to build testing objects
        */
        virtual void SetUp()
        {
            vI = new ViewInMock();
            vO = new ViewOutMock();
            p1 = new PlayerMock(1);
            players.push_back(p1);
            players.push_back(p1);
            players.push_back(p1);
            players.push_back(p1);
            players.push_back(p1);
            deck = new DeckMock();
            c = new Controller(deck,players,vI,vO);
            vI = dynamic_cast<ViewIn*>(vI);
        }

        /**
        *Google Test TearDown function override to delete testing objects
        */
        virtual void TearDown()
        {
            delete c;
            delete vI;
            delete vO;
            delete deck;
            delete p1;
        }

    protected:
        Controller* c;
        ViewIn* vI;
        ViewOut* vO;
        Deck* deck;
        Player* p1;
        vector<Player*> players;
    private:
};

#endif // CONTROLLERTEST_H

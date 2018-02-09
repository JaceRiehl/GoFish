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
#include <vector>
using namespace std;
using namespace ::testing;

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
            p2 = new PlayerMock(2);
            p3 = new PlayerMock(3);
            p4 = new PlayerMock(4);
            p5 = new PlayerMock(5);
            players.push_back(p1);
            players.push_back(p2);
            players.push_back(p3);
            players.push_back(p4);
            players.push_back(p5);
            deck = new DeckMock();
            controller = new Controller(deck,players,vI,vO);
            vIMock = dynamic_cast<ViewInMock*>(vI);
            vOMock = dynamic_cast<ViewOutMock*>(vO);
            p1Mock = dynamic_cast<PlayerMock*>(p1);
            p2Mock = dynamic_cast<PlayerMock*>(p2);
            p3Mock = dynamic_cast<PlayerMock*>(p3);
            p4Mock = dynamic_cast<PlayerMock*>(p4);
            p5Mock = dynamic_cast<PlayerMock*>(p5);
            deckMock = dynamic_cast<DeckMock*>(deck);
        }

        /**
        *Google Test TearDown function override to delete testing objects
        */
        virtual void TearDown()
        {
            delete controller;
            delete p1Mock;
            delete p2Mock;
            delete p3Mock;
            delete p4Mock;
            delete p5Mock;
        }

    protected:
        Controller* controller;
        ViewIn* vI;
        ViewInMock* vIMock;
        ViewOut* vO;
        ViewOutMock* vOMock;
        Deck* deck;
        DeckMock* deckMock;
        Player* p1;
        Player* p2;
        Player* p3;
        Player* p4;
        Player* p5;
        PlayerMock* p1Mock;
        PlayerMock* p2Mock;
        PlayerMock* p3Mock;
        PlayerMock* p4Mock;
        PlayerMock* p5Mock;
        vector<Player*> players;
    private:
};

#endif // CONTROLLERTEST_H

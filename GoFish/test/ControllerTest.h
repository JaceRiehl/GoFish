#ifndef CONTROLLERTEST_H
#define CONTROLLERTEST_H
#include "Controller.h"
#include "DeckMock.h"
#include "PlayerMock.h"

class ControllerTest
{
    public:
        /**
        *Google Test Setup function override to build testing objects
        */
        virtual void SetUp()
        {

        }

        /**
        *Google Test TearDown function override to delete testing objects
        */
        virtual void TearDown()
        {
            delete c1;
            delete c2;
        }

    protected:
        Controller* c1;
        Controller* c2;
    private:
};

#endif // CONTROLLERTEST_H

#ifndef _MENUS_
#define _MENUS_

#include <iostream>
#include "utils.h"

class Menus{
    public:
        Menus();
        void mainMenu();
        void printGraph();
    private:
        Utils utils;
};

#endif
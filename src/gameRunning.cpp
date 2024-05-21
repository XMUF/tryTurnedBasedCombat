#include "gameRunning.h"
#include "class.h"
#include <iostream>
using namespace std;
using namespace finalCharcter;
int runSinglePlayer()
{
    monster_professionMelee *monster1 = new monster_professionMelee(100,10,0,10);
    cout << monster1->getHP();
    return 0;
}
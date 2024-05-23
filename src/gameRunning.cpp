#include "gameRunning.h"
#include "class.h"
#include <iostream>
#include <list>
#include <windows.h>
using namespace std;
using namespace finalCharcter;
int runSinglePlayer()
{
    player_professionMelee *player = new player_professionMelee("OldFish", 100, 13, 0, 20);
    monster_professionMelee *monster1 = new monster_professionMelee("Monster1", 100, 10, 0, 10);
    monster_professionMelee *monster2 = new monster_professionMelee("Monster2", 100, 10, 0, 15);
    monster_professionMelee *monster3 = new monster_professionMelee("Monster3", 100, 10, 0, 25);

    list<base::basedClass> combatOrder;
    combatOrder.push_back(*monster1);
    combatOrder.push_back(*player);
    combatOrder.push_back(*monster2);
    combatOrder.push_back(*monster3);

    for (auto presentTarget = combatOrder.begin();; presentTarget++)
    {
        combatOrder.sort([](base::basedClass a, base::basedClass b)
                         { return a.getSPEED() > b.getSPEED(); });

        if (presentTarget->isPlayerControl() == true)
        {
            //输出怪物信息
            for (auto i = combatOrder.begin(); i != combatOrder.end(); i++)
            {
                if (i->isPlayerControl() == false)
                {
                    cout << i->getNAME() << "的血量是" << i->getHP() << "\t";
                }
            }

            char choice;
            cin >> choice;
            cout << "\n输入A攻击\t输入D防御\n";
            switch (choice)
            {
            case 'A':
                /* code */
                break;

            case 'D':
                break;

            default:
                cout << "没有此功能";
                return 0;
                break;
            }
        }

        if (presentTarget == combatOrder.end())
        {
            combatOrder.sort([](base::basedClass a, base::basedClass b)
                             { return a.getSPEED() > b.getSPEED(); });
            presentTarget = combatOrder.begin();
        }
        Sleep(500);
    }

    return 0;
}
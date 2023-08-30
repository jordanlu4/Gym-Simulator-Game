#include "Mobs.h"
#include "mobs.txt"
#include <iostream>
using namespace std;

int main()
{   
    Mobs monster1 = Mobs();
    monster1.readBoss("mobs.txt");
    cout << "Mob Name " << monster1.getBosses() << endl;
    cout << "Mob rating " << monster1.getRatings() << endl;

    Mobs monster2 = Mobs();
    monster2.readBoss("mobs.txt");
    cout << "Mob Name " << monster2.getBosses() << endl;
    cout << "Mob rating " << monster2.getRatings() << endl;
        
    Mobs monster3 = Mobs();
    monster3.readBoss("mobs.txt");
    cout << "Mob Name " << monster3.getBosses() << endl;
    cout << "Mob rating " << monster3.getRatings() << endl;



    return 0;
}
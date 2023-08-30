#include "Start.h"
#include "Mobs.h"
#include "Items.h"
#include <iostream>
#include <string>
using namespace std;

Start::Start()
{
    string name = ""; // your name
    cbum_level = 0;   // boss level
    level = 0;        // your level
    // mobs = Mobs();
    // items = Items();
    items = Items();
    mobs = Mobs();
    currentlevel = 1;
}
Start::Start(string in_name)
{
    name = in_name;
}

string Start::getName()
{
    return name;
}

int Start::getLevel()
{
    return level;
}

void Start::printStartMenu() // menu you see at beginning of the game
{
    int selection = 0;
    char char_select;

    cout << "What would you like to do?\n\n";

    while (selection != 7)
    {
        selection = 0;
        cout << "1. Train\n"
             << "2. Challenge someone\n"
             << "3. Buy Gear\n"
             << "4. Buy Cookware\n"
             << "5. Sell Sweets\n"
             << "6. Cook\n"
             << "7. Quit\n"
             << "You Select: ";
        

        cin >> selection;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (selection)
        {
        case 1:
        {
            cout << "Training..." << endl;
            cout << endl;
            level++;
            cbum_level++;
            items.setHunger(-5);
            srand(time(NULL));
            int chance;
            chance = (rand() % 5) + 1; // chance to drop a treasure (1/5)
            if (chance == 4)
            {
                int sweet;
                sweet = (rand() % 4) + 1;
                if (sweet == 1)
                {
                    items.setCake();
                }
                if (sweet == 2)
                {
                    items.setDonut();
                }
                if (sweet == 3)
                {
                    items.setPizza();
                }
                if (sweet == 4)
                {
                    items.setIcecream();
                }
            }

            if (cbum_level == 75) // if the boss reaches level 75, you lose
            {
                cout << "Chris Bumstead has won his 4th Mr. Olympia. Better luck next year." << endl;
                return;
            }
            if (items.getHunger() <= 0) // if your hunger reaches 0, you starve
            {
                cout << "You've starved to death." << endl;
                return;
            }
            printStats();               // print stats everytime
            items.printYourInventory(); // print inventory everytime
        }
        break;
        case 2:
            fightBoss(); // fightboss function
            cout << endl;
            level++;
            cbum_level++;
            items.setHunger(-5); // hunger goes down 5 everytime you fight
            printStats();
            items.printYourInventory();
            if (cbum_level == 75) // if the boss reaches level 50, you lose
            {
                cout << "Chris Bumstead has won his 4th Mr. Olympia. Better luck next year." << endl;
                return;
            }
            if (items.getHunger() <= 0) // if your hunger reaches 0, you starve
            {
                cout << "You've starved to death." << endl;
                return;
            }

            break;
        case 3:

            items.printAccessories(); // print accessories function
            cout << endl;
            cbum_level++;
            printStats();
            items.printYourInventory();
            if (cbum_level == 75) // if the boss reaches level 50, you lose
            {
                cout << "Chris Bumstead has won his 4th Mr. Olympia. Better luck next year." << endl;
                return;
            }
            if (items.getHunger() <= 0) // if your hunger reaches 0, you starve
            {
                cout << "You've starved to death." << endl;
                return;
            }
            break;

        case 4:
            items.printCookware(); // print cookware function
            cout << endl;
            cbum_level++;
            printStats();
            items.printYourInventory();
            if (cbum_level == 75) // if the boss reaches level 50, you lose
            {
                cout << "Chris Bumstead has won his 4th Mr. Olympia. Better luck next year." << endl;
                return;
            }
            if (items.getHunger() <= 0) // if your hunger reaches 0, you starve
            {
                cout << "You've starved to death." << endl;
                return;
            }
            break;

        case 5:
            items.sellSweets(); // sell sweets function
            cout << endl;
            cbum_level++;
            printStats();
            items.printYourInventory();
            if (cbum_level == 75) // if the boss reaches level 50, you lose
            {
                cout << "Chris Bumstead has won his 4th Mr. Olympia. Better luck next year." << endl;
                return;
            }
            if (items.getHunger() <= 0) // if your hunger reaches 0, you starve
            {
                cout << "You've starved to death." << endl;
                return;
            }
            break;
        case 6:
            items.useCookware(); // print cookware function
            cout << endl;
            cbum_level++;
            printStats();
            items.printYourInventory();
            if (cbum_level == 75) // if the boss reaches level 50, you lose
            {
                cout << "Chris Bumstead has won his 4th Mr. Olympia. Better luck next year." << endl;
                return;
            }
            if (items.getHunger() <= 0) // if your hunger reaches 0, you starve
            {
                cout << "You've starved to death." << endl;
                return;
            }
            // cout << "lemuji!!!!!!";
            break;
        case 7:
            cout << "You've quit." << endl;
            return;
            break;

        default:
            cout << "Invalid Selection... Choose from 1-7\n\n";
            break;
        }
    }
}

void Start::printStats() // print the users complete status
{
    {
        cout << "+-------------+" << endl;
        cout << "| Stats       |" << endl;
        cout << "+-------------+" << endl;
        cout << "| Your Level: " << level << endl;
        cout << "| Cbum's Level: " << cbum_level << endl;
        cout << "| Hunger: " << items.getHunger() << endl;
        cout << "| Attack: " << items.getAttack() << endl;
    }
}

void Start::fightBoss()
// fight boss function
{
    bool tf = true;
    string boss_to_fight;
    if ((rand() % 2) + 1 == 2) // to see which out of 2 bosses of the level to fight
    {
        tf = false;
    }
    if (tf == true)
    {
        boss_to_fight = mobs.getBossAt(currentlevel); // sets boss to fight
        // cout << boss_to_fight << endl;
    }
    if (tf == false)
    {
        boss_to_fight = mobs.getBossAt(currentlevel + 1);
        // cout << boss_to_fight << endl;
    }
    int playerstats;
    playerstats = items.getAttack();
    int bossstats;
    bossstats = mobs.getRatingsAt(currentlevel) * 2; // bosses rating times 2 is the rating
    cout << endl;
    cout << "You've challenged, " << boss_to_fight << endl;
    // cout << bosses[1] << endl;
    if (playerstats > bossstats)
    {
        cout << "You Won" << endl;
    }
    if (playerstats < bossstats)
    {
        cout << "You Lost, you lost 30 hunger due to the loss." << endl;
        items.setHunger(-30);
        return;
    }

    if (playerstats == bossstats)
    {
        if (items.getHanes_tank_top() >= 1)
        {
            cout << "You Won" << endl;
        }
        else
        {
            cout << "You Lost, you lost 30 hunger due to the loss." << endl;
            items.setHunger(-30);
            return;
        }
    }
    currentlevel++;

    if (currentlevel == 6)
    {
        cout << "You've won Mr. Olympia! Congragulations!" << endl;
        exit(1);
    }
    // cout << currentlevel << endl;
    // return;
}
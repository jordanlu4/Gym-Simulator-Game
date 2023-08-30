#include "Items.h"
#include "Start.h"
#include <iostream>
#include <string>
using namespace std;
        
    
    Items::Items()
    {
    sarms = 0; // "weapon"
    chalk = 0; // "weapon"
    preworkout = 0; // "weapon"
    headphones = 0; // "weapon"
    smelling_salts = 0; // "weapon"
    straps = 0; // "weapon"
    hanes_tank_top = 0; // armor
    crockpot = 0; // cookware
    pan = 0; // cookware
    airfryer = 0; // cookware
    donut= 0; // treasure
    pizza = 0; // treaure
    ice_cream = 0; // treaure
    cake = 0; //treasure
    // int level = 0;
    // int cbum_level = 0; // final boss level
    cash = 100; // money
    ingredients = 0;
    hunger = 100; // hunger level
    attack = 0;
    }


    
    int Items::getSarms()
    {
        return sarms;

    }
   
    void Items::setSarms(int amount)
     {

        if (sarms == 1)
        {
            cout << "You already have sarms!" << endl;
        }
        else 
        {
            sarms += 1; 
            cout << "Is it Juice-O-Clock already?" << endl;
            cash -= 75;
            attack += 4;
        }
    }
    int Items::getChalk()
    {
        return chalk;
    }
    void Items::setChalk(int amount)
    {
        chalk += amount;
        cout << "Now you wont be losing your grip." << endl;
        cash -= 10;
        attack += 0.5;

    }
    int Items::getPreworkout()
    {
        return preworkout;
    }
    void Items::setPreworkout(int amount)
    {
        preworkout += amount;
        cout << "Megadosing caffine! Yes!" << endl;
        cash -= 20;
        attack += 1;
    }
    int Items::getHeadphones()
    {
        return headphones;
    }
    void Items::setHeadphones(int amount)
    {
        headphones += amount;
        cout << "Hows the bass on those?" << endl;
        cash -= 20;
        attack += 1;
    }
    int Items::getSmelling_salts()
    {
        return smelling_salts;
    }
    void Items::setSmelling_salts(int amount)
    {
        smelling_salts += amount;
        cout << "PR Time?" << endl;
        cash -= 10;
        attack += 0.5;
    }
    int Items::getStraps()
    {
        return straps;
    }
    void Items::setStraps(int amount)
    {
        straps += amount;
        cout << "How much weight are you pulling?" << endl;
        cash -= 20;
        attack += 1;
    }
    int Items::getHanes_tank_top()
    {
        return hanes_tank_top;
    }
    void Items::setHanes_tank_top(int amount)
    {
        hanes_tank_top += amount;
        cout << "Grey, white, or black?" << endl;
        cash -= 20;
    }
    int Items::getCrockpot()
    {
        return crockpot;
    }
    void Items::setCrockpot()
    {
        // crockpot += amount;
        cout << "Oh man, is your mom cooking?" << endl;
        cash -= 10;
    }
    int Items::getPan()
    {
        return pan;
    }
    void Items::setPan()
    {
        // pan += amount;
        cout << "Make sure to use oil." << endl;
        cash -= 20;
    }
    int Items::getAirfryer()
    {
        return airfryer;
    }
    void Items::setAirfryer()
    {
        // airfryer += amount;
        cout << "Oh man, the good stuff is cooking now." << endl;
        cash -= 30;
    }
    int Items::getDonut()
    {
        return donut;
    }
    void Items::setDonut()
    {
        donut += 1;
        cout << "You have found a Donut." << endl;
        cout << "Krispy Kreme cheat day?" << endl;
    }
    void Items::sellDonut()
    {
        donut -= 1;
        cout << "You have sold a donut." << endl;
        cash += 10;
    }
    int Items::getPizza()
    {
        return pizza;
    }
    void Items::setPizza()
    {
        pizza += 1;
        cout << "You have found a Pizza." << endl;
        cout << "Sunday already?" << endl;
    }
    void Items::sellPizza()
    {
        pizza -= 1;
        cout << "You have sold a pizza." << endl;
        cash += 20;
    }
    int Items::getIcecream()
    {
        return ice_cream;
    }
    void Items::setIcecream()
    {
        ice_cream += 1;
        cout << "You have found an Ice Cream." << endl;
        cout << "We all scream for Ice Cream!" << endl;
    }
    void Items::sellIcecream()
    {
        ice_cream -= 1;
        cout << "You have sold an ice cream." << endl;
        cash += 30;
    }
    int Items::getCake()
    {
        return cake;
    }
    void Items::setCake()
    {
        cake += 1;
        cout << "You have found a Cake." << endl;
        cout << "These have protein in them...right?" << endl;
    }
    void Items::sellCake()
    {
        cake -= 1;
        cout << "You have sold a cake." << endl;
        cash += 40;
    }
    int Items::getCash()
    {
        return cash;
    }
    void Items::setCash(int cost)
    {
        cash += cost;
    }
    int Items::getIngredients()
    {
        return ingredients;
    }
    void Items::setIngredients()
    {
        ingredients += 10;
        cash -= 10;
    }
    int Items::getHunger()
    {
        return hunger;
    }
    void Items::setHunger(int cookware)
    {
        hunger += cookware;
    }
    int Items::getAttack()
    {
        return attack;
    }

    void Items::printYourInventory() // print the users complete inventory
    {
        cout << "+-------------+" << endl;
        cout << "| INVENTORY   |" << endl;
        cout << "+-------------+" << endl;
        cout << "| Cash        |" << " " << cash << endl;
        cout << "| Ingredients |" << " " << ingredients << " kg" << endl;
        cout << "| Cookware    |" << " Crockpots: " << crockpot << " | Pans: " << pan << " | Airfryers: " << airfryer << endl;
        cout << "| Accessories |" << " Sarms: " << sarms << " | Chalk: " << chalk << " | Preworkout: " << preworkout << " | Headphones: " << headphones << " | Smelling Salts: " << smelling_salts << " | Straps: " << straps << endl;
        cout << "| Tank top    |" << " " << hanes_tank_top << endl;
        cout << "| Cheat Meals |" << " Donut: " << donut << " | Cake: " << cake << " | Pizzas: " << pizza << " | Ice Cream: " << ice_cream << endl;
    }

void Items::printCookware() // prints cookware menu to buy cookware
{
    int selection = 0;
    char char_select;

    cout << "Remember, you don't diet for the taste, you diet for the reults." << endl;
    cout << "Each type has a different probability of breaking when used, marked with (XX%)." << endl;

    while (selection != 5) // loop to keep this menu up
    {
        cout << "Choose one of the following:\n"
             << "1. (25%) Crockpot [$10]\n"
             << "2. (10%) Pan [$20]\n"
             << "3. (2%) Airfryer [$30]\n"
             << "4. Buy ingredients [$10]\n"
             << "5. Cancel\n"
             << "Your choice, please: ";

        cin >> selection;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (selection)
        {
        case 1:

            if (cash - 10 >= 0) // check if they have enough cash
            {
                cout << "Are you sure you want to buy this? (Y/n): " << endl;
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')// loop to make sure that the input is always y or n
                {
                    cout << "Invalid Entry. Select (Y/n): " << endl;
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    cash -= 10;
                    crockpot += 1;
                    cout << "Item Purchased.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "So be it.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
            }

            if (cash - 10 < 0)
            {
                cout << "\nBro your card got declined.\n\n";
                break;
            }
            break;
        case 2:
            if (cash - 20 >= 0)
            {
                cout << "Are you sure you want to buy this? (Y/n): " << endl;
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "Invalid Entry. Select (Y/n):" << endl;
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    cash -= 20;
                    pan += 1;
                    cout << "Item Purchased.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "So be it.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
            }

            if (cash - 20 < 0)
            {
                cout << "\nBro your card got declined.\n\n";
                break;
            }
            break;
        case 3:
            if (cash - 30 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    cash -= 30;
                    airfryer += 1;
                    cout << "Item Purchased.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "So be it.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
            }

            if (cash - 30 < 0)
            {
                cout << "\nBro your card got declined.\n\n";
                break;
            }
            break;
        case 4:
                if (cash - 10 < 0)
                {
                    cout << "\nBro your card got declined.\n\n";
                    break;
                }
                if (cash - 10 >= 0)
                {
                cout << "\nWould you like to exchange $10 for 10kg ingredients? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    cash -= 10;
                    ingredients += 10;
                    cout << "Item Purchased.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "So be it.\n\n";
                    cout << "Exiting Cookware Menu...\n\n";
                    selection = 5;
                    break;
                }
                }
                break;


        case 5:
            cout << "Exiting Cookware Menu...\n\n";
            selection = 5;
            break;
        default:
            cout << "Invalid Selection... Choose from 1-4\n\n";
            break;
        }
    }
}

void Items::printAccessories() // prints all the accessories you can buy
{
    int selection = 0;
    char char_select;

    cout << "I have a plentiful collection of weapons to choose from, what would you like?\n";

    while (selection != 6) // loop to keep the menu up
    {
        cout << "Choose one of the following:\n"
             << "1. Sarms [$75]\n"
             << "2. Preworkout [$20]\n"
             << "3. Lifting Straps [$20]\n"
             << "4. Smelling Salts [$10]\n"
             << "5. Chalk [$10]\n"
             << "6. Tank Top [$20]\n"
             << "7. Cancel\n"
             << "You Select: ";

        cin >> selection;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (selection)
        {
        case 1:
            if (cash - 75 < 0) // check if you have enough cash
            {
                cout << "\nYour card got declined.\n\n";
                break;
            }
            if (cash - 75 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // cash -= 75;
                    // sarms += 1;
                    // cout << "Item Purchased.\n\n";
                    setSarms(1);
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "You can't stay natty forever!\n\n";
                    break;
                }
            }
            break;
        case 2:
            if (cash - 20 < 0)
            {
                cout << "\nYour card got declined.\n\n";
                break;
            }
            if (cash - 20 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setGold((-1) * (updatePrice(2)));
                    // Inv.setWeapons(selection - 1, 1);
                    // cout << "Item Purchased.\n\n";
                    setPreworkout(1); // uses setter with param 1
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }
            break;
        case 3:

            if (cash - 20 < 0)
            {
                cout << "\nYour card got declined.\n\n";
                break;
            }
            if (cash - 20 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setGold((-1) * (updatePrice(5)));
                    // Inv.setWeapons(selection - 1, 1);
                    // cout << "Item Purchased.\n\n";
                    setStraps(1); // uses setter with param 1
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }
            break;
        case 4:
            if (cash - 10 < 0)
            {
                cout << "\nYour card got declined.\n\n";
                break;
            }
            if (cash - 10 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setGold((-1) * (updatePrice(15)));
                    // Inv.setWeapons(selection - 1, 1);
                    // cout << "Item Purchased.\n\n";
                    setSmelling_salts(1); // uses setter with param 1
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }
            break;
        case 5:
            if (cash - 10 < 0)
            {
                cout << "\nYour card got declined.\n\n";
                break;
            }
            if (cash - 10 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setGold((-1) * (updatePrice(50)));
                    // Inv.setWeapons(selection - 1, 1);
                    // cout << "Item Purchased.\n\n";
                    setChalk(1); // uses setter with param 1
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }
            break;
               case 6:
            if (cash - 20 < 0)
            {
                cout << "\nYour card got declined.\n\n";
                break;
            }
            if (cash - 20 >= 0)
            {
                cout << "\nAre you sure you want to buy this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setGold((-1) * (updatePrice(50)));
                    // Inv.setWeapons(selection - 1, 1);
                    // cout << "Item Purchased.\n\n";
                    setHanes_tank_top(1); // uses setter with param 1
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }
            break; 
        case 7:
            cout << "Exiting Weapon Menu...\n\n";
            selection = 6;
            break;
        default:
            cout << "Invalid Selection... Choose from 1-7\n\n";
            break;
        }
    }
}

void Items::sellSweets() // sell your "treasures" or sweets menu
{
    int selection = 0;
    char char_select;

    cout << "Please select a sweet to sell\n\n";

    while (selection != 6) // loop to keep the menu going
    {
        cout << "1. Donut (D) - 10 gold pieces each\n"
             << "2. Pizza (P) - 20 gold pieces each\n"
             << "3. Ice Cream (I) - 30 gold pieces each\n"
             << "4. Cake (C) - 40 gold pieces each\n"
             << "5. Cancel\n"
             << "You Select: ";

            cin >> selection;
            cin.clear();
             cin.ignore(1000, '\n');

        switch (selection)
        {
        case 1:
            if (donut != 0)
            {
                cout << "\nAre you sure you want to sell this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // donut -= 1;
                    // cout << "Item Sold.\n\n";
                    // cash +;
                    sellDonut(); // sell donut function
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }

            if (donut ==  0)
            {
                cout << "\nYou don't have any donuts to sell.\n\n";
                break;
            }
            break;
        case 2:
            if (pizza != 0)
            {
                cout << "\nAre you sure you want to sell this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setTreasures(selection-1, -1);
                    // cout << "Item Sold.\n\n";
                    // Inv.setGold(20);
                    sellPizza(); // sellpizza function
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }

            if (pizza ==  0)
            {
                cout << "\nYou do not have any Pizza to sell. Sell Denied.\n\n";
                break;
            }
            break;
        case 3:
            if (ice_cream != 0)
            {
                cout << "\nAre you sure you want to sell this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setTreasures(selection-1, -1);
                    // cout << "Item Sold.\n\n";
                    // Inv.setGold(30);
                    sellIcecream(); // sell ice cream function
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }

            if (ice_cream ==  0)
            {
                cout << "\nYou do not have any ice cream to sell. Sell Denied.\n\n";
                break;
            }
            break;
        case 4:
            if (cake != 0)
            {
                cout << "\nAre you sure you want to sell this? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    // Inv.setTreasures(selection-1, -1);
                    // cout << "Item Sold.\n\n";
                    // Inv.setGold(40);
                    sellCake(); // sell cake function
                    selection = 6;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Purchase Aborted.\n\n";
                    break;
                }
            }

            if (cake ==  0)
            {
                cout << "\nYou do not have any cake to sell. Sell Denied.\n\n";
                break;
            }
            break;
        case 5:
            cout << "Exiting Sellings Menu...\n\n";
            selection = 6;
            break;
        default:
            cout << "Invalid Selection... Choose from 1-5\n\n";
            break;
        }
    }
}

void Items::useCookware() // use cookware function
{
    int selection = 0;
    char char_select;

    cout << "Please select a cookware to use.\n\n";

    while (selection != 4) // while the selection isnt 4, keep running this loop
    {
        cout << "1. Crockpot\n"
             << "2. Pan\n"
             << "3. Airfryer\n"
             << "4. Cancel\n"
             << "You Select: ";

            cin >> selection;
            cin.clear();
        cin.ignore(1000, '\n');

        switch (selection)
        {
        case 1:
            if (crockpot != 0)
            {
                cout << "\nAre you sure you want to use a Crockpot? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    hunger += 10;
                    ingredients -= 5;
                    srand(time(NULL)); // random function to see if tool breaks
                    int chance;
                    chance = (rand() % 4) + 1; // 1/4 chance to break
                    if (chance == 4)
                    {
                        crockpot -= 1;
                        cout << "Your crockpot broke :(" << endl;
                    }
                break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Use Aborted.\n\n";
                    break;
                }
            }

            if (crockpot ==  0)
            {
                cout << "\nYou don't have any crockpots to use.\n\n";
                break;
            }
            if (ingredients < 5)
            {
                cout << "\nYou do not have enough ingredients (10kg).\n\n";
                break;
            }
            break;
        case 2:
            if (pan != 0)
            {
                cout << "\nAre you sure you want to use a Pan? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    hunger += 10;
                    ingredients -= 5;
                    srand(time(NULL));
                    int chance;
                    chance = (rand() % 10) + 1; // chance is set to 1/10 (10%)
                    if (chance == 4)
                    {
                        pan -= 1;
                        cout << "Your pan broke :(" << endl;
                        break;
                    }
                    selection = 4;
                    break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Use Aborted.\n\n";
                    break;
                }
            }

            if (pan ==  0)
            {
                cout << "\nYou do not have any crockpots to use.\n\n";
                break;
            }
            if (ingredients < 5)
            {
                cout << "\nYou do not have enough ingredients (10kg).\n\n";
                break;
            }
            break;
        case 3:
            if (airfryer ==  0)
            {
                cout << "\nYou do not have any Airfryers to use.\n\n";
                break;
            }
            if (ingredients < 5)
            {
                cout << "\nYou do not have enough ingredients (10kg).\n\n";
                break;
            }
            if (airfryer != 0)
            {
                cout << "\nAre you sure you want to use an Airfryer? (Y/n):\n";
                cin >> char_select;

                while (char_select != 'Y' && char_select != 'y' && char_select != 'N' && char_select != 'n')
                {
                    cout << "\nInvalid Entry. Select (Y/n):\n";
                    cin >> char_select;
                }

                if (char_select == 'Y' || char_select == 'y')
                {
                    hunger += 10;
                    ingredients -= 5;
                    srand(time(NULL));
                    float chance;
                    chance = (rand() % 50) + 1; // 1/50 chance (2%)
                    if (chance == 4)
                    {
                        airfryer -= 1;
                        cout << "Your airfryer broke :(" << endl;
                    }
                selection = 4;
                break;
                }
                if (char_select == 'N' || char_select == 'n')
                {
                    cout << "Use Aborted.\n\n";
                    break;
                }
            }
            break;
        case 4:
            cout << "Exiting cooking Menu...\n\n";
            selection = 4;
            break;
        default:
            cout << "Invalid Selection... Choose from 1-4\n\n";
            break;
        }
    }
}

#include <iostream>
#include "Mobs.h"
#include "Items.h"
#include "Start.h"
#include <string>
#include <fstream>
using namespace std;

int main()
{
    Start start = Start(); 
    Items items = Items();
    Mobs mobs = Mobs();
    start.mobs.readBoss("mobs.txt"); // reads the mobs file before the game starts
    // mobs.fightBoss();
    start.printStats();  // prints your stats at start of game
    items.printYourInventory(); // prints your inventory at start of game
    start.printStartMenu(); // prints the menu

}
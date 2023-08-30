#ifndef START_H
#define START_H
#include <iostream>
#include <string>
#include "Mobs.h"
#include "Items.h"
using namespace std;
class Start
{
private:
    int cbum_level; // final boss level
    int level;      // your level
    string name;    // your name
    int currentlevel; // your current boss level difficulty


public:
    Mobs mobs;
    Items items;        
    Start();            // will initialize everything
    Start(string name); // asks for the username
    string getName();   // get the username
    int getLevel();     // get level
    void printStartMenu(); // prints the start menu
    void printStats(); // prints your stats
    void fightBoss(); // fights the boss function
};
#endif
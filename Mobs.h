#ifndef MOBS_H
#define MOBS_H
#include <iostream>
#include <string>
#include "Items.h"
using namespace std;
class Mobs
{
    private:
        string bosses[11]; // bosses are stored here
        int ratings[11]; //ratings of bosses are stored here
        string boss; // the boss
        int rating; // the rating
        int num_bosses; // number of bosses
        Items items; 

    public:
        Mobs();
        void setBosses(string boss); //sets the boss
        string getBosses(); // gets the boss
        string getBossAt(int index); // gets the boss are certain index
        void setRatings(int rating); // sets the rating
        int getRatings(); // gets the rating
        int getRatingsAt(int index); // gets the rating at certain index
        void readBoss(string file_name); // reads the mobs file
        // void fightBoss();
       

};
#endif
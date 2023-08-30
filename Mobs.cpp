#include "Mobs.h"
#include "Items.h"
#include "Start.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Mobs::Mobs()
{
    num_bosses = 0;
    // bosses[11];
    // ratings[11];
    boss = "";
    rating = 0;
    items = Items();
}
void Mobs::setBosses(string in_boss)
{
    boss = in_boss;
}
string Mobs::getBosses()
{
    return boss;
}
string Mobs::getBossAt(int index)
{
    return bosses[index];
}
void Mobs::setRatings(int in_rating)
{
    rating = in_rating;
}
int Mobs::getRatings()
{
    return rating;
}
int Mobs::getRatingsAt(int index)
{
    return ratings[index];
}
void Mobs::readBoss(string file_name) // reads mobs.txt file andd parses them into an array
{
    int position = 0;
    string filetxt;
    ifstream file;
    file.open(file_name);
    string parsedBoss;
    int parsedBossRating;
    if (file.fail())
    {
        // cout << "Could not open file." << endl;
        return;
    }
    while (file.eof() == false)
    {

        getline(file, filetxt);

        int position = 0;
        position = filetxt.find(",");
        parsedBoss = (filetxt.substr(0, position));
        bosses[num_bosses] = parsedBoss;
        // cout << parsedBoss << endl;
        filetxt = filetxt.substr(position + 1);
        // cout << filetxt << endl;
        ratings[num_bosses] = stoi(filetxt);

        //    cout << (filetxt.substr(position, 1));
        // parsedBossRating = (filetxt.substr(position, 1));
        // ratings[num_bosses] = parsedBossRating;
        num_bosses++;
    }
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << bosses[i] << endl;
    // }
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << ratings[i] << endl;
    // }
}

// void Mobs::fightBoss()//fight boss function
// {
//     int currentlevel;
//     bool tf = true;
//     string boss_to_fight;
//     if ((rand() % 2) + 1 == 2) // to see which out of 2 bosses of the level to fight
//     {
//         tf = false;
//     }
//     if (tf == true)
//     {
//         boss_to_fight = getBossAt(currentlevel);//sets boss to fight
//         // cout << boss_to_fight << endl;
//     }
//     if (tf == false)
//     {
//         boss_to_fight = getBossAt(currentlevel);
//         // cout << boss_to_fight << endl;

//     }
//     int playerstats;
//     playerstats = items.getAttack();
//     int bossstats;
//     bossstats = getRatingsAt(currentlevel + 1) * 2; // bosses rating times 2 is the rating
//     cout << endl;
//     cout << "You've challenged, " << boss_to_fight << endl;
//     // cout << bosses[1] << endl;
//     if (playerstats > bossstats)
//     {
//         cout << "You Won" << endl;

//     }
//     if (playerstats < bossstats)
//     {
//         cout << "You Lost" << endl;
//         return;
//     }
//     currentlevel++;
//     // return;
// }

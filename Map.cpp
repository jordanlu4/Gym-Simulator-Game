#include "Map.h"
#include <cassert>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Map::Map()
{
    srand(time(0));
    player_position_[0] = 0; // player position (row,col)
    player_position_[1] = 0;
    npc_count_ = 0;  // stores number of misfortunes currently on map
    room_count_ = 0; // stores number of sites currently on map
    for (int r = 0; r < 12; r++)
    {
        /* code */
        for (int c = 0; c < 12; c++)
        {
            /* code */
            map_data_[r][c] = '-';
        }
        cout << endl;
    }
}

void Map::resetMap() 
{
    // delete all npcs and rooms
}

// getters
int Map::getPlayerRow()
{
    return player_position_[0];
}
int Map::getPlayerCol()
{
    return player_position_[1];
}
int Map::getDungeonExitRow()
{
    return dungeon_exit_[0];
}
int Map::getDungeonExitCol()
{
    return dungeon_exit_[1];
}
int Map::getRoomCount()
{
    return room_count_;
}
int Map::getNPCCount()
{
    return npc_count_;
}
int Map::getNumRows()
{
    return num_rows_;
}
int Map::getNumCols()
{
    return num_cols_;
}
bool Map::isOnMap(int row, int col)
{
    // TODO
    return true;
}
bool Map::isNPCLocation(int row, int col)
{
    bool x, y = false;
    for (int r = 0; r < max_npcs_; r++)
    {
        if (npc_positions_[r][0] == row)
        {
            x = true;
        }
    }
    for (int r = 0; r < max_npcs_; r++)
    {
        if (npc_positions_[r][1] == col)
        {
            y = true;
        }
    }
    if (x == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Map::isRoomLocation(int row, int col)
{

    bool x, y = false;
    for (int r = 0; r < max_rooms_; r++)
    {
        if (room_positions_[r][0] == row)
        {
            x = true;
        }
    }
    for (int r = 0; r < max_rooms_; r++)
    {
        if (room_positions_[r][1] == col)
        {
            y = true;
        }
    }
    if (x == y)
    {
        return true;
    }
    return false;
}
bool Map::isExplored(int row, int col)
{
    if (map_data_[row][col] == UNEXPLORED)
    {
        return true;
    }
    return false;
}
bool Map::isFreeSpace(int row, int col)
{
    if (map_data_[row][col] == EXPLORED)
    {
        return true;
    }
    return false;
}
bool Map::isDungeonExit(int row, int col)
{
    if (map_data_[row][col] == EXIT)
    {
        return true;
    }
    return false;
}

// setters
void Map::setPlayerPosition(int row, int col)
{
    player_position_[0] = row;
    player_position_[1] = col;
}
void Map::setDungeonExit(int row, int col)
{
    dungeon_exit_[0] = row;
    dungeon_exit_[1] = col;
}

// other
void Map::displayMap()
{
    // print all map positions

    for (int r = 0; r < 12; r++)
    {

        for (int c = 0; c < 12; c++)
        {
            if (c == player_position_[0] && r == player_position_[1])
            {
                cout << 'X';
            }
            else
            {
                cout << map_data_[c][r];
            }
        }
        cout << endl;
    }
}
bool Map::move(char x)
{
    //(6,6)

    switch (tolower(x))
    {
    case 'w':
        if (player_position_[1] != 0)
        {
            player_position_[1] -= 1;
            return true;
        }
        return false;
        break;
    case 'd':
        if (player_position_[0] != 11)
        {
            player_position_[0] += 1;
            return true;
        }    
        return false;
        break;
    case 'a':
        if (player_position_[0] != 0)
        {
            player_position_[0] -= 1;
            return true;

        }
        return false;

        break;
    case 's':
        if (player_position_[1] != 11)
        {
            player_position_[1] += 1;
            return true;
        }
        return false;
        break;
    default:
        return false;
        break;
    }

    return true;
}
bool Map::addNPC(int row, int col)
{
    if (max_npcs_ <= npc_count_)
    {
        return false;
    }
    if (map_data_[row][col] == '-')
    {
        npc_count_++;
        npc_positions_[npc_count_][0] = row;
        npc_positions_[npc_count_][1] = col;
        // map_data_[row][col] = UNEXPLORED;

        return true;
    }
    return false;
}
bool Map::addRoom(int row, int col)
{
    if (max_rooms_ <= room_count_)
    {
        return false;
    }
    if (map_data_[row][col] == '-')
    {
        room_count_++;
        room_positions_[room_count_][0] = row;
        room_positions_[room_count_][1] = col;
        map_data_[row][col] = ROOM;
        return true;
    }

    return false;
}

bool Map::addExit(int row, int col)
{
    map_data_[row][col] = 'E';
    return true;
}

bool Map::removeNPC(int row, int col)
{
    if (npc_count_ <= 0)
    {
        return false;
    }
    npc_count_--;
    npc_positions_[npc_count_][0] = row;
    npc_positions_[npc_count_][1] = col;
    map_data_[row][col] = EXPLORED;
    return true;
}
bool Map::removeRoom(int row, int col)
{
    if (room_count_ <= 0)
    {
        return false;
    }
    room_count_--;
    room_positions_[room_count_][0] = row;
    room_positions_[room_count_][1] = col;
    map_data_[row][col] = EXPLORED;
    return true;
}
void Map::exploreSpace(int row, int col)
{
    map_data_[row][col] = EXPLORED;
}

void Map::moveActionMenu()
{
    cout << "\n+-----------+\n| Up    - W |\n| Down  - S |\n| Left  - A |\n| Right - D |\n| Back  - Q |\n+-----------+\nYou Select: ";
}

void Map::movementFunction()
{
    displayMap();
    moveActionMenu();
    char x;
    cin >> x;
    tolower(x);
    system("clear");
    while (x != 'q')
    {
        move(x);
        displayMap();
        moveActionMenu();
        cin >> x;
        system("clear");
    }
}

void Map::normalActionMenu()
{
    cout << "+-----------------+\n| Move        - 1 |\n| Investigate - 2 |\n| Fight       - 3 |\n| Cook & Eat  - 4 |\n+-----------------+\nYou Select: ";
}

// void Map::normalActionFunction(int cleared_num, int num_weapons, int num_players, int bonus_amnt, int armr_amnt)
// {
//     bool status = true;
//     int in_val;

//     while (status == true)
//     {
//         normalActionMenu();
//         cin >> in_val;

//         switch (in_val)
//         {
//             case 1:
//                 Map::movementFunction();
//             break;
//             case 2:
//                 fightFunction(cleared_num, num_weapons, num_players, bonus_amnt, armr_amnt);
//             break;
//             case 3:

//             break;
//             case 4:

//             break;
//             default:

//             break;
//         }

        
//     }
// }

// int Map::fightFunction(int cleared_rooms, int weapon_count, int num_party, int weapon_bonus, int armour_amnt)
// {

//     /*
//         Return Dictionary:
//             - 1-4 (someone died in that index)
//             - 10 (win fight)
//             - 11 (lost fight)
//     */

//     ifstream fl_in;
//     string current_name;
//     int monster_num;
//     int loop = 0;
//     string storage_val;
//     int weapons_val = weapon_count;
//     fl_in.open("monsters.txt");
//     int return_val;
//     int selection = 0;
//     int fight_outcome;
//     switch(cleared_rooms)
//     {
//         case 0:
//             monster_num = (1 + (rand()%4));
//             for (int i = 1; i <= 21; i++)
//             {
//                 getline(fl_in, storage_val);

//                 if (monster_num == i)
//                 {
//                     loop = 0;
//                     while (storage_val[loop] != ',')
//                     {
//                         current_name += storage_val[loop];
//                         loop++;
//                     }
//                     break;
//                 }
//             }
//         break;
//         case 1:
//             monster_num = rand() % (9 - 5) + 5;
//             for (int i = 1; i <= 21; i++)
//             {
//                 getline(fl_in, storage_val);

//                 if (monster_num == i)
//                 {
//                     loop = 0;
//                     while (storage_val[loop] != ',')
//                     {
//                         current_name += storage_val[loop];
//                         loop++;
//                     }
//                     break;
//                 }
//             }
//         break;
//         case 2:
//             monster_num = rand() % (13 - 9) + 9;
//             for (int i = 1; i <= 21; i++)
//             {
//                 getline(fl_in, storage_val);

//                 if (monster_num == i)
//                 {
//                     loop = 0;
//                     while (storage_val[loop] != ',')
//                     {
//                         current_name += storage_val[loop];
//                         loop++;
//                     }
//                     break;
//                 }
//             }
//         break;
//         case 3:
//             monster_num = rand() % (17 - 13) + 13;
//             for (int i = 1; i <= 21; i++)
//             {
//                 getline(fl_in, storage_val);

//                 if (monster_num == i)
//                 {
//                     loop = 0;
//                     while (storage_val[loop] != ',')
//                     {
//                         current_name += storage_val[loop];
//                         loop++;
//                     }
//                     break;
//                 }
//             }
//         break;
//         case 4:
//             monster_num = rand() % (21 - 17) + 17;
//             for (int i = 1; i <= 21; i++)
//             {
//                 getline(fl_in, storage_val);

//                 if (monster_num == i)
//                 {
//                     loop = 0;
//                     while (storage_val[loop] != ',')
//                     {
//                         current_name += storage_val[loop];
//                         loop++;
//                     }
//                     break;
//                 }
//             }
//         break;
//         case 5:
//             current_name = "Sorcerer";
//             monster_num = 21;
//         break;
//         default:
//         break;
//     }
//     fl_in.close();

//     cout << "\n\nThere is a " << current_name << " ahead! They look hostile!!!";

//     if (weapons_val == 0)
//     {
//         cout << "\n\nYour party does not have any weapons to fight the " << current_name << ", one member of your party has been captured!!!";
//         return_val = num_party - 1;
//         return return_val;
//     }
//     if (weapons_val > 0)
//     {
//         while (selection != 1 && selection != 2)
//         {
//             cout << "\n\n+---------------+\n| Attack - 1    |\n| Surrender - 2 |\n+---------------+\nYou Select: ";
//             cin >> selection;

//             if (selection != 1 && selection != 2)
//             {
//                 cout << "\n\nInvalid Input. Try Again...";
//             }
//         }

//         if (selection == 1)
//         {
//             fight_outcome = (((1 + rand()%6) * (weapon_bonus + weapon_count)) - (((1 + rand()%6) * (cleared_rooms + 1))/armour_amnt));
//             if (fight_outcome > 0)
//             {
//                 return 10; // win fight
//             }
//             if (fight_outcome <= 0)
//             {
//                 return 11; // lost fight
//             }
//         }
//         if (selection == 2)
//         {
//             cout << "\n\nYour party decided to surrender to the " << current_name << ", one member of your party has been captured!!!";
//             return_val = num_party - 1;
//             return return_val;
//         }
//     }
//     return 0;
// }
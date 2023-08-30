#ifndef ITEMS_H
#define ITEMS_H
#include <iostream>
#include <string>
using namespace std;
class Items
{
    private:
    
    int sarms; // "weapon"
    int chalk; // "weapon"
    int preworkout; // "weapon"
    int headphones; // "weapon"
    int smelling_salts; // "weapon"
    int straps; // "weapon"
    int hanes_tank_top; // armor
    int crockpot; // cookware
    int pan; // cookware
    int airfryer; // cookware
    int donut; // treasure
    int pizza; // treaure
    int ice_cream; // treaure
    int cake; //treasure
    // int level;
    // int cbum_level; // final boss level
    int cash; // money
    int ingredients;
    int hunger; // hunger level
    float attack;
    public:

    Items();
    int getSarms(); //gets sarms
    void setSarms(int amount); // sets sarms
    int getChalk(); //gets chalk
    void setChalk(int amount); //sets chalk
    int getPreworkout(); // gets preworkout
    void setPreworkout(int amount);//sets preworkout
    int getHeadphones(); // gets headphones
    void setHeadphones(int amount);//setheadphones
    int getSmelling_salts(); // get smelling salts
    void setSmelling_salts(int amount); // set smelling salts
    int getStraps(); // gets straps
    void setStraps(int amount); //sets straps
    int getHanes_tank_top(); //gets tank tops
    void setHanes_tank_top(int amount); //sets tank tops
    int getCrockpot(); // get crockpots
    void setCrockpot(); //set crockpots
    int getPan(); //getpan
    void setPan();// sets pans
    int getAirfryer(); //gets airfryers
    void setAirfryer(); //sets airfryers
    int getDonut(); //gets donuts
    void setDonut(); // sets donuts
    void sellDonut(); //sells donuts
    int getPizza(); // gets pizza
    void setPizza(); // sets pizza
    void sellPizza(); // sells pizza
    int getIcecream(); //gets ice cream
    void setIcecream(); // sets ice creams
    void sellIcecream(); // sell ice creams
    int getCake(); // gets cake
    void setCake(); //sets cake
    void sellCake(); // sells cake
    int getCash(); // gets cash
    void setCash(int cost); // sets cash
    int getIngredients(); // gets ingredients
    void setIngredients(); // sets ingredients
    int getHunger(); // gets hunger
    void setHunger(int cookeware); // set hunger
    int getAttack(); // get attack
    void setAttack(); // set attack
    void printYourInventory(); // print inventory
    void printCookware(); //print cookware
    void printAccessories(); // printAccessories
    void earnSweets(); // earn sweets
    void sellSweets(); // sell sweets
    void useCookware(); // usecookware

};
#endif
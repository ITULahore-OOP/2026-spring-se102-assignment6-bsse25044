#include "Warrior.h"

//Constructor 
Warrior :: Warrior(string name,int health,int basePower,int armor)
    :Hero(name,health,basePower){
        armorRating= armor;
}

//Geters
int Warrior:: getArmor() const{
    return armorRating;
}

//Function
int Warrior:: calculateEffectiveHealth() const{
    return getHealth() + (armorRating * 2); 
}
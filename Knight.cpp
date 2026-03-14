#include "Knight.h"

//Constructor
Knight:: Knight(string name,int health,int basePower,int armorRating,int chargeBonus)
    :Warrior(name,health,basePower,armorRating)
    {
        this->chargeBonus=chargeBonus;
}

//Getters
int Knight:: getChargeBonus() const{
    return chargeBonus;
}

//Functions
int Knight:: calculateBurstDamage() const{
    //calling functions and returning after adding it to charge
    return getPower() + chargeBonus;
}
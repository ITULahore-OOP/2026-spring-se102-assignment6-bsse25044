#include "MagicalEntity.h"

//Constructor
MagicalEntity:: MagicalEntity(int manaPool,int spellPower){
    //using this pointer
    this->manaPool=manaPool;
    this->spellPower=spellPower;
}

//Getters
int MagicalEntity:: getMana() const{
    return manaPool;
}

int MagicalEntity:: getSpellPower() const{
    return spellPower;
}
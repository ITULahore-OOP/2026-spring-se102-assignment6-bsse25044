#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

//inheritance
class Warrior: public Hero{
    int armorRating;
    public:
    Warrior(string,int,int,int);
    int getArmor() const;
    int calculateEffectiveHealth() const;
};
#endif
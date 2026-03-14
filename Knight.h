#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"

//multi-levl inheritance
class Knight: public Warrior{
    int chargeBonus;
    public:
    Knight(string,int,int,int,int);
    int getChargeBonus() const;
    int calculateBurstDamage() const;
};

#endif
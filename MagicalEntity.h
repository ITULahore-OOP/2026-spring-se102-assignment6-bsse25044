#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <iostream>
using namespace std;

class MagicalEntity{
    int manaPool;
    int spellPower;
    public:
    MagicalEntity(int,int);
    int getMana() const;
    int getSpellPower() const;
};

#endif
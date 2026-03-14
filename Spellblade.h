#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"

//Multi-level  + multiple inheritance 
class Spellblade: public Warrior,MagicalEntity{
    public:
    Spellblade(string,int,int,int,int,int);
    int calculateHybridDamage() const;
};

#endif
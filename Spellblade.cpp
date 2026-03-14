#include "SpellBlade.h"

//Constructors
Spellblade:: Spellblade(string name,int health,int basePower,int armorRating,int mana,int spellPower)
    :Warrior(name,health,basePower,armorRating),MagicalEntity(mana,spellPower){
        cout<<"Spell Blade Object Created"<<endl;
}

//Function
int Spellblade:: calculateHybridDamage() const{
    return getPower() + getSpellPower();
}

#ifndef HERO_H
#define HERO_H

#include <iostream>
using namespace std;

class Hero{
    string heroName;
    int health;
    int basePower;
    public:
    Hero(string name="nil",int h=0,int p=0);
    ~Hero();
    string getName() const;
    int getHealth() const;
    int getPower() const;
    void setName(string );
    void setHealth(int );
    void setPower(int );
    void takeDamage(int);
    bool operator>( const Hero &) const;
    int operator+(const Hero &) const;
};
#endif
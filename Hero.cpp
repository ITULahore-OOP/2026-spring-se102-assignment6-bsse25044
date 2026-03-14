#include "Hero.h"

//Constructors
Hero:: Hero(string heroName,int health,int basePower)
    :heroName(heroName){
        //check health and power
        if(health < 0){
            health=0;
        }
        else{
            this->health=health;
        }
        if(basePower < 0){
            basePower=0;
        }
        else{
            this->basePower=basePower;
        }
    };  
    
//Destructors
Hero :: ~Hero(){
    cout<<"Object Hero Destroyed"<<endl;
}

//Getters
string Hero:: getName() const{
    return heroName;
}

int Hero:: getHealth() const{
    return health;
}

int Hero:: getPower() const{
    return basePower;
}
//Setters
void Hero:: setName(string n){
    heroName=n;
}
void Hero:: setHealth(int h){
    health=h;
}
void Hero::setPower(int p){
    basePower=p;
}

//Function
void Hero:: takeDamage(int damage){
    health -= damage;
    //check if helath is below 0
    if(health < 0){
        health=0;
    }
}

//operator Overloading
bool Hero:: operator>(const Hero &other) const {
    if(basePower > other.basePower){
        return true;
    }
    else{
        return false;
    }
}

int Hero:: operator+(const Hero &other) const {
    return health + other.health;
}

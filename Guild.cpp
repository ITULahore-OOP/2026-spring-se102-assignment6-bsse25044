#include "Guild.h"

//Constructor
Guild:: Guild(string guildName){
    this->guildName=guildName;
    memberCount=0;
    
}

//Destructor
Guild:: ~Guild(){
    
    cout<<"The guild "<<guildName<<" has been disbanded!\n";
    for(int i=0;i<memberCount;i++){
        roster[i]=nullptr;
    }
    
}

//Functions
void Guild:: displayGuildStats(){
    cout<<"Guild Name: "<<guildName<<endl;
    cout<<"Total Members: "<<memberCount<<"/15"<<endl;
    //calling funstion 
    cout<<"Total Guild Power: "<<calculateTotalGuildPower();
}

int Guild::calculateTotalGuildPower() const{
    //using loop to calculate total base power
    int totalPower=0;
    for(int i=0;i<memberCount;i++){
        totalPower += roster[i]->getPower();
    }
    return totalPower;
}

//Operator Overloading

void Guild:: operator+=(Hero* newHero){
    //check if membercount is < 15 then add 
    if(memberCount < 15){
        roster[memberCount]=newHero;
        memberCount++;
    }
    else{
        cout<<"Guild is at full capacity!"<<endl;
    }
}

ostream& operator<<(ostream& os,const Guild& g){
    os<<"Guild: "<<g.guildName;
    os<<"Members: "<<g.memberCount;
    //use loop to print rosters details
    for(int i=0;i<g.memberCount;i++){
        os<<"- "<<g.roster[i]->getName()<<" (Power: "<<g.roster[i]->getPower()<<")"<<endl;
    }
    return os;
}
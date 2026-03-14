#ifndef GUILD_H
#define GUILD_H
#include "Hero.h"

class Guild{
    string guildName;
    Hero* roster[15];
    int memberCount;
    public:
    Guild(string);
    ~Guild();
    int calculateTotalGuildPower() const;
    void displayGuildStats();
    void operator +=(Hero*);
    //function declare friend so that it can access
    //it's private attributes as non-member function
    friend ostream& operator<<(ostream&,const Guild&);
};

#endif
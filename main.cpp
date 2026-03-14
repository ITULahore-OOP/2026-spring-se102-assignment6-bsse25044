#include "Spellblade.h"
#include "Guild.h"

int main()
{
    int choice=1;
    Guild* guild=nullptr;
    Hero hero[15];
    int numofHero=0;
    do{
        cout<<"-----MENU-----"<<endl;
        cout<<"[1] Guild"<<endl;
        cout<<"[2] Load Guild"<<endl;
        cout<<"[0] Exit"<<endl;
        cout<<"Select : ";
        cin>>choice;
        if(choice==0){
            //check if guild ptr is null or not
            if(guild != nullptr){
                delete guild;
                guild=nullptr;
            } 
            break;
        }
        else{
            switch (choice)
            {
            case 1:
                {
                    //ceck if guild ptr alr stores an address
                    if(guild == nullptr){
                    cout<<"\tNew Guild"<<endl;
                    cout<<"Enter Guild Name : ";
                    string name;
                    cin>>name;
                    guild=new Guild(name);
                    } 
                else{
                    cout<<"Guild already exists"<<endl;
                }
                break;                  
            }    
            case 2:
            {        //check if guild ptr alr stores an address
                if(guild != nullptr){
                    cout<<"[0] Add Hero"<<endl;
                    cout<<"[1] Show Stats"<<endl;
                    cout<<"Select : ";
                    cin>>choice;
                    if(choice==0){
                    string heroName;
                    int basePower,health;
                    cout<<"Enter Hero's name : ";
                    cin>>heroName;
                    cout<<"Enter Base Power : ";
                    cin>>basePower;
                    cout<<"Enter Health : ";
                    cin>>health;
                    hero[numofHero].setName(heroName);
                    hero[numofHero].setHealth(health);
                    hero[numofHero].setPower(basePower);
                    *(guild) += &hero[numofHero];
                    numofHero++;
                }
                else if(choice == 1){
                    guild->displayGuildStats();
                    cout<<endl;
                }
                else{
                    cout<<"Invalid Input"<<endl;
                }
            }
            else{
                cout<<"Guild Not Created"<<endl;
            }
                break;                  
            }    
            default:
            {
                cout<<"Invalid Input"<<endl;
                break;
            }
        }
        cout<<"[1] to see Menu again : ";
        cin>>choice;
        }
    }while(choice==1);
    return 0;
}
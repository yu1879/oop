#include "Pokemon.h"

void Pokemon::Set_Name(string s){
    Name = s;
}
void Pokemon::Heal(){
    Current_Life = Max_Life;
}
void Pokemon::Print(){
    cout << "Name: " << Name << endl;
    cout << "Max Life: " << Max_Life << endl;
    cout << "Current Life: " << Current_Life << endl;
    cout << "Attack: " << Attack << endl;
    cout << "Defense: " << Defense << endl;
}

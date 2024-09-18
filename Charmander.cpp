#include "Charmander.h"

Charmander::Charmander():Pokemon("My_Charmander",50,50,30,20), Species("Charmander"){
}

void Charmander::Skill(){
    cout << "Flame Thrower!!!" << endl;
}

// cout << Charmander
ostream& operator<<(ostream& os, Charmander& p){
    os << "Species: " << p.Species << endl;
    os << "Name: " << p.Name << endl;
    os << "Max Life: " << p.Max_Life << endl;
    os << "Current Life: " << p.Current_Life << endl;
    os << "Attack: " << p.Attack << endl;
    os << "Defense: " << p.Defense << endl;
    return os;
}

void Charmander::Print(){
    Pokemon::Print();
    cout << "Species: " << Species << endl;
}

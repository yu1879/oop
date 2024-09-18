#include "Pokemon.h"

Pokemon::Pokemon(string n, int m, int c, int a, int d):
    Name(n),
    Max_Life(m),
    Current_Life(c),
    Attack(a),
    Defense(d){
}

/*
Pokemon::Pokemon(string n, int m, int c, int a, int d){
    Name = n;
    Max_Life = m;
    Current_Life = c;
    Attack = a;
    Defense = d;
}

Pokemon::Pokemon(){
    Name = "Anonymous";
    Max_Life = 0;
    Current_Life = 0;
    Attack = 0;
    Defense = 0;
}
*/

int Pokemon::operator-(Pokemon& p){
    int life_cost = Attack - p.Defense;
    life_cost = life_cost>0?life_cost:0;
    p.Current_Life -= life_cost;
    p.Current_Life = p.Current_Life>0?p.Current_Life:0;
    cout << Name << " attacks " << p.Name << " for " << life_cost << "HP" << endl;
    return life_cost;
}
/*
// Pokemon1 - Pokemon2
int operator-(Pokemon& p1, Pokemon& p2){
    int life_cost = p1.Attack - p2.Defense;
    life_cost = life_cost>0?life_cost:0;
    p2.Current_Life -= life_cost;
    p2.Current_Life = p2.Current_Life>0?p2.Current_Life:0;
    cout << p1.Name << " attacks " << p2.Name << " for " << life_cost << "HP" << endl;
    return life_cost;
}
*/

// cin >> Pokemon
istream& operator>>(istream& is, Pokemon& p){
    cout << "Name: "  << endl;
    is >> p.Name;
    cout << "Max Life: " << endl;
    is >> p.Max_Life;
    cout << "Current Life: " << endl;
    is >> p.Current_Life;
    cout << "Attack: " << endl;
    is >> p.Attack;
    cout << "Defense: " << endl;
    is >> p.Defense;
    return is;
}

// cout << Pokemon
ostream& operator<<(ostream& os, Pokemon& p){
    os << "Name: " << p.Name << endl;
    os << "Max Life: " << p.Max_Life << endl;
    os << "Current Life: " << p.Current_Life << endl;
    os << "Attack: " << p.Attack << endl;
    os << "Defense: " << p.Defense << endl;
    return os;
}

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


string Pokemon::Get_Name(){
    return Name;
}

int Pokemon::Get_Max_Life(){
    return Max_Life;
}
int Pokemon::Get_Current_Life(){
    return Current_Life;
}
int Pokemon::Get_Attack(){
    return Attack;
}
int Pokemon::Get_Defense(){
    return Defense;
}

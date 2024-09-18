#include <iostream>

using namespace std;

class Pokemon{
    string Name;
    int Max_Life;
    int Current_Life;
    int Attack;
    int Defense;

    void Set_Name(string);
    void Heal();
    void Print();
};

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

int main()
{

    return 0;
}

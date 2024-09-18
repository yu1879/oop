#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

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

#endif // POKEMON_H_INCLUDED

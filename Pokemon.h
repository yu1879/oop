#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED

#include <iostream>

using namespace std;

class Pokemon{
    friend class Player;
    friend istream& operator>>(istream&, Pokemon&);
    friend ostream& operator<<(ostream&, Pokemon&);
    // friend int operator-(Pokemon&, Pokemon&);

    protected:
        string Name;
        int Max_Life;
        int Current_Life;
        int Attack;
        int Defense;

    public:
        void Set_Name(string);
        string Get_Name();
        int Get_Max_Life();
        int Get_Current_Life();
        int Get_Attack();
        int Get_Defense();
        void Heal();
        void Print();
        int operator-(Pokemon&);
        // Pokemon();
        Pokemon(string = "Anonymous", int = 0, int = 0, int = 0, int = 0);
};

#endif // POKEMON_H_INCLUDED

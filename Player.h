#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Pokemon.h"

class Player{
        int Number;
        Pokemon* Data;
    public:
        void Print_Pokemon(Pokemon&);
        Player(int = 6);
        Pokemon& operator[](int);
        // Player[i], get i-th pokemon
        ~Player();
        // Destructor
        Player(const Player&);
        // Copy constructor
        Player& operator=(const Player&);
        // Assignment operator
        Player(Player&&);
        // Move constructor
        Player& operator=(Player&&);
        // Move assignment operator
};

#endif // PLAYER_H_INCLUDED

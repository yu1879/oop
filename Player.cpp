#include <iostream>
#include "Player.h"

using namespace std;


Player::Player(Player&& p){
    // Move constructor
    Number = p.Number;
    Data = p.Data;
    p.Data = nullptr;
}
Player& Player::operator=(Player&& p){
    // Move assignment operator
    if(this == &p)
        return *this;
    delete[] Data;
    Number = p.Number;
    Data = p.Data;
    p.Data = nullptr;
    return *this;
}

Player::~Player(){
    delete [] Data;
}

Player::Player(const Player& p){
    // Copy constructor
    Number = p.Number;
    Data = new Pokemon[Number];
    for(int i=0;i<Number;i++){
        Data[i].Name = p.Data[i].Name;
        Data[i].Max_Life = p.Data[i].Max_Life;
        Data[i].Current_Life = p.Data[i].Current_Life;
        Data[i].Attack = p.Data[i].Attack;
        Data[i].Defense = p.Data[i].Defense;
    }
}

Player& Player::operator=(const Player&p){
    // Assignment operator
    if(this == &p)
        return *this;
    delete [] Data;
    Number = p.Number;
    Data = new Pokemon[Number];
    for(int i=0;i<Number;i++){
        Data[i].Name = p.Data[i].Name;
        Data[i].Max_Life = p.Data[i].Max_Life;
        Data[i].Current_Life = p.Data[i].Current_Life;
        Data[i].Attack = p.Data[i].Attack;
        Data[i].Defense = p.Data[i].Defense;
    }
    return *this;
}

void Player::Print_Pokemon(Pokemon &p){
    cout << "Name: " << p.Name << endl;
    cout << "Max Life: " << p.Max_Life << endl;
    cout << "Current Life: " << p.Current_Life << endl;
    cout << "Attack: " << p.Attack << endl;
    cout << "Defense: " << p.Defense << endl;
}

Player::Player(int counts){
    Number = counts;
    Data = new Pokemon[Number];
}

Pokemon& Player::operator[](int i){
    return *(Data+i);
}

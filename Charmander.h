#ifndef CHARMANDER_H_INCLUDED
#define CHARMANDER_H_INCLUDED

#include "Pokemon.h"

class Charmander: public Pokemon{
    friend ostream& operator<<(ostream&, Charmander&);
    private:
        string Species;
    public:
        Charmander();
        void Skill();
        void Print();
};

#endif // CHARMANDER_H_INCLUDED

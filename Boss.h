#ifndef BOSS_H_INCLUDED
#define BOSS_H_INCLUDED

#include "Worker.h"

class Boss{
        int Number;
        Worker* Data;
    public:
        void Print_Worker(Worker &);
        Boss(int=5);
        Worker& operator[](int);
        // Boss[i], get the i-th worker
        ~Boss();
        // Desturctor
        Boss(const Boss&);
        // Copy constructor
        Boss& operator=(const Boss&);
        // Assignment operator
        Boss(Boss&&);
        // Move constructor
        Boss& operator=(Boss&&);
        // Move assignment operator
};

#endif // BOSS_H_INCLUDED

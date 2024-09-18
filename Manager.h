#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED

#include "Worker.h"

class Manager:public Worker{
    friend ostream& operator<<(ostream&, Manager&);
    private:
        int Performance;
    public:
        int Get_Performance();
        Manager(string = "Anonymous", string = "Manager", int = 50000, int=0);
        void Print();
};

#endif // MANAGER_H_INCLUDED

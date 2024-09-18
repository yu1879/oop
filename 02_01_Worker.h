#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED

#include <iostream>

using namespace std;

class Worker{
    friend class Boss;

    private:
        string Name;
        string Title;
        int Salary;

    public:
        void Set_Name(string);
        void Set_Title(string);
        void Set_Salary(int);
        string Get_Name();
        string Get_Title();
        int Get_Salary();
        void Print();
};

#endif // WORKER_H_INCLUDED

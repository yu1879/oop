#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED

#include <iostream>

using namespace std;

class Worker{
    string Name;
    string Title;
    int Salary;

    void Set_Name(string);
    void Set_Title(string);
    void Set_Salary(int);
    void Print();
};

#endif // WORKER_H_INCLUDED

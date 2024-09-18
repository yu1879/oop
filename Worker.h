#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED

#include <iostream>

using namespace std;

class Worker{
    friend class Boss;
    friend ostream& operator<<(ostream&, Worker&);
    friend istream& operator>>(istream&, Worker&);

    protected:
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
        // Worker();
        Worker(string = "Anonymous", string = "Nil", int = 0);
};

#endif // WORKER_H_INCLUDED

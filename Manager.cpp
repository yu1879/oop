#include "Manager.h"

int Manager::Get_Performance(){
    return Performance;
}

Manager::Manager(string name, string title, int salary, int performance):Worker(name, title, salary), Performance(performance){
}

// cout << Worker
ostream& operator<<(ostream& os, Manager& m){
    os << "Name: " << m.Name << endl;
    os << "Title: " << m.Title << endl;
    os << "Salary: " << m.Salary << endl;
    os << "Performance: " << m.Performance << endl;
    return os;
}

void Manager::Print(){
    Worker::Print();
    cout << "Performance: " << Performance << endl;
}

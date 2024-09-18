#include "Boss.h"
#include "Worker.h"

void Boss::Print_Worker(Worker &w){
    cout << "Name: " << w.Name << endl;
    cout << "Title: " << w.Title << endl;
    cout << "Salary: " << w.Salary << endl;
}

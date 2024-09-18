#include "Boss.h"
#include "Worker.h"


Boss::Boss(Boss&& b){
    // Move constructor
    Number = b.Number;
    Data = b.Data;
    b.Data = nullptr;
}

Boss& Boss::operator=(Boss&& b){
    // Move assignment operator
    if(this == &b)
        return *this;
    delete[] Data;
    Number = b.Number;
    Data = b.Data;
    b.Data = nullptr;
    return *this;
}

Boss::Boss(const Boss& b){
    // Copy constructor
    Number = b.Number;
    Data = new Worker[Number];
    for(int i=0;i<Number;i++){
        Data[i].Name = b.Data[i].Name;
        Data[i].Title = b.Data[i].Title;
        Data[i].Salary = b.Data[i].Salary;
    }
}

Boss& Boss::operator=(const Boss& b){
    // Assignment operator
    if(this == &b)
        return *this;
    delete [] Data;
    Number = b.Number;
    Data = new Worker[Number];
    for(int i=0;i<Number;i++){
        Data[i].Name = b.Data[i].Name;
        Data[i].Title = b.Data[i].Title;
        Data[i].Salary = b.Data[i].Salary;
    }
    return *this;
}

void Boss::Print_Worker(Worker &w){
    cout << "Name: " << w.Name << endl;
    cout << "Title: " << w.Title << endl;
    cout << "Salary: " << w.Salary << endl;
}

Boss::Boss(int counts){
    Number = counts;
    Data = new Worker[Number];
}

Worker& Boss::operator[](int i){
    return *(Data+i);
}

Boss::~Boss(){
    delete [] Data;
}

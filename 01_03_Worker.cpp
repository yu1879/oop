#include <iostream>
#include "Worker.h"

using namespace std;

void Worker::Set_Name(string n){
    Name = n;
}
void Worker::Set_Title(string t){
    Title = t;
}
void Worker::Set_Salary(int s){
    Salary = s;
}
void Worker::Print(){
    cout << "Name: " << Name << endl;
    cout << "Title: " << Title << endl;
    cout << "Salary: " << Salary << endl;
}

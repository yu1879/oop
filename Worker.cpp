#include <iostream>
#include "Worker.h"

using namespace std;


Worker::Worker(string n, string t, int s):Name(n), Title(t), Salary(s){}

/*
Worker::Worker(string n, string t, int s){
    Name = n;
    Title = t;
    Salary = s;
}

Worker::Worker(){
    Name = "Anonymous";
    Title = "Nil";
    Salary = 0;
}
*/

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

string Worker::Get_Name(){
    return Name;
}

string Worker::Get_Title(){
    return Title;
}

int Worker::Get_Salary(){
    return Salary;
}

// cout << Worker
ostream& operator<<(ostream& os, Worker& w){
    os << "Name: " << w.Name << endl;
    os << "Title: " << w.Title << endl;
    os << "Salary: " << w.Salary << endl;
    return os;
}

// cin >> Worker
istream& operator>>(istream& is, Worker& w){
    cout << "Name:" << endl;
    is >> w.Name;
    cout << "Title:" << endl;
    is >> w.Title;
    cout << "Salary:" << endl;
    is >> w.Salary;
    return is;
}

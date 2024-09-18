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

int main()
{

    return 0;
}

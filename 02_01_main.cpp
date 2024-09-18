#include <iostream>
#include "Worker.h"
#include "Boss.h"

using namespace std;


int main()
{
    Worker w;
    Boss b;


    w.Set_Name("LKM");
    w.Set_Title("Student");
    w.Set_Salary(8000);

    b.Print_Worker(w);

    return 0;
}

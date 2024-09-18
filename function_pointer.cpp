#include <iostream>

using namespace std;

int toZero(int input){
    return 0;
}

int odd(int input){
    return input%2;
}

void function_array(int *p,int len,int (*fp)(int)){
    for(int i=0;i<len;i++){
        cout << fp(p[i]) << " ";
    }
}

int main()
{
    int data[] = {1,2,3,4,5};
    function_array(data, 5, odd);
    return 0;
}

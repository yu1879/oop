#include <iostream>

using namespace std;

bool isBigger(int a,int b){
    return a>b;
}

bool isSmaller(int a,int b){
    return a<b;
}

void sort(int *p, int len, bool(*fp)(int,int)){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(fp(p[j],p[j+1])){
                int tmp = p[j];
                p[j] = p[j+1];
                p[j+1] = tmp;
            }
        }
    }
}

int main()
{
    int data[5] = {34,2,82,1,-5};
    sort(data,5,isBigger);
    for(int i:data)
        cout << i << " ";
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> data = {35,52,68,12,47,52,36,52,74,27};

    int odd = count_if(data.begin(),data.end(),
                    [](int n){
                       return n%2;
                    }
               );
    cout << "Odd: " << odd << endl;

    return 0;
}

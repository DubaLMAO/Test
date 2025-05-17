#include <iostream>
using namespace std;

int main(){

    int Ntabla;
    int res;

    cin >> Ntabla;

    for(int i = 0; i <= 10; ++i){
        res = i * Ntabla;
        cout << res << endl;
    }
    return 0;
}
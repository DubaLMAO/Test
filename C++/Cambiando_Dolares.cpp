#include <iostream>
using namespace std;

int main(){

    long long int D;
    long long int C;
    long long int res;

    cin >> D;
    cin >> C;

    if(D < 100 || D > 1000){
        cout << "NO ES POSIBLE" << endl;
    } else{
    res = D*C;
    cout << res  << endl;
    }



    return 0;
}
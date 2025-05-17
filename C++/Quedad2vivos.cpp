#include <bits/stdc++.h>
using namespace std;

int main(){

    int fNick;
    int fBill;

    cin >> fNick >> fBill;

    int fueraz = fNick + fBill ;

    if (fueraz %2 == 0 && fueraz > 250 && fueraz %3 == 0)
    {
        cout << "Escapan";
    } else{
        cout << "Mueren";
    }
    
    return 0;
}
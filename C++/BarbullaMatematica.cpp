#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sn = 0;

    for (int i = 1; i <= n; i++)
    {
        sn += i * (i + 1) / 2;

    }
    

    cout << sn;


    return 0;
}
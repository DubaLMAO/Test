#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; //n variables
    cin >> N;

    //Aca encabezados de la tabla
    for (int i = 0; i < N; ++i) {
        cout << char('A' + i) << " ";
    }
    cout << endl;

    int totalCombinations = 1 << N; 

    for (int i = 0; i < totalCombinations; ++i) {
        for (int j = N - 1; j >= 0; --j) {
            cout << ((i >> j) & 1) << " ";
        }
        cout << endl;
    }

    return 0;
}


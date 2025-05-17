#include <bits/stdc++.h>
using namespace std;

int main(){

    char arreglo[5] = {'A', 'B', 'C', 'D', 'E'};

    int pos1, pos2;
    cin >> pos1 >> pos2;

    swap(arreglo[pos1 - 1], arreglo[pos2 - 1]);

    // Mostrar el arreglo modificado
    for (int i = 0; i < 5; i++) {
        cout << arreglo[i] << endl;
    }



    return 0;
}
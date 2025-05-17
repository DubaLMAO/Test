#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; //Masa soluto
    int k; //masa del solvente
    double p; //Porcentaje

    cin >> n;
    cin >> k;   

    p = n + k;
    p = ((n/p)*100);

    cout << fixed << setprecision(2); // Configurar para imprimir con dos decimales
    cout << p << "%" << endl;

    return 0;

}
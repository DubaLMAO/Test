#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> cosechas(5);
    for (int i = 0; i < 5; ++i) {
        cin >> cosechas[i];
    }

    //Se ordenan las cosechas con el sort
    sort(cosechas.begin(), cosechas.end());

    int suma = cosechas[1] + cosechas[2] + cosechas[3];

    double promedio = suma / 3.0;

    cout << fixed << setprecision(2) <<"El promedio de las tres cosechas intermedias es: " << promedio << endl;

    return 0;
}
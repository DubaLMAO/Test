#include <bits/stdc++.h>
using namespace std;

int main(){

    string nombres;
    getline(cin, nombres); //leemos toda la linea

    stringstream ss(nombres); //Cuenta cada palabra
    string nNombres; //variable donde se almacenarán nombres temp

    int contador = 0;

    while (ss >> nNombres)
    {
        contador ++; //cuenta los nombres
    }
    

    cout << contador;


    return 0;
}
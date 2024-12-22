#include <bits/stdc++.h>
using namespace std;

int main() {
    string palabra;
    getline(cin, palabra); //pa leer espacio y todos

    // Convertir a minúsculas y eliminar espacios 
    palabra.erase(remove_if(palabra.begin(), palabra.end(), [](char c){ return !isalpha(c); }), palabra.end());
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

    // Invertir la palabra y comparar directamente
    if (palabra == string(palabra.rbegin(), palabra.rend())) {
        cout << "Es un palíndromo" << endl;
    } else {
        cout << "No es un palíndromo" << endl;
    }

    return 0;
}
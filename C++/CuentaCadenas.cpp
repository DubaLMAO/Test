#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    cin.ignore(); // ignorar el salto de línea después del número de casos

    while (n--)
    {

        string cadena;
        getline(cin, cadena);

        set<char> caracteresUnicos; //automáticamente elimina caracteres duplicados
        for (char c : cadena)
        {
            caracteresUnicos.insert(c); // se agregan los caracteres al conjunto
        }

        cout << caracteresUnicos.size() << endl; //El tamaño del conjunto es el número de caracteres únicos
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int nMen; //Numero de mensajes
    cin >> nMen;

    while (nMen--)
    {
        int nCor; //Numero de corazones
        cin >> nCor;

        string Cor = "";
        for (int i = 0; i < nCor; i++)
        {
            Cor += "<3"; //se concatena
        }

        cout << Cor << endl; // Imprimimos la cadena resultante
    }
    
    return 0;
}
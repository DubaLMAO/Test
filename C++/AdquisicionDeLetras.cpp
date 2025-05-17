#include <bits/stdc++.h>
using namespace std;

int main(){

    string cadena;
    cin >> cadena;

    int cont = 0;

    for (int i = 0; i < cadena.size(); i++)
    {
        if(cadena[i] == 'd'){
            cont++;
        }
    }
    
    cout << cont << endl;

    return 0;
}
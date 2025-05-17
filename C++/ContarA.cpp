#include <bits/stdc++.h>
using namespace std;


int main(){

    char caracter;
    int contador = 0;

    do
    {
        cin >> caracter;
        //char c = tolower(caracter);
        if(caracter == 'A'){
            contador++;
        }
        
    } while (caracter != '.');
    
    cout << contador;

    return 0;
}
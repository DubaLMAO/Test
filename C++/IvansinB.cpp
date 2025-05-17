#include <iostream>
#include <string>
using namespace std;

int main(){
    string cadena;

    getline(cin, cadena); //Nos permite leer toda la cadena con espacios

    for(int i = 0; i < cadena.length(); i++){
        if (cadena[i] != 'b' && cadena[i] !='B'){

        cout << cadena[i];  //Reescribe la cadena
        }
    }
}
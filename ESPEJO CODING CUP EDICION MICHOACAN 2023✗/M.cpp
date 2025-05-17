#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>

using namespace std;

int main(){

    int n;
    cin >> n;

    //Guardamos la raiz cuadrada de n
    double raiz = sqrt(n);

    //Guardamos la parte entera de la raiz
    int parteEntera = raiz;

    //verificamos si la raiz es entera
    if(raiz == parteEntera){
        //Mostramos en binario el resultado (8bits)
        bitset<8> nBin(parteEntera);
        cout << nBin << endl;

    }else{

        //Mostramos la raiz pero con dos decimaes
        cout << setprecision(2) << fixed << raiz << endl;
    }
    
    return 0;
}
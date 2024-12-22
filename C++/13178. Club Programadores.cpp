#include <iostream>
using namespace std;

int main(){

    int ProRes;
    int Sum = 0;
    int Contador = 0;
    int Promedio;

    while(cin >> ProRes){
    Sum += ProRes; //Suma las calificaciones
    Contador++;
    }

    if(Contador > 0){
    Promedio = Sum / Contador;
    cout << "Promedio: " << Promedio << endl;
    }
    
    return 0;

}

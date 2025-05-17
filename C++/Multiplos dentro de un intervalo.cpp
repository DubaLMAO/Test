#include <iostream>
using namespace std;

int main(){

    int a; //Multiplos de a
    int b; //Rango

    cin >> a >> b;

    for(int i = a; i <= b; i += a){  //i=+a incrementa i por a o sumar a a i y almacenar el resultado en i 
                                    // asegura que i tome valores que son multiplos de a en cada iteración del for 
                                    //lo que nos permite imprimir todos los múltiplos de a dentro del rango [a, b].
    cout << i << " ";
    
    }

    cout << endl;

    return 0;
}
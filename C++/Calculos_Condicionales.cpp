#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int NumModificaciones = 0;
    cin >> N;

    // Si es par
    if (N % 2 == 0) {
        N /= 2;
    } else {
        N += 1;
    }
    NumModificaciones++;

    // Convertir el número a cadena y contar cifras
    string NumStr = to_string(N);
    int Cif = NumStr.length();

    // Si tiene tres o más dígitos o exactamente dos dígitos
    if (Cif >= 3) {
        N /= 100;
    } else if (Cif == 2) {
        N /= 10;
    }

    if(Cif >= 2){
    NumModificaciones++;
    }

    // Si es múltiplo de 3
    if (N % 3 == 0) {
        N -= 1;
        NumModificaciones++;
    }


    cout << N << " " << NumModificaciones << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int D;
    int C;

    cin >> D;
    int Dim1[D];
    for (int i = 0; i < D; ++i) {
        cin >> Dim1[i];
    }

    cin >> C;
    
    if (D != C) {
        cout << "DIMENSIONES DE LOS BUSES INCOMPATIBLES" << endl;
    }

    int Dim2[C];
    for (int j = 0; j < C; ++j) {
        cin >> Dim2[j];
    }

    

    bool sePuedenLimpiar = true;
    for (int k = 0; k < D; ++k) {
        if (Dim1[k] >= Dim2[k]) {
            sePuedenLimpiar = false;
            break;
        }
    }

    if (sePuedenLimpiar) {
        cout << "SE PUEDEN LIMPIAR LOS BUSES DE DATOS" << endl;
    } else {
        cout << "NO SE PUEDEN LIMPIAR LOS BUSES DE DATOS" << endl;
    }

    return 0;
}

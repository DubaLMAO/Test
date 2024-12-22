#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int EElimin;

    cin >> N;

    vector<int> Arr(N);

    // Solicitar los elementos del vector
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    // Solicitar la cantidad de elementos a eliminar
    cin >> EElimin;

    // Eliminar los últimos EElimin elementos del vector
    Arr.resize(N + EElimin);

    // Imprimir el vector resultante
    for (int i = 0; i < Arr.size(); i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    return 0;
}

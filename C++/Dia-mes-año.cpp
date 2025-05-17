#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> meses = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    int N; 
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int M; 
        cin >> M;

        if (M >= 1 && M <= 12) {
            cout << meses[M - 1] << endl; // M-1 porque el índice del vector empieza en 0
        } else {
            cout << "Error" << endl;
        }
    }

    return 0;
}

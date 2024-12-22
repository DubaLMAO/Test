#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arreglo[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arreglo[i][j] = i * j;
        }
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arreglo[i][j];
            if (j < n - 1) {
            }
        }
        cout << endl;
    }

    return 0;
}

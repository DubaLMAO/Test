#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matriz(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        vector<int> columna(m); //Se usará para almacenar temporalmente los elementos de la columna actual de la matriz

        for (int i = 0; i < m; i++) {        //extraemos la columan j
            columna[i] = matriz[i][j];
        }
        //ordenamos la columna
        sort(columna.begin(), columna.end());
        //volvemos a poner la columa dentro de la matriz
        for (int i = 0; i < m; i++) {
            matriz[i][j] = columna[i];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

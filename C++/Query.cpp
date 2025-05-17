#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    // Leer los elementos del vector
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Crear un mapa para almacenar las frecuencias de cada número
    unordered_map<int, int> frequency;
    for (int num : nums) {
        frequency[num]++;
    }

    int q;
    cin >> q;

    // Consultar cuántas veces se repite cada número solicitado
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        cout << frequency[query] << endl; // Mostrar cuántas veces se repite
    }

    return 0;
}

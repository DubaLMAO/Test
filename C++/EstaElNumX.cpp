#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> numeros(n);
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    cin >> x;

    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (numeros[i] == x) { 
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Sí" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
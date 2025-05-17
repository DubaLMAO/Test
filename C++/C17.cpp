#include <bits/stdc++.h>
using namespace std;

int main() {
    int monedas[] = {20, 10, 5, 2, 1};
    int monto;
    int cantidad;

    cin >> monto;

    for (int i = 0; i < 5; i++) {
        cantidad = monto / monedas[i];
        monto %= monedas[i];
        cout << "$" << monedas[i] << ": " << cantidad << endl;
    }

    return 0;
}


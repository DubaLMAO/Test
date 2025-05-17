#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;
    cin >> A;
    cin >> B;
    cin >> C;

    int con = 0;

    // Caso cuando están en orden: no se necesitan intercambios
    if (A <= B && B <= C) {
        con = 0;
    }
    // Caso cuando se necesita un intercambio
    else if ((A <= C && C <= B) || (B <= A && A <= C) || (C <= B && B <= A)) {
        con = 1;
    }
    // Caso cuando se necesitan dos intercambios
    else {
        con = 2;
    }

    cout << con << endl;

    return 0;
}

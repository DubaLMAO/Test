#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b;
    int sumaPrimera = a + b;

    cin >> c >> d;
    int sumaSegunda = c + d;

    if (sumaPrimera > sumaSegunda) {
        cout << "primera" << endl;
    } else if (sumaPrimera < sumaSegunda) {
        cout << "segunda" << endl;
    } else {
        cout << "iguales" << endl;
    }

    return 0;
}
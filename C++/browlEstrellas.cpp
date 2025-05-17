#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int ladoA = pow(a, b) / 3;
    int ladoB = (b % 5) * 3;

    if (ladoA == ladoB) {
        cout << "Si" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
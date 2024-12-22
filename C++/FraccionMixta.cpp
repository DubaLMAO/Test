#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m == 0) {
        return 1;
    }

    int a = n / m;  // Parte entera
    int b = n % m;  // Resto o parte fraccionaria

    if (b != 0) {
        cout << a << " " << b << "/" << m << endl;
    } else {
        cout << a << endl;
    }

    return 0;
}

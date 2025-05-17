#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int cont = 0;

    if (A == 7) {
        cont++;
    }
    if (B == 7) {
        cont++;
    }

    cout << cont << endl;

    return 0;
}

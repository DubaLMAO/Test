#include <iostream>
using namespace std;

int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    if (a2 >= b1 && b2 >= a1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

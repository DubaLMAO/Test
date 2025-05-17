#include <iostream>
using namespace std;

int main() {
    int x1, x2;
    cin >> x1 >> x2;

    if (x1 < 0 || x2 < 0 || x1 >= x2) {
        cout << "Error" << endl;
        return 0; 
    }
    // Si x1 es par
    if (x1 % 2 == 0) {
        for (int i = x1 + 1; i < x2; i += 2) {
            cout << i << " ";
        }
    } else { 
        // Si x1 es impar
        for (int i = x1 + 1; i < x2; i += 2) { 
            cout << i << " ";
        }
    }
    cout << endl; 
    return 0;
}
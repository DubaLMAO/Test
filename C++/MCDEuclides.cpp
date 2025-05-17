#include <iostream>
using namespace std;

int main() {
    
    int M;
    int N;

    cin >> M;
    cin >> N;

    while (N != 0) {
        int res = M % N;  // Encuentra el resto de la división de M por N
        M = N;            // Asigna el valor de N a M
        N = res;          // Asigna el valor del resto a N
    }

    cout << M << endl;

    return 0;
}

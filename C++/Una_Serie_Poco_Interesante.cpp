#include <iostream>
using namespace std;

int main() {
    int N;
    int P;
    cin >> N;
    cin >> P;

    // Encontrar el número en la posición anterior
    int antes = ((N - 1) - P % 3 + 3) % 3 + 1;

    // Encontrar el número en la posición posterior
    int despues = ((N - 1) + P % 3) % 3 + 1;

    cout << antes << " " << despues << endl;

    return 0;
}

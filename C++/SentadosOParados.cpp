#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int r, s, b;
    cin >> r >> s;
    cin >> b;

    int total_asientos = r * s;

    int sentados = min(b, total_asientos);

    int parados = b - sentados;

    cout << sentados << " " << parados << endl;

    return 0;
}

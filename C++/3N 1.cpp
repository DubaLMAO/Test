#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int steps = 0;
    int max_value = N;

    while (N != 1) {
        if (N % 2 == 0) {
            N = N / 2;
        } else {
            N = 3 * N + 1;
        }
        if (N > max_value) {
            max_value = N;
        }
        steps++;
    }

    cout << steps << " " << max_value << endl;

    return 0;
}

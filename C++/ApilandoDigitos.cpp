#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    //part 1 priamidde
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    //part 2 piramide
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    float Sum = 0;
    float Calif;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> Calif;
        Sum += Calif;
    }

    float Prom = Sum / N;
    cout << fixed << setprecision(2) << Prom << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int Calf[N];
    for (int i = 0; i < N; ++i) {
        cin >> Calf[i];
    }

    int max_num = 0;
    for (int i = 0; i < N; ++i) {
        if (Calf[i] > max_num) {
            max_num = Calf[i];
        }
    }

    int frecuencia[max_num + 1] = {0};

    for (int i = 0; i < N; ++i) {
        frecuencia[Calf[i]]++;
    }

    for (int i = 1; i <= max_num; ++i) {
        cout << i << ": " << frecuencia[i] << endl;
    }

    return 0;
}

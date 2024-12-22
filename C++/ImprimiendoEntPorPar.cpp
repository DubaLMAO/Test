#include <iostream>
using namespace std;

int main() {
    int N;
    int P;

    cin >> N;
    int arreglo[N];


    for(int i = 0; i < N; i++) {
        cin >> arreglo[i];
    }

        cin >> P;

    if(P == 1) {
        for(int i = 0; i < N; i++) {
            if(arreglo[i] % 2 != 0) {
                cout << arreglo[i] << " ";
            }
        }
    } else {
            if(P == 0) {
            for(int i = 0; i < N; i++) {
                if(arreglo[i] % 2 == 0) {
                    cout << arreglo[i] << " ";
                }
            }
        }
    
    }
    

    return 0;
}

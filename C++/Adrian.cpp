#include <iostream>
using namespace std;

int main(){

    int T;
    int S = 0;
    cin >> T;

    int Vec[T];

    for(int i = 0; i < T; ++i){
    cin >> Vec[i];
    }

    // S = 1 - 10 + 5 - 2 + 20 = 14

    for(int j = 0; j < T; ++j){
    if(j % 2 == 0){
        S += Vec[j]; //Suma los pares
    } else {
        S -= Vec[j]; //Resta los impares
        }
    }
    cout << S << endl;
    
    return 0;
}

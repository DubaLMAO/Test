#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int Arr[N];

    for (int i = 0; i < N; ++i){
        cin >> Arr[i];
    }

    bool encontrado = false;
    for (int j = 0; j < N; ++j){
        if(Arr[j] == 8){
        encontrado == true;
        return encontrado;
        }
    }
    
    if(encontrado){
        cout << "1";
    } else {
    cout << "0";
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int N; //Tamaño de la escalera
    cin >> N;

    for (int i = 1; i <= N; ++i){
        for(int j = 1; j < i; ++j){
            cout << "#";
        }
        cout << endl; //Hace el salto de linea
    }
    return 0;
}
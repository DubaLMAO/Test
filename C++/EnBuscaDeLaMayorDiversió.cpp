#include <iostream>
#include <climits> //Ayuda a los límites de los enteros
using namespace std;

int main(){

    int N;
    cin >> N;
    int DiversionT = 0;
    int DivMenor = INT_MAX; 

    for(int i = 0; i < N; ++i){
    int DivMax;
    cin >> DivMax;

    DiversionT += DivMax;

    if (DivMax < DivMenor){
        DivMenor = DivMax;
        }
    }

    int DivMayor = DiversionT - DivMenor;

    cout << DivMayor << endl;
    return 0;
}
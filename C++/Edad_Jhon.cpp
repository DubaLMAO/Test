#include <iostream>
using namespace std;

int main(){

    int v;
    cin >> v;

    int dias; //dias totales de las vidas
    int A; 
    long long totalDias = 0;

    for (int i = 0; i < v; ++i){
        cin >> dias;
        totalDias += dias;
    }
    
    A = totalDias / 365;

    cout << A;

    return 0;
}
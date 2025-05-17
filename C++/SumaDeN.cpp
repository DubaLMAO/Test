#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int sum = 0;

    while (N > 0){
        int digito = N % 10; //Obtiene el ultimo digito #3
        sum += digito;
        N /= 10; //Elimina el ultimo digito #2
    }

    cout << sum << endl;
    
    return 0;
}
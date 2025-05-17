#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double Raiz;
    double N;

    cin >> N;

    Raiz = sqrt(N);

    cout << fixed << setprecision(3);

    cout << Raiz << endl; 

    return 0;

}
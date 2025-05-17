#include <bits/stdc++.h>
using namespace std;


//Definimos el factorial mediante este metodo
int factorial(int n){
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}


int main(){
    int n;
    cin >> n;
    cout << factorial(n);


    return 0;
}
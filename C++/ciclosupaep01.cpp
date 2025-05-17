#include <bits/stdc++.h>
using namespace std;


int main(){

    long long int  num;
    long long int suma = 0;
    cin >> num;
    
    for (int i = 1; i <=  num; i++)
    {
        suma += i;
    }
    
    cout << suma;


    return 0;

}
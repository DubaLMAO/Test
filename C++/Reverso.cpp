#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin >> t;

    vector<int> Nums(t);
    //Leemos los numeros
    for (int i = 0; i < t; i++)
    {
        cin >> Nums[i];
    }

    //imprimimos los numeros
    for (int i = t-1; i >= 0; i--)
    {
        cout << Nums[i] << " ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> Secuencia(t);
    for (int i = 0; i < t; i++)
    {
        cin >> Secuencia[i];
    }

    int cantNum = 0;
    int b; //numero a buscar
    cin >> b;

    for (int i = 0; i < t; i++)
    {
        if(b == Secuencia[i]){
            cantNum++;
        }
    }
    
    cout << cantNum;

    return 0;
}
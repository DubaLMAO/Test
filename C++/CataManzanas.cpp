#include <bits/stdc++.h>
using namespace std;

int main(){

    int tMan;
    cin >> tMan;

    int cont = 0;

    vector<int> CataMan(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> CataMan[i];
        if (tMan == CataMan[i])
        {
            cont++;
        }
        
    }

    cout << cont;


    return 0;   
}
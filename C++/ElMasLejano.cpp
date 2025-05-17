#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> casas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> casas[i];
    }

    for (int i = 0; i < n; i++)
    {
        int maxDis = 0; //Para guardar las distancias
        for (int j = 0; j < n; j++) //Posición de la otra casa del vecindario
        {
            int dis = abs(casas[i] - casas[j]); //Determinamos el valor absoluto 
            maxDis = max(maxDis, dis); //determinamos el mayoe entre la variable maxDis y dis
        }
        cout << maxDis << endl;
    }
    
    return 0;
}
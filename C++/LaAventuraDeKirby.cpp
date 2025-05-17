#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> puertas(n);

    for (int i = 0; i < n; i++)
    {
        cin >> puertas[i];
    }


    int psodicion = -1;

    // buscar k en las puertas
    for (int i = 0; i < n; i++)
    {
        if (puertas[i] == k)
        {
            psodicion = i;
            break;
        }
    }

    if (psodicion != -1)
    {
        cout << psodicion;
    }
    else
    {
        cout << "Poyo :(";
    }

    return 0;
}
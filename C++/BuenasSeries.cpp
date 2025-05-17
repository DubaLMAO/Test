#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N; // N cap series
    int K; // Minutos de cada Cap

    cin >> N;
    cin >> K;
    vector<int> minCap(N);

    //leemos elementos de N
    for (int i = 0; i < N; i++)
    {
        cin >> minCap[i];
    }

    int contCap = 0; //Contar los cap que se pueden ver
    int tiemAc = 0; //Para ver cuantos cap (sum) se pueden ver

    for (int i = N-1; i >=0; i--)
    {
        if (minCap[i] + tiemAc <= K)
        {
            tiemAc += minCap[i];  
            contCap++;
        } else {
            break;
        }
    }
    


    cout << contCap;

    return 0;
}
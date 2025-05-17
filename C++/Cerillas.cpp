#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N; // cerillas
    int A, B; //Dimensiones de la caja

    cin >> N >> A >> B;

    vector<int> Cerillas(N);

    int diagonal = sqrt(A * A + B * B); //Se utilza la TPit para determinar las dimensiones de la caja

    for (int i = 0; i < N; i++)
    {
        cin >> Cerillas[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (Cerillas[i] <= diagonal)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }

    return 0;
}
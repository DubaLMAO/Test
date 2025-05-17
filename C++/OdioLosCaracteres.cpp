#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N; // Dimensión de la Matriz
    cin >> N;

    vector<int> matriz(N);

    // Los dos vectores anidados recorren la matriz linea por linea
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int num;
            cin >> num;
            matriz.push_back(num);
        }
    }

    int K;
    cin >> K;

    for (int i = 0; i < K; i++)
    {
        int valor; // Num a buscar dentro de la matriz
        cin >> valor;
        bool encontrado = false;
        for (int num : matriz)
        {
            if (num == valor)
            {
                encontrado = true; //el valor se vuelve true si hay un num igual
                break;
            }
        }

        if (encontrado)
        {
            cout << "SI" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
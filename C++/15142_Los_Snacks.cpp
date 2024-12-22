#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> PaLik(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> PaLik[i];
    }
    
    sort(PaLik.begin(), PaLik.end());
    
    for (int i = 0; i < N - 1; ++i) { //N-1 Accece hasta el penultimo elemento del vector
        cout << "X" << endl;
    }

    cout << PaLik[N - 1]; //Imprime el ultimo digito del vector 

    return 0;
}

// Falta agregar la comdición *Si hay más de dos lugares con el mismo número de likes, se seleccionará el primero registrado.


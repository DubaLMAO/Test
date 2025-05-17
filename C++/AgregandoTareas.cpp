#include <bits/stdc++.h>
using namespace std;

int main(){

    int N; //cantidad de tareas
    int P; //Tarea(tiempo de) a agregar
    
    cin >> N;
    cin >> P;

    vector<int> timeTare(N);

    for (int i = 0; i < N; i++)
    {
        cin >> timeTare[i];
    }
    

    //Comparar tiempos de las tareas
    int tarePend = 0;
    for (int i = N - 1; i >= 0; i--) //Inica de menor a mayor
    {
        if (timeTare[i] > P) //Si el tiemp es mayor a p, se cuenta
        {
            tarePend++;
        } else { //si no, se queda ahi
            break;
        }
        
    }
    
    cout << tarePend;

    return 0;
}
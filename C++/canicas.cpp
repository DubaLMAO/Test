#include <bits/stdc++.h>
using namespace std;

int main(){

    int Vasos; //vasos
    int C; //cantidad de canicas
    
    cin >> Vasos >> C;

    vector<int> Canicas(C);

    //Leemos en que vaso cae una canica
    for (int i = 0; i < C; i++)
    {
        cin >> Canicas[i];
    }

    //Inicializamos en vector pa contar las canicas
    //Ponemos el +1 para tener otra pasición mas
    //el 0 inidca que se inicializa desde ahi
    vector<int> ConteoCanicas(Vasos + 1, 0);

    for (int i = 0; i < C; i++)
    {
        ConteoCanicas[Canicas[i]]++; //Hace cuente las canicas que caen en cada vaso
    }
    

    for (int i = 1; i <= Vasos; i++)
    {
        cout << ConteoCanicas[i] << endl;
    }
    


    return 0;
}
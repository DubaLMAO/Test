#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    //Leemos n mientras no sea menor a 0
    do{
        cin >> n;
    } while(n <= 0);

    vector<int> Precios(n);
    //leemos los precios

    bool error = false;
    for (int i = 0; i < n; i++)
    {
        cin >> Precios[i];
        if (Precios[i] <= 0)
        {
            cout << "Error en el precio ingresado." << endl;
            error = true;
            break;
        }
        
    }
    

    if (!error)
    {
        sort(Precios.begin(), Precios.end(), greater<int>()); //el greater nos ayuda a ordnar e mayor a menor
        for (int precio : Precios) //imprimirmos precios
        { 
            cout << precio << " ";
        }
        cout << endl;
    }
    





    return 0;
}
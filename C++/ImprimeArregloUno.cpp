#include <iostream>
using namespace std;

int main()
{

    int T;

    cin >> T; 
    
    int Arreglo[T]; 

    for (int i = 0; i < T; i++)
    { 
        cin >> Arreglo[i];
    }

    for (int j = 0; j < T; j++)
    { // Se imprimen los datos
        cout << Arreglo[j] << " ";
    }
    cout << endl;

    return 0;
}
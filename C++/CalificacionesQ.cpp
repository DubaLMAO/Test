#include <iostream>
using namespace std;

int main()
{
    int Clases = 6; //Numero de clases
    double SCalif;

    for (int i = 0; i <= Clases; ++i)
    {
        double Cal;
        cin >> Cal;

        SCalif += Cal; 
    }

    int Promedio = static_cast <int> (SCalif / Clases); //Convierte el promedio a entero
    cout <<  Promedio << endl;

    return 0;
}
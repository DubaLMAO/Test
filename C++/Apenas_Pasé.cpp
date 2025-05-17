#include <iostream>
using namespace std;

int main()
{

    float a;
    int materias;

    cin >> a;
    cin >> materias;
    double suma = 0;

    double calificaciones[materias];
    for (int i = 0; i < materias; i++)
    {
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    double promedio = suma / materias;

    if (a > promedio)
    {
        cout << "Ladra" << endl;
    }
    else
    {
        cout << "Presume" << endl;
    }
    return 0;
}
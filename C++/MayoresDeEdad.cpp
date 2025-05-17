#include <iostream>
using namespace std;

int main()
{

    int AñoN;
    int AñoAct;

    cin >> AñoN;
    cin >> AñoAct;

    int Edad = AñoAct - AñoN; // Calcula la edad en años.
    if (Edad >= 18)
    {
        cout << "Mayor de edad" << endl;
    }
    else
    {
        cout << "Menor de edad" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    double peso;
    cin >> peso;

    if (peso < 10)
    {
        cout << "Liviano";
    }
    else if (peso >= 10 && peso <= 25)
    {
        cout << "Mediano";
    }
    else if (peso > 25)
    {
        cout << "Pesado";
    }

    return 0;
}

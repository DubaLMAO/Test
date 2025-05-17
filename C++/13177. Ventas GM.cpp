#include <iostream>
#include <iomanip> //para los dos decimales
using namespace std;

int main()
{
    double Venta;
    double T = 0.0;

    while (true)
    {
        cin >> Venta;

        if (Venta == 0.0)
        {
            break;
        }
        T += Venta;
    }

    cout << "$ " << fixed << setprecision(2) << T << endl;

    return 0;

}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;
    double sum = 0;

    while (true)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }

        sum += abs(num); // abs() convierte el valor a positivo automáticamente
    }

    cout << sum;

    return 0;
}
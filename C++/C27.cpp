#include <iostream>
using namespace std;

int main()
{
    int Edad;
    cin >> Edad;

    if (Edad <= 10)
    {
        cout << "Dirigirse a la Sala 1" << endl;
    }
    else if (Edad >= 11 && Edad <= 15)
    {
        cout << "Dirigirse a la Sala 2" << endl;
    }
    else
    {
        cout << "Dirigirse a la Sala 3" << endl;
    }

    return 0;
}

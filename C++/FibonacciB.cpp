#include <iostream>
using namespace std;

int main()
{

    int m;
    cin >> m;

    int a = 1;
    int b = 1;
    int Sig;

    while (a < m)
    {

        cout << b << " ";
        Sig = a + b;
        if (Sig > m)
        {
            break;
        }
        a = b;
        b = Sig;
    }

    return 0;
}
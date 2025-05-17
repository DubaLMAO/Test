#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int contPar = 0;
    int contImpar = 0;

    int Vec[T];

    for (int i = 0; i < T; ++i)
    {
        cin >> Vec[i];
        if (Vec[i] % 2 == 0)
        {
            contPar++;
        }
        else
        {
            contImpar++;
        }
    }
    
    cout << contPar << " " << contImpar << endl;

    return 0;
}



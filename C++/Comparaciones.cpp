#include <iostream>
using namespace std;
int main()
{
    int A;
    int B;

    cin >> A;
    cin >> B;

    if (A > B)
    {
        cout << "mayor" << endl;
    }
    else
    {
        if (A < B)
        {
            cout << "menor" << endl;
        }
        else
        {
            if (A == B)
                cout << "iguales" << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0, d = 0, n, A, B;

    cin >> n;
    int original = n;

    while (n > 0)
    {
        b = n % 10;
        c = (c * 10) + b;
        n /= 10;
    }

    if (original == c)
    {
        cout << "es escalera inicialmente" << endl;
    }
    else
    {
        cin >> A >> B;

        int x = (original - A) / (B + 1);

        int reversed_x = 0;
        int temp_x = x;
        while (temp_x > 0)
        {
            b = temp_x % 10;
            reversed_x = (reversed_x * 10) + b;
            temp_x /= 10;
        }

        if (x == reversed_x)
        {
            cout << "es escalera despues del primer intento" << endl;
        }
        else
        {
            x = x - (A + B) + 1;

            int reversed_d = 0;
            int temp_d = x;
            while (temp_d > 0)
            {
                b = temp_d % 10;
                reversed_d = (reversed_d * 10) + b;
                temp_d /= 10;
            }

            if (x == reversed_d)
            {
                cout << "es escalera despues del segundo intento" << endl;
            }
            else
            {
                cout << "nos rendimos" << endl;
            }
        }
    }

    return 0;
}
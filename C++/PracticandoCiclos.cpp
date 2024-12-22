#include <iostream>
using namespace std;

int main()
{

    int N;
    int A;
    int B;

    cin >> N;
    cin >> A;
    cin >> B;

    while (N < 1000)
    {
        int sum = 0;
        if (N % 2 == 0)
        {
            for (int i = 0; i <= A; ++i)
            {
                sum += i;
            }
        }
        else
        {
            for (int i = 0; i <= B; ++i)
            {
                sum += i;
            }
        }
            N += sum;
    }

    cout << N << endl;

    return 0;
}
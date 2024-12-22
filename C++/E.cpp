#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;
    for (int i = 0; i <= 12; i++)
    {
        int res = N * i;
                          
                cout  << N << i << res << endl;
    }
    return 0;
}
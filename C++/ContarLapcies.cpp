#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    int N;
    int K;
     cin >> N >> K;
     for (int i = 0; i < N; i++)
     {
        int A;
        cin >> A;
        if (K == A)
        {
        c++;
        }
     }    
      
    cout << c << endl;
    return 0;
}
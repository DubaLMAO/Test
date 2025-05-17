#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, R;
    cin >> N >> R;

    int res;

    if (N < R)
    {
        res = (R - N) + 1;
        cout << res;
    } else {
        if (N > R)
        {
            cout << 0;
        }
        
    }
    



    return 0;
}
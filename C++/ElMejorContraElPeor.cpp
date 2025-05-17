#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> problemas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> problemas[i];
    }
    
    sort(problemas.begin(), problemas.end());

    int res = problemas[n-1] - problemas[0];

    cout << res;

    return 0;
}
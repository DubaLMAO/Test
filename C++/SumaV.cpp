#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> suma(n);
    int sumaT = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> suma[i];
        sumaT += suma[i];
    }
    
    cout << sumaT;


    return 0;
}
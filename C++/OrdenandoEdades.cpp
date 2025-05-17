#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> Edades(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Edades[i];
    }
    
    sort(Edades.begin(), Edades.end());

    for (int i = 0; i < n; i++)
    {
        cout << Edades[i] << " ";
    }
    


    return 0;
}
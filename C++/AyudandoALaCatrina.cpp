#include <iostream>
#include <vector>
using namespace std;

int main(){

    int nCiudades;
    int sum = 0;
    cin >> nCiudades;

    vector<int> habitantes(nCiudades);

    for (int i = 0; i < nCiudades; i++)
    {
        cin >> habitantes[i];
    }

    for (int i = 0; i < nCiudades; i++)
    {
        int res = (10 / habitantes[i]) * 100;
        
        sum += res;

        cout << sum << endl;
        cout << res << endl; 
    }
    





    return 0;
}
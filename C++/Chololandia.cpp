#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; 
    int k;

    int cont = 0;

    cin >> n >> k;

    vector<int> nCiudadanos(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nCiudadanos[i];
    }
    


    for (int i = 0; i < n; i++)
    {
        if (nCiudadanos[i] < k)
        {
            cont++;
        }
        
    }
    

    cout << cont << endl;

    return 0;
}
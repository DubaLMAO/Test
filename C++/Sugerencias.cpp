#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int nPal;
    cin >> nPal;

    vector<string> palabras(nPal);

    for (int i = 0; i < nPal; i++)
    {
        cin >> palabras[i];
    }
    
    
    string sugerencia;
    cin >> sugerencia;

    for (int i = 0; i <nPal ; i++)
    {
        if (palabras[i].find(sugerencia) != string::npos)
        {
            cout << palabras[i] << endl;
        }
    }


    return 0;
}
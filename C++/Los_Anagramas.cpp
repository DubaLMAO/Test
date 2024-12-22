#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--) //Decrementa en las iteracions
    {
        string c1, c2;

        cin >> c1 >> c2;
        //Funcion de 2 parámetros
        sort(c1.begin(), c1.end()); //Ordena
        sort(c2.begin(), c2.end());

        if (c1 == c2)
        {
            cout << "Las palabras son anagramas." << endl;
        }
        else
        {
            cout << "Las palabras NO son anagramas." << endl;
        }
    }

    return 0;
}
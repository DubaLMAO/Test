#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<char> vocales({'a', 'e', 'i', 'o', 'u'});
    vector<int> conteo(5, 0); // contador para cada vocal

    string palabra;
    getline(cin, palabra);

    int cont = 0;

    for (int i = 0; i <= palabra.length(); i++)
    {
        char c = tolower(palabra[i]); //convertimos cada caracter en minuscula
        for (int j = 0; j < vocales.size(); j++) //hasta terminar el tamaño de vocales
        {
            if (c == vocales[j])
            {
                conteo[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < conteo.size(); i++)
    {
        cout << conteo[i] << " ";
    }

    cout << endl;

    return 0;
}
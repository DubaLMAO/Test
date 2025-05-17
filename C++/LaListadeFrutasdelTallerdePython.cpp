#include <bits/stdc++.h>
using namespace std;


int main(){

    char caractec;
    cin >> caractec;

    int tamVe;
    cin >> tamVe;

    vector<string> frutas(tamVe);
    

    for (int i = 0; i < tamVe; i++)
    {
        cin >> frutas[i];
    }
    
     // Buscar las frutas que contienen el carácter
    for (const auto& fruta : frutas) {
        for (const auto& letra : fruta) {
            if (tolower(letra) == tolower(caractec)) {
                cout << fruta << endl;
                break;
            }
        }
    }


    return 0;
}
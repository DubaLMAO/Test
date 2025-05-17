#include <iostream>
#include <string>
using namespace std;

int main(){ 

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //se lee orcion complet
    string oracion;
    getline(cin, oracion);

    // contadors
    int vocales = 0;
    int consonantes = 0;
    int espacios = 0;

    for (int i = 0; i < oracion.length(); i++)
    {
        //convetimos a minuscula
        char c = tolower(oracion[i]);

        if (isalpha(c))
        {

            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vocales++;
            } else {
                consonantes++;
            }

        } else if (c == ' ')
        {
            espacios++; 
        }
    }

    cout << consonantes << "X2+" << vocales << "X+" << espacios << "=0" << endl;
    return 0;
}
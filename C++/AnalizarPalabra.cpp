#include <iostream>
using namespace std;

int main(){
    
    string palabra;
    cin >> palabra;

    //medimos los caracteres de la palabra
    int nLetr = palabra.length();

    cout << nLetr << endl;

    //Contamos las vovales
    int cont = 0;
    for (char letra : palabra)
    {
        char letMinus = tolower(letra); //convertimos los caracteres de la plabara a minuscula
        if (letMinus == 'a' || letMinus == 'e' || letMinus == 'i' || letMinus == 'o' || letMinus == 'u')
        {
            cont++;
        }
        
    }

    cout << cont << endl;

    //palabra al reves
    for (int i = palabra.length() - 1; i >= 0; i--)
    {
        cout << palabra[i];
    }
        


    return 0;
}
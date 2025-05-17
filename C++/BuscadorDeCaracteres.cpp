#include <bits/stdc++.h>
using namespace std;

int main(){

    char caracter;
    cin >> caracter;

    string Palabra;
    cin >> Palabra;

    int con = 0;

    for (char c :Palabra)
    {
        if (c == caracter)
        {
            con++;
        }
        
    }

    cout << con << endl;

    return 0;   
}
#include <iostream>
#include <string>

using namespace std;

int main(){

    string Cadena;
    string CadRev;

    getline(cin, Cadena);

    for(int i = Cadena.length()- 1; i>=0; --i){
        CadRev += Cadena[i];
    }

    cout << CadRev << endl;

    return 0;
}
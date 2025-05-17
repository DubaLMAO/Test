#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string cadena;

    cin >> cadena;

    for(char &letra : cadena){
        letra = toupper(letra);
    }
    
    cout << cadena << endl;


    return 0;
            
}
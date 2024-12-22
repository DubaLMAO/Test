#include <iostream>
#include<string>
using namespace std;
int main() {
    string oracion;
    int cont=0;

    getline(cin,oracion);

    for(int i=0; i<oracion.length(); i++){
    if(oracion[i]!=' '){

        cont++;
        }
    }
    cout<<cont<<endl;
    
    return 0;
}
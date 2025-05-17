#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n; //numero de hebras
    cin >> n;

    string secuencia;
    cin >> secuencia;

    map<char, int> conteo = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

    for(char base : secuencia){
        conteo[base]++;
    }

    cout << "A: " << conteo['A'] << endl;
    cout << "C: " << conteo['C'] << endl;
    cout << "G: " << conteo['G'] << endl;
    cout << "T: " << conteo['T'] << endl;

    return 0;
}
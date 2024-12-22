#include <bits/stdc++.h>
using namespace std;


int main (){

    string pal1;
    string pal2;

    cout << "Ingrese la primera palabra" << endl;
    cin >> pal1;
    cin >> pal2;

    sort(pal1.begin(), pal1.end());
    sort(pal2.begin(), pal2.end());

    if(pal1 == pal2){
        cout << "SI son anagramas" << endl;
    } else {

        cout << "NO son anagramas" << endl;
    }



}
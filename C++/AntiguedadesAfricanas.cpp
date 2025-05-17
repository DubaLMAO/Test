#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1, h2, h3, h4;
    cin >> h1 >> h2 >> h3 >> h4;

    int res = h1 + h2 + h3 + h4;

    if(res %2 == 0){
        cout << "Dinosaurio";
    } else{
        cout << "No Dinosaurio";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    string word;
    cin >> word;


    int cont = 0;
    for (char E : word)
    {
        if (tolower(E) == 'e')
        {
            cont++;
        }
        
    }
    
    cout << cont;

    return 0;
}
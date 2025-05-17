#include <bits/stdc++.h>
using namespace std;


int main(){

    string pal;
    getline(cin, pal);

    int cont = 0;

    for (char c : pal)
    {
        if (c == 'e')
        {
            cont++;
        }
        
    }
    

    cout << cont;



    return 0;
}
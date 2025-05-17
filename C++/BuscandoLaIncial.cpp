#include <bits/stdc++.h>
using namespace std;

int main(){

    char lFav;
    cin >> lFav;

    int N;
    cin >> N;

    vector<string> Palabras(N); //palabras a ingresar

    vector<string> PalFav;

    for (int i = 0; i < N; i++)
    {
        cin >> Palabras[i];
        if(Palabras[i][0] == lFav){
            PalFav.push_back(Palabras[i]);
        }
    }
    
    if (PalFav.empty())
    {
        cout << endl;
    } else {
        for (int i = 0; i < PalFav.size(); i++)
        {
            cout << PalFav[i] << endl;
        }
        
    }
    

    return 0;
}
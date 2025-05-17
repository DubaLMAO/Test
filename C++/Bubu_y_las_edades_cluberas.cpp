#include <bits/stdc++.h>
using namespace std;

int main(){
    int ed;
    cin >> ed;
    vector<int> edades(ed);  

    for (int i = 0; i < ed; ++i){
        cin >> edades[i];
    }

    //Se eliminan las edades repetidasd
    set<int> edades_unicas(edades.begin(), edades.end());

    //Vectro solo con edades sin repetir
    vector<int> EdadesFin(edades_unicas.begin(), edades_unicas.end());


    sort(EdadesFin.begin(), EdadesFin.end(), greater<int>());
    
    for (int i = 0; i < ed; ++i){
        cout << EdadesFin[i] << " ";
    }
}
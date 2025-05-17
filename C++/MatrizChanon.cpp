#include <iostream>
using namespace std;

int main(){

    int n;
    int m;

    cin >> n;
    cin >> m;
    int matriz [n][m];
    int cont = 1;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
        matriz[i][j] = cont ;
        cont++;
        }
    }


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << matriz[i][j] << " ";
        } 
            cout << endl;  
    }

    return 0;
}
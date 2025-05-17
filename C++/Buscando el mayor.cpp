#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int Arreglo [T];

    for(int i = 0; i < T; i++){
    cin >> Arreglo[i] ;
    }

    int Max = Arreglo[0];

    for(int j = 0; j <  T; j++ ){
        if (Arreglo[j] > Max) {
            Max = Arreglo[j];
        }
    }
     cout << Max << endl;
    
    


    return 0;
}
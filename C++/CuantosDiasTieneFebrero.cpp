#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int anio [N];

    for (int i = 0; i < N; ++i){
        cin >> anio[i];
    }
    

    for(int j = 0; j < N; ++j){
        if((anio[j] % 4 == 0 && anio[j] % 100 != 0) || anio[j] % 400 == 0){
            cout << "29" << " ";
        } else {
            cout << "28"<< " ";
        }
    
    }

    return 0;
}
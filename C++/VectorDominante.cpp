#include <iostream>
using namespace std;

int main(){

int T;
cin >> T;

int Sec1 [T];
int Sec2 [T];

for (int i = 0; i < T; ++i){
    cin >> Sec1[i];
}

for (int j = 0; j < T; ++j){
    cin >> Sec2[j];
}
    bool Mayor = true;

    for (int k = 0; k < T; ++k){
        if(Sec1[k] <= Sec2[k]){
        Mayor = false;
        break;
        }
    }
    

    if(Mayor){
    cout << "1" << endl;
    } else {
    cout << "0" << endl;
    }
    return 0;
}
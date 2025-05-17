#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    int Sec [N];

    for (int i = 0; i < N; ++i){
        cin >> Sec[i];
    }

    int k;
    cin >> k;

    for (int j = 0; j < N; ++j){
        if(Sec[j] %k == 0){
        cout << Sec[j] << "" << endl;
        } else {
            cout << "X" << endl;
        }
    }
    cout << endl;

    return 0;
}
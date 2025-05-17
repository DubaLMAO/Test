#include <iostream>
using namespace std;

int main(){

    int N;
    int CanD = 0;

    cin >> N;

    for(int i = 1; i <= N; ++i){
    if (N %i == 0){
        CanD++;
        }
    }


    cout << CanD<< endl;

    return 0;
}
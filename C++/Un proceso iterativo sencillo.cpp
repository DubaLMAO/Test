#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;


    while(N < 100){
        if(N %2 == 0){
        N += 2;
        }

        if(N %2 != 0){
        N *= 2;
        }

    }
        cout << N << endl;      

    return 0;
}
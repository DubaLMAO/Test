#include <iostream>
using namespace std;

int main(){
    int N;
    int C = 0;


    cin >> N;

    while(N != 0){

    C += N; //Forma abreviada de C = C +N;

    cin >> N;

    }

    cout << C << endl; 
    return 0;
}


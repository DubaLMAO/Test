#include <iostream>
using namespace std;

int main(){
    int A;
    int B;
    int C;

    cin >> A;
    cin >> B;
    cin >> C;

    int max = A;

    if (B > max){
    max = B;
    }

    if(C > max){
    max = C;
    }

cout << max <<endl; 

    return 0;
}
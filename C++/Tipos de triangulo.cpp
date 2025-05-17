#include <iostream>
using namespace std;

int main(){

    int L1;
    int L2;
    int L3;


    cin  >> L1 >> L2 >> L3;

    if (L1 == L2  && L1 == L3) {
        cout << "Equilatero" << endl;
    } else if (L1 != L2 && L1 != L3 && L2 != L3){
        cout << "Escaleno" << endl;
    }else{
        cout << "Isosceles" << endl;
    }

    return 0;
}
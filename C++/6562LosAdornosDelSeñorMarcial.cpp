#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float A;
    float B;

    cin >> A;
    cin >> B;

    float d = sqrt(A * A + B * B);

    cout << d << endl;

    return 0;
}
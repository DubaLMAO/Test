#include <iostream>
using namespace std;

int main(){
    float num1;
    float num2;
    float num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    float min = num1;

    if (num2 < min) {
        min = num2;
    }

    if (num3 < min) {
        min = num3;
    }

    cout << min;
    
    return 0;
}

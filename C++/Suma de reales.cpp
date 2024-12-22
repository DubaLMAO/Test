#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double num1;
    double num2;

    cin >> num1;
    cin >> num2;

    double res = num1 + num2;

    cout << fixed << setprecision(2) << res << endl;


    return 0;
}
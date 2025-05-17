#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main() {
    double radio;
    double area;

    cin >> radio;

    area = 3.1416 * pow(radio, 2);

    cout << fixed << setprecision(2) << area << endl;
    return 0;
}

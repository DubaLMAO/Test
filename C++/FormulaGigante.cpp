#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x;
    double y;
    double z;

    cin >> x >> y >> z;

    double res1 = (2 * x + (y / z)) * (pow(y, 3) - z);
    double res2 = x + 2 * y + 3 * z / z - 2 * y - 2 * x + pow(x, 2) + pow(z, 2);

    double resul = res1 / res2;

    cout << fixed << setprecision(6) << resul << endl; // Imprime con 10 decimales

    return 0;
}
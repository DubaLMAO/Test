#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double Gramos;
    double PesoMol;

    cin >> Gramos;
    cin >> PesoMol;

    double CantMol = Gramos/PesoMol;


    cout << fixed << setprecision(2);
    cout << CantMol << " mol" << endl;

    return 0;
}
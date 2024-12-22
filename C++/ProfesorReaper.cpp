#include <iostream>
#include <iomanip>  //Libreria para decimales
using namespace std;

int main(){

    double Calif = 5;
    double SPro = 0.0;
    for(int i = 1; i <= Calif; i++){

    double S;
    cin >> S;

    SPro += S ;  


    }
        double promedio = SPro/Calif;
        cout<< fixed << setprecision(2) << promedio << endl; //Se colocan dos decimales
    return 0;
}
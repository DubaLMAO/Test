#include <bits/stdc++.h>
using namespace std;

int main(){
    double temperatura[7]; //Dias de la semana

    //Variables para prom
    double sum = 0;
    double promedi;

    vector<string> dias = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    
    //Pa leer las temp y cal prom
    for (int i = 0; i < 7; ++i) {
        cin >> temperatura[i];
        sum += temperatura[i];
    }
    promedi = sum / 7;


    //Determinar la temp mas alta y mas baja
    double temMax = temperatura[0]; 
    double temMin = temperatura[0];
    int diaMax = 0;
    int diaMin = 0;

    for (int i = 1; i < 7; ++i) { // en una por que en  -double temMax = temperatura[0] se inicializo
        if (temperatura[i] > temMax) { //Compara si la temp act es mas alta
            temMax = temperatura[i]; 
            diaMax = i; //Actuliza la variable al dia con mas temp
        }
        if (temperatura[i] < temMin) {
            temMin = temperatura[i];
            diaMin = i; //Actuliza la variable al dia con menos temp
        }
    }

    cout << fixed << setprecision(2) << "Promedio:  " << promedi << endl;
    cout << "Día más caliente: "<< dias[diaMax] << endl;
    cout << "Día más frío: "<< dias[diaMin] << endl;

    return 0;
}
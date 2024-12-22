#include <iostream>
using namespace std;

int main()
{

    int Creditos = 480;
    int Horas;
    cin >> Horas;

    if (Horas < 480) {
        int res =  Creditos - Horas;
        cout << "Debe " << res << " horas" << endl;
    }
    else {
        cout << "Cumplió al 100% sus créditos" << endl;
    }

    return 0;
}
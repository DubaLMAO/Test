#include <iostream>
using namespace std;

int main(){

    int Productos = 3;
    int sm;

    for (int i = 0; i <= Productos; i++)
    {
        int suma;
        cin >> suma;
        sm += suma;
    }

    cout << sm << endl;
    



    return 0;
}

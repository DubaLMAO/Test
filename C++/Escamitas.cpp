#include <iostream>

using namespace std;

int main() {

    int T;

    cin >> T;

    if (T>=21 & T<=29)
    {
        cout << "tibia" << endl;
    }

    if (T>=15 & T<=20)
    {
        cout << "fria!" << endl;
    }

    if (T>=0 & T<=14)
    {
        cout << "fria!" << endl;
        cout << "RIP escamitas :(" << endl;
    }
    
    if (T>=30 & T<=34)
    {
        cout << "caliente!" << endl;
    }
    
    if (T>=35)
    {
        cout << "caliente!" << endl;
        cout << "RIP escamitas :(" << endl;
    }

    return 0;
    
}
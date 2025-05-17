#include <iostream>
using namespace std;

int main() {
    
    string Palabra;
    cin >> Palabra;

    int Nveces;
    cin >> Nveces;

    for (int i = 0; i < Nveces; ++i){
        cout << Palabra << endl;
    }
    
    cout << endl;
    return 0;
}

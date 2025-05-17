#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string nombre;

    getline(cin, nombre); 

    if (nombre.length() > 0 && nombre[0] == 'S' && nombre[nombre.length() - 1] == 'S') {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
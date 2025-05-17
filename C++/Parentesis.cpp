#include <iostream>
#include <stack>
using namespace std;

int main() {
    string cadena;
    cin >> cadena;

    stack<char> pila;
    for (char c : cadena) {
        if (c == '(') {
            pila.push(c);
        } else if (c == ')') {
            if (pila.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            pila.pop();
        }
    }

    if (pila.empty()) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

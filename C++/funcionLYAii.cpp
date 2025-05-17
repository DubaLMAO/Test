#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    double resultado;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;
    cout << "Ingrese el valor de e: ";
    cin >> e;
    cout << "Ingrese el valor de f: ";
    cin >> f;

    try {
        // Validar que f no sea cero
        if (f == 0) {
            throw invalid_argument("Error: División por cero (f no puede ser 0).");
        }

        // Validar que a y b no sean ambos cero
        if (a == 0 && b == 0) {
            throw invalid_argument("Error: a y b no pueden ser ambos cero.");
        }

        // Validar que c y d no sean ambos cero
        if (c == 0 && d == 0) {
            throw invalid_argument("Error: c y d no pueden ser ambos cero.");
        }

        // Validar que e no sea cero
        if (e == 0) {
            throw invalid_argument("Error: e no puede ser cero.");
        }

        // Evaluar la expresión ((a + b) + (c + d) * (e) / f)
        resultado = (a + b) + (c + d) * e / f;

        cout << "El resultado de la expresion ((a + b) + (c + d) * (e) / f) es: " << resultado << endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    } catch (...) {
        cerr << "Ocurrió un error inesperado." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int anio;

    cout << "Verificar si un a�o es bisiesto:\n";
    cout << "------------------------------\n";

    cout << "Ingrese un a�o: ";
    cin >> anio;

    // Verificar si el a�o es bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un a�o bisiesto.\n";
    } else {
        cout << anio << " no es un a�o bisiesto.\n";
    }

    return 0;
}

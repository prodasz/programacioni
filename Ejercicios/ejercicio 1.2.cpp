#include <iostream>

using namespace std;

int main() {
    int anio;

    cout << "Verificar si un año es bisiesto:\n";
    cout << "------------------------------\n";

    cout << "Ingrese un año: ";
    cin >> anio;

    // Verificar si el año es bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es un año bisiesto.\n";
    } else {
        cout << anio << " no es un año bisiesto.\n";
    }

    return 0;
}

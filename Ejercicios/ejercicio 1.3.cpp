#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Compare dos n�meros enteros:\n";
    cout << "-----------------------------\n";

    cout << "Ingrese el primer entero: ";
    cin >> num1;

    cout << "Ingrese el segundo entero: ";
    cin >> num2;

    // Comparaciones directas e impresi�n de resultados
    cout << num1 << " == " << num2 << endl;
    cout << num1 << " != " << num2 << endl;
    cout << num1 << " < " << num2 << endl;
    cout << num1 << " > " << num2 << endl;
    cout << num1 << " <= " << num2 << endl;
    cout << num1 << " >= " << num2 << endl;

    return 0;
}

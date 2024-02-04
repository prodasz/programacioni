#include <iostream>
#include <cmath>

// Operadores y Variables
void operadoresYVariables() {
    int num1, num2;
    std::cout << "Ingrese dos numeros enteros: ";
    std::cin >> num1 >> num2;

    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    int division = (num2 != 0) ? num1 / num2 : 0;

    std::cout << "Suma: " << suma << "\nResta: " << resta << "\nMultiplicacion: " << multiplicacion << "\nDivision: " << division << std::endl;

    std::cout << "Comparaciones:\n";
    std::cout << num1 << " == " << num2 << ": " << (num1 == num2) << "\n";
    std::cout << num1 << " != " << num2 << ": " << (num1 != num2) << "\n";
    std::cout << num1 << " > " << num2 << ": " << (num1 > num2) << "\n";
    std::cout << num1 << " < " << num2 << ": " << (num1 < num2) << "\n";
    std::cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << "\n";
    std::cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << std::endl;
}

// Funciones
double calcularPotencia(double base, int exponente) {
    return (exponente >= 0) ? pow(base, exponente) : 0.0;
}

// Determinar Números Primos
bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; ++i)
        if (numero % i == 0) return false;
    return true;
}

// Año Bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Menú de Opciones
void menu() {
    int opcion;
    do {
        std::cout << "\nMenu:\n1. Operadores y Variables\n2. Calcular Potencia\n3. Determinar si un Numero es Primo\n4. Determinar si un Año es Bisiesto\n5. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                operadoresYVariables();
                break;
            case 2: {
                double base;
                int exponente;
                std::cout << "Ingrese la base: ";
                std::cin >> base;
                std::cout << "Ingrese el exponente: ";
                std::cin >> exponente;
                std::cout << "El resultado es: " << calcularPotencia(base, exponente) << std::endl;
                break;
            }
            case 3: {
                int numero;
                std::cout << "Ingrese un numero entero: ";
                std::cin >> numero;
                std::cout << numero << (esPrimo(numero) ? " es" : " no es") << " un numero primo." << std::endl;
                break;
            }
            case 4: {
                int anio;
                std::cout << "Ingrese un año: ";
                std::cin >> anio;
                std::cout << anio << (esBisiesto(anio) ? " es" : " no es") << " un año bisiesto." << std::endl;
                break;
            }
            case 5:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, ingrese una opcion valida." << std::endl;
        }

    } while (opcion != 5);
}

int main() {
    menu();
    return 0;
}


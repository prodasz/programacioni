#include <iostream>
using namespace std;

int main() {
    // Declarar una variable para almacenar la calificación del examen
    double calificacion;
    // Solicitar al usuario que ingrese la calificación del examen
    cout << "Ingresa la calificación del examen: ";
    // Leer la entrada del usuario
    cin >> calificacion;
    // Verificar si la calificación es válida (entre 0 y 100)
    if (calificacion >= 0 && calificacion <= 100) {
        // Verificar si la calificación es 60 o más
        if (calificacion >= 60) {
            // Imprimir un mensaje indicando que el estudiante aprobó
            cout << "Aprobaste el examen.\n";
        }
        else {
            // Imprimir un mensaje indicando que el estudiante reprobó
            cout << "Reprobaste el examen.\n";
        }
    }
    else {
        // Imprimir un mensaje indicando que la calificación no es válida
        cout << "Calificación no válida.\n";
    }
    return 0;
}

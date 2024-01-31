#include <iostream>
using namespace std;

int main() {
    // Declarar una variable para almacenar la calificaci�n del examen
    double calificacion;
    // Solicitar al usuario que ingrese la calificaci�n del examen
    cout << "Ingresa la calificaci�n del examen: ";
    // Leer la entrada del usuario
    cin >> calificacion;
    // Verificar si la calificaci�n es v�lida (entre 0 y 100)
    if (calificacion >= 0 && calificacion <= 100) {
        // Verificar si la calificaci�n es 60 o m�s
        if (calificacion >= 60) {
            // Imprimir un mensaje indicando que el estudiante aprob�
            cout << "Aprobaste el examen.\n";
        }
        else {
            // Imprimir un mensaje indicando que el estudiante reprob�
            cout << "Reprobaste el examen.\n";
        }
    }
    else {
        // Imprimir un mensaje indicando que la calificaci�n no es v�lida
        cout << "Calificaci�n no v�lida.\n";
    }
    return 0;
}

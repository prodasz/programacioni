#include <iostream>

using namespace std;

int main()
{
    int numero; // Este lo puedes cambiar a numer, num o realmente cualquier palabra JASJASJ
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    // Confirma si el n�mero x, es divisible entre 2
    if (numero % 2)
    {
        cout << "El n�mero " << numero << " es par" << endl;
    }
    else
    {
        cout << "El n�mero " << numero << " no es par" << endl;
    }
    system("pause");
    return 0;
} 

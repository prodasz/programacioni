#include <iostream>

using namespace std;

int main()
{
    int numero; // Este lo puedes cambiar a numer, num o realmente cualquier palabra JASJASJ
    cout << "Ingrese un número: ";
    cin >> numero;

    // Confirma si el número x, es divisible entre 2
    if (numero % 2)
    {
        cout << "El número " << numero << " es par" << endl;
    }
    else
    {
        cout << "El número " << numero << " no es par" << endl;
    }
    system("pause");
    return 0;
} 

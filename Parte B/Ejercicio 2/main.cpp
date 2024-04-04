#include <iostream>
/*Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese
momento el programa debe terminar y mostrar en la salida estándar el número de valores leídos mayores que cero.
Usar una estructura do-while.*/
int main() {
    float numero;

    do {
        std::cout << "\nEligar un número cualquiera: ";
        std::cin >> numero ;

        std::cout << "\nel número elegido es: " << numero ;
    } while (numero != 0);

    std::cout << "\nIngresaste un cero y el programa termino" << std::endl;

    return 0;
}

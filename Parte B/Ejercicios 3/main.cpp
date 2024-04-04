#include <iostream>
#include <math.h>
/*Realice un programa que calcule y muestre en la salida estándar, la suma de los cuadrados de los 10
primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.*/
int main() {
    int numero;
    int sumar;

    for ( int i = 0; i  <= 10; i++) {
        numero = pow(i, 2);
        sumar += numero;
        std::cout << "\nEl número es:" << numero;
    }

    std::cout << "\nEl programa termino" << sumar << std::endl;

    return 0;
}

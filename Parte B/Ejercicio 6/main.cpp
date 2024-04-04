#include <iostream>
#include <stdlib.h>
#include <cmath>
/*Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, sin utilizar la
función pow. Donde num será una base generada de forma aleatoria entre 2 y 42, y exp será ingresada por teclado no
mayor a 5. Usar las librerías stdlib.h y cmath.*/
int main() {
    int num, exp, resultado = 1;

    do {
        num = rand() % 41 + 2;
    } while ( num < 2 || num > 42);

    do{
        std::cout << "Ingresa un exponente del 1 al 5 para "<< num << " " ;
        std::cin >> exp;
    } while (exp < 1 || exp > 5);

    for (int i = 1; i <= exp; i++) {
        resultado = resultado * num;
        std::cout << "\nEl resultado de la operacion es "<<  num << " " << exp << " " << resultado;
    }

    std::cout << "\nEl resultado de la operacion es "<< resultado << std::endl;

    return 0;
}

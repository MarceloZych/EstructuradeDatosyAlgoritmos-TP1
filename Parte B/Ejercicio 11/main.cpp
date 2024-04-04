#include <iostream>
#include <cmath>
 /* Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n */
int main() {
    double suma, potencia, n;

    std::cout << "Elija la cantidad de veces a sumar un exponente ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        potencia = pow(2 , i);
        suma += potencia;
        std::cout << "\nEl valor de la potencia es " << potencia << "\nEl resultado es " << suma;
    }

    return 0;
}
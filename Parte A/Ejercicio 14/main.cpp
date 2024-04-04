#include <iostream>
#include <math.h>
/* Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x
e y: f(x,y) = √𝑥 / 𝑦2−1*/
int main() {
    double x, y;

    std::cout << "Escriba el valor de x: ";
    std::cin >> x;
    std::cout << "Escriba el valor de y: ";
    std::cin >> y;

    double resultadoFuncion = (sqrt(x)) / (pow(y, 2) - 1);

    std::cout << "\nEl resultado de la funcion es: " << resultadoFuncion << std::endl;

    return 0;
}

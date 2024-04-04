#include <iostream>
// Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
int main() {
    int num, suma = 1;

    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    for (int i = 1; i < num; i++) {
        if (i % 2) {
            suma -= i;
            std::cout << "\nEl numero es " << suma << " valor de i " << i;
        } else {
            suma += i;
            std::cout << "\nEl numero es " << suma<< " valor de i " << i;
        }
    }

    return 0;
}

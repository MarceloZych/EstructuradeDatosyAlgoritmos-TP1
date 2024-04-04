#include <iostream>
/*Escriba un programa que calcule el valor de: 1! +2! + 3! + ... + n! (suma de factoriales).*/
int main() {
    int n1, factorial = 1;

    std::cout << "Elija un factorial a calcular: ";
    std::cin >> n1;

    if (n1 < 0) {
        std::cout << "El factorial no se puede realizar";
    } else if (n1 == 0) {
        factorial = 1;
        std::cout << "\nEl factorial es: " << factorial;
    } else {
        for (int i = 1; i <= n1; i++) {
            factorial *= i;
            std::cout << "\nEl factorial es: " << factorial;
        }
    }

    int n2, factorial1 = 1;

    std::cout << "\nElija otro factorial a calcular: ";
    std::cin >> n2;

    if (n2 < 0) {
        std::cout << "El factorial no se puede realizar";
    } else if (n2 == 0) {
        factorial1 = 1;
        std::cout << "\nEl factorial es: " << factorial1;
    } else {
        for (int i = 1; i <= n2; i++) {
            factorial1 *= i;
            std::cout << "\nEl factorial es: " << factorial1;
        }
    }

    int sumarFactoriales = factorial + factorial1;

    std::cout << "\nLa suma de los factoriales es: " << sumarFactoriales << std::endl;

    return 0;
}

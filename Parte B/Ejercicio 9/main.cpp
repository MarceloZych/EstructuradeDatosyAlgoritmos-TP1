#include <iostream>

/* Escriba un programa que calcule el valor de: 1 * 2 * 3 *...* n (factorial)*/
int main() {
    int n, factorial = 1;

    std::cout << "Elija un factorial a calcular: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "El factorial no se puede realizar";
    } else if (n == 0) {
        factorial = 1;
        std::cout << "\nEl factorial es: " << factorial;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
            std::cout << "\nEl factorial es: " << factorial;
        }
    }

    // std::cout << "Hello, World!" << std::endl;
    return 0;
}

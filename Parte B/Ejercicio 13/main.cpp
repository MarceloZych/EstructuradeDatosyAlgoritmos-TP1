#include <iostream>
/* Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 1..hasta n. Ej.: si
n=13, nos muestra la salida: Fibonacci(13)= 1 1 2 3 5 8 13. */
int main() {
    int n, fibonacci = 0,fibonacci2 = 1 ;

    std::cout << "Ingrese un numero para la secuencia Fibonacci ";
    std::cin >> n;

    for (int i = 1; i < n; i++) {
        int suma = fibonacci + fibonacci2;
        fibonacci = fibonacci2;
        fibonacci2 = suma;
        std::cout << "El numero es: " << fibonacci << std::endl;
    }

    return 0;
}

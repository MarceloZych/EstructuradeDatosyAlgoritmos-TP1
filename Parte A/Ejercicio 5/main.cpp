#include <iostream>
/*
 * Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables.
*/
int main() {
    int a = 7, b = 9, c = 5, x;

    std::cout << "valores anteriores: a = "<< a << ",b = "<< b << ",c = "<< c << std::endl;

    x = a;
    a = b;
    b = c;
    c = x;

    std::cout << "nuevo valor: a = "<< a << ",b = "<< b << ",c = "<< c << std::endl;

    return 0;
}

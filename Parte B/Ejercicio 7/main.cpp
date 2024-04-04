#include <iostream>
/*A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
 B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1 */
int main() {
    // A
    int n = 5 ,i = 1 ,suma = 0;

    while (i <= n) {
       suma += i;
        i++;
        std::cout << "\nResultado de A: "<< suma;
    }

    // B
    int nB = 5 ,sumaB = 0;

    for (int y = 1; y <= nB; y++) {
        sumaB += y;
        std::cout << "\nResultado de B: "<< sumaB;
    }

    return 0;
}

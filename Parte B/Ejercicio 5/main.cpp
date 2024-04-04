#include <iostream>
/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se
introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.*/
int main() {
    int num1, num2, resultado;

    do {
        std::cout << "\nIntoduzca un numero entre 20 y 30: ";
        std::cin >> num1;
        std::cout << "\nIntoduzca otro numero entre 20 y 30: ";
        std::cin >> num2;
    } while ( (num1 < 20 || num2 < 20) || (num1 > 30 || num2 > 30));

    if (num1 && num2) {
        resultado = num1+num2;
    }
    std::cout << "\nEl resultado es " << resultado << std::endl;

    return 0;
}

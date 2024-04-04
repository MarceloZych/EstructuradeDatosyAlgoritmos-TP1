#include <iostream>
/*Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su
suma, resta, multiplicación y división.
*/
int main() {
    double num1, num2, suma, resta, multiplicacion, division;

    std::cout << "El primer número es: ";
    std::cin >> num1;
    std::cout << "El segundo número es: ";
    std::cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    std::cout << "\nEl resultado de la suma es: " << suma << "\nEl resultado de la resta es: " << resta
            << "\nEl resultado de la multiplicación es: " << multiplicacion << "\nEl resultado de la división es: " << division << std::endl;

    return 0;
}

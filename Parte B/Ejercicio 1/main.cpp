#include <iostream>
/*: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección*/
int main() {
    int entero, resultado;

    std::cout << "ingrese un número del 1 al 10 para realizar su multiplicacion: ";
    std::cin >> entero;

    if (entero < 0 || entero > 10){
        std::cout << "\nLa cuenta no se puede realizar";
    }

    for ( int i = 1 ; i <= 10; i++) {
        resultado = entero * i;
        std::cout << "\nEl resultado de " << entero << " multiplicado por " << i << " es " << resultado;
    }

    return 0;
}

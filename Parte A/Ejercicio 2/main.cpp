#include <iostream>

/*
 * Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida
estándar, el precio del producto al aplicarle el IVA.
 */
int main() {
    float precio;

    std::cout<< "Cuál es el precio del producto: "; std::cin >> precio;

    float iva = precio * 21 / 100;
    float precioFinal = iva + precio;


    std::cout << "El precio del producto con IVA es: "<< precioFinal << std::endl;

    return 0;
}

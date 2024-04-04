#include <iostream>
#include <math.h>
/* Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2
+ bx + c = 0, teniendo en cuenta que: f(a,b,c) =−𝑏+√(𝑏2−4𝑎𝑐) */
int main() {
    double a, b,c ;

    std::cout << "Ingrese el valor del termino al cuadrado" ;
    std::cin >> a;
    std::cout << "Ingrese el valor del termino sin potencia" ;
    std::cin >> b;
    std::cout << "Ingrese el valor del termino independiente" ;
    std::cin >> c;

    double ecuacionCuadratica = pow(b, 2) - 4 * a * c;

    if (ecuacionCuadratica > 0) {
        double primerResultado = (-b + sqrt(ecuacionCuadratica)) / 2 * a;
        double segundoResultado = (-b - sqrt(ecuacionCuadratica)) / 2 * a;
        std::cout << "Los resultados son: " << primerResultado << " y " << segundoResultado << std::endl;
    } else if (ecuacionCuadratica == 0) {
        double unicoResultado = -b / 2 * a;
        std::cout << "El resultados es: " << unicoResultado << std::endl;
    } else {
        std::cout << "La ecuación de segundo grado no se puede resolver " << std::endl;
    }

    return 0;
}

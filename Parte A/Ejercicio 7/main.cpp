#include <iostream>
#include <math.h>
/* Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba
en la salida estándar: A) perímetro y superficie y B) su hipotenusa.
*/
int main() {
    double catetoUno, catetoDos, hipotenusa, perimetro, superficie;

    std::cout<< "Coleque el primer cateto de un triangulo rectangulo: ";
    std::cin >> catetoUno;
    std::cout<< "Coleque el segundo cateto de un triangulo rectangulo: ";
    std::cin >> catetoDos;

    hipotenusa = sqrt(pow(catetoUno, 2) + pow(catetoDos, 2));
    perimetro = catetoUno + catetoDos + hipotenusa;
    superficie = (catetoUno * catetoDos) / 2;

    std::cout << "\nEl prerimetro es: " << perimetro << std::endl;
    std::cout << "La superficie es: " << superficie << std::endl;
    std::cout << "La hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}

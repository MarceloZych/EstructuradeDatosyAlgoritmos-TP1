#include <iostream>
#include <iomanip>
/*Escribe la siguiente expresión en C++. Use precisión para redondear la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))*/
int main() {
    double a = 9, b = 3;
    double ejercicioA = (a/b) + 1;
    std::cout << "El resultado del ejercicio A es: " << std::fixed << std::setprecision(2) << ejercicioA << std::endl;

    double a1, b1 ,c1, d1;
    double ejercicioB = (a1 + b1)/(c1 + d1);
    std::cout << "El resultado del ejercicio A es: " << std::fixed << std::setprecision(2) << ejercicioB << std::endl;

    double a2, b2 ,c2, d2, e2, f2;
    double ejercicioC = (a2+(b2/c2)/d2+(e2/f2));
    std::cout << "El resultado del ejercicio A es: " << std::fixed << std::setprecision(2) << ejercicioC << std::endl;

    double a3, b3 ,c3, d3;
    double ejercicioD = a3 + (b3 / (c3 - d3));
    std::cout << "El resultado del ejercicio A es: " << std::fixed << std::setprecision(2) << ejercicioD << std::endl;

   return 0;
}

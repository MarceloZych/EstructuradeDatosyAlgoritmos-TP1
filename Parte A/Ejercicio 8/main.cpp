#include <iostream>
/* La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que
cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su
nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar. */
int main() {
    double practicas, teorica, participacion, notaFinal;

    std::cout<< "La nota de practicas es: ";
    std::cin>>practicas;
    std::cout<< "La nota teorica es: ";
    std::cin>>teorica;
    std::cout<< "La nota de participacion es: ";
    std::cin>>participacion;

    notaFinal = ((practicas * 30) / 100) + ((teorica * 60) / 100) + ((participacion * 10) / 100);

    std::cout<<"La nota final es: "<< notaFinal << std::endl;

    return 0;
}

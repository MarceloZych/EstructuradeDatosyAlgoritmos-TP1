#include <iostream>
#include <ctime>
/*Escriba un programa que lea de la entrada estándar el nombre de una persona en un arreglo de
caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.*/
int main() {
    char nombre[20];
    int edad, anioNacimiento, anioAcutal;

    std::cout <<"¿Cuál es tu nombre ?";
    std::cin >> nombre;
    std::cout <<"¿Cuál es tu año de nacimiento ?";
    std::cin >> anioNacimiento;

    time_t now = time(0);
    tm *ltm = localtime(&now);
    anioAcutal = 1900 + ltm -> tm_year;

    edad = anioAcutal- anioNacimiento;

    std::cout << "\nLa edad de " << nombre << " es " << edad << " años" << std::endl;

    return 0;
}

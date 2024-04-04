#include <iostream>
/* Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas,
minutos y segundos.
6.2: Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para segundos, como
resultado lo transforma y muestra el total a cantidad de segundos.*/

int main() {
    // 1
    int x, minutos, horas, segundos;

    std::cout<< "Ingrese una cantidad de segundos: ";
    std::cin>>x;

    horas = x / 3600;
    segundos = x % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    std::cout << "La cantidad de horas es: " << horas << std::endl;
    std::cout << "La cantidad de minutos es: " << minutos << std::endl;
    std::cout << "La cantidad de segundos es: " << segundos << std::endl;

    // 2
    int segundosSeleccionados, minutosAConvertir, horasAConvertir, totalDeSegundos;

    std::cout<< "Ingrese una cantidad de horas a convertir: ";
    std::cin>>horasAConvertir;
    std::cout<< "Ingrese una cantidad de minutos a convertir: ";
    std::cin>>minutosAConvertir;
    std::cout<< "Ingrese una cantidad de segundos a sumar: ";
    std::cin>>segundosSeleccionados;

    totalDeSegundos = horasAConvertir * 3600 + minutosAConvertir * 60 + segundosSeleccionados;

    std::cout << "La cantidad de segundos convertidos son: " << totalDeSegundos << std::endl;

    return 0;
}

#include <iostream>
/*Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. Luego determine y
muestre cuál de ellas llego primero.*/
int main() {
    char nombreNadadorUno[20], nombreNadadorDos[20];
    int tiempoNadadorUno, tiempoNadadorDos;

    std::cout<<"\nEl nombre de la nadadora uno es: ";
    std::cin>>nombreNadadorUno;
    std::cout<<"\nEl tiempo de la nadadora uno es: ";
    std::cin>>tiempoNadadorUno;

    std::cout<<"\nEl nombre de la nadadora dos es: ";
    std::cin>>nombreNadadorDos;
    std::cout<<"\nEl tiempo de la nadadora uno es: ";
    std::cin>>tiempoNadadorDos;

    if (tiempoNadadorUno < tiempoNadadorDos) {
        std::cout << nombreNadadorUno << " lego primero!"<< std::endl;
    } else if (tiempoNadadorUno > tiempoNadadorDos){
        std::cout << tiempoNadadorDos << " llego primero!"<< std::endl;
    } else {
      std::cout << "Hubo un empate" << std::endl;
    }

    std::cout<<"El nadador uno es: "<<nombreNadadorUno<<std::endl;

    return 0;
}

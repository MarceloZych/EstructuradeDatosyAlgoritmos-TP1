#include <iostream>

/*Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida
será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a 2 cifras.*/

int main() {
    float dinero;
    std::cout<<"Ingrese el dinero que quiere convertir a dolares: ";
    std::cin>>dinero;

    double conversionADolar = dinero * 856.92;
    std::cout<<"\nSu dinero en dolares seria: "<<conversionADolar<<std::endl;

    return 0;
}

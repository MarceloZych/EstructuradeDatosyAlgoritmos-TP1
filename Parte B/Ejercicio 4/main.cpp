#include <iostream>
/* Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24
horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/
int main() {
    int hora = 0;
    int temperatura = 20;

    do {
        if ( hora < 12 || hora > 20 ){
            temperatura -= 2;
        } else {
            temperatura += 3;
        }
        std::cout << "\nLa hora actual es "<< hora << " y la temperatura es de " << temperatura;
        hora += 4;
    } while ( hora <= 24 );

    return 0;
}

#include <iostream>

using namespace std;

/*Ejercicio 3.1: Realice un programa que lea de la entrada estándar los siguientes datos de una persona: Edad: dato
de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras leer los datos, el programa
debe mostrarlos en la salida estándar.*/

/*3.2 Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados. Por ejemplo,
introduzca un dato de tipo carácter cuando se espera un dato de tipo entero.
*/
int main() {
    // 3.1
    int edad;
    char sexo[50];
    float altura;

    std::cout << "Escribe tu edad: ";
    std::cin >> edad;
    std::cout << "Escribe el sexo al que perteneces: ";
    std::cin >> sexo;
    std::cout << "Escribe tu altura en cm: ";
    std::cin >> altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<endl;

    // 3.2
    /* me devuelve todo vacio...
     * Escribe el sexo al que perteneces: Escribe tu altura en cm:
    Edad: 0
    Sexo:
    Altura: 0*/

    return 0;
}

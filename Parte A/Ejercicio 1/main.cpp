#include <iostream>
#include <string>

using namespace std;

int main() {
    // A
    string nombre, apellido;

    cout<<"Escriba su nombre: "; cin>>nombre;
    cout<<"\nEscriba su apellido"; cin>>apellido;
    cout<<"\nNombre completo es: "<< nombre+" "+apellido << endl;
    // B

    // este es un comentario de una linea

    /*este es un comentario
     * multilinea */

    // C
    cout<< "Bajar una linea con endl" << endl; // baja una línea utilizando std::endl
    cout<< "Bajar una linea\n con / más n"; // baja una línea utilizando \n
    
    return 0;
}

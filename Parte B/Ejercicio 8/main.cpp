#include <iostream>
/*En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción
el número de: a) Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c)
Alumnos que aprobaron únicamente el último examen.*/
int main() {
    int alumnos = 5;
    int aprobados_todos = 0;
    int aprobados_al_menos_uno = 0;
    int aprobados_ultimo = 0;

    for (int i = 0; i < alumnos; i++) {
        bool examen1, examen2, examen3;

        std::cout << "Ingrese 1 si el alumno " << i + 1 << " aprobó el primer examen, de lo contrario ingrese 0: ";
        std::cin >> examen1;

        std::cout << "Ingrese 1 si el alumno " << i + 1 << " aprobó el segundo examen, de lo contrario ingrese 0: ";
        std::cin >> examen2;

        std::cout << "Ingrese 1 si el alumno " << i + 1 << " aprobó el tercer examen, de lo contrario ingrese 0: ";
        std::cin >> examen3;

        if (examen1 && examen2 && examen3) {
            aprobados_todos++;
        }

        if (examen1 || examen2 || examen3) {
            aprobados_al_menos_uno++;
        }

        if (!examen1 && !examen2 && examen3) {
            aprobados_ultimo++;
        }
    }

    std::cout << "Alumnos que aprobaron todos los exámenes: " << aprobados_todos << std::endl;
    std::cout << "Alumnos que aprobaron al menos un examen: " << aprobados_al_menos_uno << std::endl;
    std::cout << "Alumnos que aprobaron únicamente el último examen: " << aprobados_ultimo << std::endl;

    return 0;
}

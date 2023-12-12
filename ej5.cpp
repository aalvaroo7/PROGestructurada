#include <iostream>
#include <cstring>
struct estudiante { ;
    int edad;
    char nombre[50];
    float promedio;
};

void imprimirEstudiante(estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
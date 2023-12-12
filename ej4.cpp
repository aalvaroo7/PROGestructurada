#include <iostream>
#include <cstring>
struct Estudiante {;
    int edad;
    char nombre[50];
    float promedio;
};
int main() {
    typedef struct Estudiante Estudiante;
    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;
    return 0;
}
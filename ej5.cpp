#include <iostream>
#include <iomanip>
using namespace std;

struct estudiante {
    int edad;
    float promedio;
    string nombre; // Agregado el campo "nombre" como un string
};

void imprimirEstudiante(estudiante est) {
    cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << fixed << setprecision(2) << est.promedio << endl;
}

int main() {
    struct estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    estudiante1.nombre = "Juan"; // Asignando un valor al campo "nombre"
    imprimirEstudiante(estudiante1);
    return 0;
}
//he definido el nombre como float porque si no se puede asignar un nombre a un array de tipo char y entonces
//a la hora de mostrar un nombre pues muestra algo raro como una casa o algo asi
//entonces cambio el tipo de variable a string y ya se puede asignar un nombre y mostrarlo correctamente
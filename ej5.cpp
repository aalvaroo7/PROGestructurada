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
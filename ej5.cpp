
#include <iostream>
#include <iomanip>
using namespace std;

struct estudiante {
    int edad;
    char nombre[50];
    float promedio;
};

void imprimirEstudiante(estudiante est) {
    cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << fixed << setprecision(2) << est.promedio << endl;
}

int main() {
    struct estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    imprimirEstudiante(estudiante1);
    return 0;
}
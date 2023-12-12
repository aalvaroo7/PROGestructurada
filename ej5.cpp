#include <iostream>
#include <cstring>
using namespace std;
struct estudiante { ;
    int edad;
    char nombre[50];
    float promedio;
};
void imprimirEstudiante(estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
int main() {
    struct estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
cout << imprimirEstudiante;
    return 0;
}
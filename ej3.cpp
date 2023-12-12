#include <iostream>
#include <cstring>
using namespace std;
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}
int main(){
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    struct Estudiante estudiante2 = copiarEstudiante(estudiante1);
    cout << " copiado de Nombre: " << estudiante2.nombre << endl;
    cout << " copiado de Edad: " << estudiante2.edad << endl;
    cout << "copiado de Promedio: " << estudiante2.promedio << endl;
    return 0;
}
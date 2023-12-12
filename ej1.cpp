#include <iostream>
#include <cstring>
using namespace std;

struct estudiante {;
    int edad;
    char nombre[50];
    float promedio;
    // parte a)
};
int main() {
    struct estudiante estudiante1;
    estudiante1.edad = 16;
    estudiante1.promedio = 9.8;
    strcpy(estudiante1.nombre, "Juan");
    cout << "Edad: " << estudiante1.edad << endl;
    cout << "Promedio: " << estudiante1.promedio << endl;
    cout << "Nombre: " << estudiante1.nombre << endl;
    //parte b)
    struct estudiante *estudiante2 = (struct estudiante *) malloc(sizeof(struct estudiante));
    strcpy(estudiante2->nombre, "Maria");
    estudiante2->edad = 15;
    estudiante2->promedio = 9.5;
    cout << " Nueva Edad: " << estudiante2->edad << endl;
    cout << "Nuevo Promedio: " << estudiante2->promedio << endl;
    cout << "Nuevo Nombre: " << estudiante2->nombre << endl;
    //parte c)
    struct estudiante *estudiante3 = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3->nombre, estudiante3->edad, estudiante3->promedio);
//parte d)
return 0;
}


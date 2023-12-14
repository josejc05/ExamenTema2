#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};
// Función para mostrar los campos de la estructura Estudiante
void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << " años" << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}
int main() {
    // Crear un objeto de la estructura Estudiante
    Estudiante estudiante1;

    // Asignar valores a los campos
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Llamar a la función mostrarEstudiante para mostrar los campos
    mostrarEstudiante(estudiante1);

    return 0;
}
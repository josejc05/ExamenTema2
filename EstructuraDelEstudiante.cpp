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
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura Materia
struct Materia {
    string nombre;
    float calificacion;
};

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector<Materia> materias; // Lista de materias
};
// Función para agregar una materia al estudiante
void agregarMateria(Estudiante& estudiante, const Materia& materia) {
    estudiante.materias.push_back(materia);
}

// Función para eliminar una materia del estudiante
void eliminarMateria(Estudiante& estudiante, const string& nombreMateria) {
    for (auto it = estudiante.materias.begin(); it != estudiante.materias.end(); ++it) {
        if (it->nombre == nombreMateria) {
            estudiante.materias.erase(it);
            break;
        }
    }
}
// Función para mostrar las materias del estudiante
void mostrarMaterias(const Estudiante& estudiante) {
    cout << "Materias de " << estudiante.nombre << ":" << endl;
    for (const auto& materia : estudiante.materias) {
        cout << "Nombre: " << materia.nombre << ", Calificación: " << materia.calificacion << endl;
    }
}

int main() {
    // Crear un objeto de la estructura Estudiante
    Estudiante estudiante1;

    // Asignar valores a los campos del estudiante
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

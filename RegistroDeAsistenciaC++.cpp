#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura Asistencia
struct Asistencia {
    string fecha;
    string materia;
    string estado;
};

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
    vector<Materia> materias;
    vector<Asistencia> asistencias;

    // Función para registrar la asistencia
    void registrarAsistencia(const string& fecha, const string& materia, const string& estado) {
        Asistencia nuevaAsistencia = {fecha, materia, estado};
        asistencias.push_back(nuevaAsistencia);
    }

    // Función para mostrar la asistencia
    void mostrarAsistencia() const {
        cout << "Registro de Asistencia para " << nombre << ":" << endl;
        for (const auto& asistencia : asistencias) {
            cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia << ", Estado: " << asistencia.estado << endl;
        }
    }
};
int main() {
    // Crear un objeto de la estructura Estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan Perez";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Agregar materias al estudiante
    estudiante1.materias.push_back({"Matemáticas", 9.0});
    estudiante1.materias.push_back({"Historia", 8.0});
    estudiante1.materias.push_back({"Programación", 7.5});
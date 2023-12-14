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

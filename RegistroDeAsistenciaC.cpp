#include <stdio.h>
#include <string.h>

// Definición de la estructura Asistencia
struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[20];
};

// Definición de la estructura Materia
struct Materia {
    char nombre[50];
    float calificacion;
};
// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Materia materias[10];
    int numMaterias;
    struct Asistencia asistencias[50];
    int numAsistencias;

    // Función para registrar la asistencia
    void registrarAsistencia(const char* fecha, const char* materia, const char* estado) {
        if (numAsistencias < 50) {
            snprintf(asistencias[numAsistencias].fecha, sizeof(asistencias[numAsistencias].fecha), "%s", fecha);
            snprintf(asistencias[numAsistencias].materia, sizeof(asistencias[numAsistencias].materia), "%s", materia);
            snprintf(asistencias[numAsistencias].estado, sizeof(asistencias[numAsistencias].estado), "%s", estado);
            numAsistencias++;
        }
    }
    // Función para mostrar la asistencia
    void mostrarAsistencia() const {
        printf("Registro de Asistencia para %s:\n", nombre);
        for (int i = 0; i < numAsistencias; ++i) {
            printf("Fecha: %s, Materia: %s, Estado: %s\n", asistencias[i].fecha, asistencias[i].materia, asistencias[i].estado);
        }
    }
};

int main() {
    // Crear un objeto de la estructura Estudiante
    struct Estudiante estudiante1;
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Juan Perez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    estudiante1.numMaterias = 0;
    estudiante1.numAsistencias = 0;
    // Agregar materias al estudiante
    snprintf(estudiante1.materias[estudiante1.numMaterias].nombre, sizeof(estudiante1.materias[estudiante1.numMaterias].nombre), "Matemáticas");
    estudiante1.materias[estudiante1.numMaterias++].calificacion = 9.0;
    snprintf(estudiante1.materias[estudiante1.numMaterias].nombre, sizeof(estudiante1.materias[estudiante1.numMaterias].nombre), "Historia");
    estudiante1.materias[estudiante1.numMaterias++].calificacion = 8.0;
    snprintf(estudiante1.materias[estudiante1.numMater
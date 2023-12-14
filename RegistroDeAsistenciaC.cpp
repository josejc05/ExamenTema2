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
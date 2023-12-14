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
};

// Función para registrar la asistencia con manejo de errores
int registrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado) {
    // Verificar el formato de la fecha (por ejemplo, debería ser "YYYY-MM-DD")
    if (strlen(fecha) != 10 || fecha[4] != '-' || fecha[7] != '-') {
        printf("Error: Formato de fecha inválido\n");
        return 1; // Código de error: Formato de fecha inválido
    }

    // Verificar si la materia está registrada
    int materiaRegistrada = 0;
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        if (strcmp(estudiante->materias[i].nombre, materia) == 0) {
            materiaRegistrada = 1;
            break;
        }
    }
    if (!materiaRegistrada) {
        printf("Error: Materia no registrada\n");
        return 2; // Código de error: Materia no registrada
    }
    // Registrar la asistencia si no hay errores
    if (estudiante->numAsistencias < 50) {
        snprintf(estudiante->asistencias[estudiante->numAsistencias].fecha, sizeof(estudiante->asistencias[estudiante->numAsistencias].fecha), "%s", fecha);
        snprintf(estudiante->asistencias[estudiante->numAsistencias].materia, sizeof(estudiante->asistencias[estudiante->numAsistencias].materia), "%s", materia);
        snprintf(estudiante->asistencias[estudiante->numAsistencias].estado, sizeof(estudiante->asistencias[estudiante->numAsistencias].estado), "%s", estado);
        estudiante->numAsistencias++;
    }

    return 0; // Éxito
}

// Función para mostrar la asistencia
void mostrarAsistencia(const struct Estudiante* estudiante) {
    printf("Registro de Asistencia para %s:\n", estudiante->nombre);
    for (int i = 0; i < estudiante->numAsistencias; ++i) {
        printf("Fecha: %s, Materia: %s, Estado: %s\n", estudiante->asistencias[i].fecha, estudiante->asistencias[i].materia, estudiante->asistencias[i].estado);
    }
}
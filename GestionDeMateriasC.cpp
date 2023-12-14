#include <stdio.h>
#include <string.h>

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
};
// Función para agregar una materia al estudiante
void agregarMateria(struct Estudiante* estudiante, const char* nombre, float calificacion) {
    if (estudiante->numMaterias < 10) {
        strncpy(estudiante->materias[estudiante->numMaterias].nombre, nombre, sizeof(estudiante->materias[estudiante->numMaterias].nombre));
        estudiante->materias[estudiante->numMaterias].calificacion = calificacion;
        estudiante->numMaterias++;
    }
}

// Función para eliminar una materia del estudiante
void eliminarMateria(struct Estudiante* estudiante, const char* nombreMateria) {
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        if (strcmp(estudiante->materias[i].nombre, nombreMateria) == 0) {
            for (int j = i; j < estudiante->numMaterias - 1; ++j) {
                estudiante->materias[j] = estudiante->materias[j + 1];
            }
            estudiante->numMaterias--;
            break;
        }
    }
}

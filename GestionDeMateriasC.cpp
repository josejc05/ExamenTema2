#include <stdio.h>
#include <string.h>

// Definición de la estructura Materia
struct Materia {
    char nombre[50]; // Asumimos un nombre de hasta 50 caracteres
    float calificacion;
};

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Materia materias[10]; // Lista de materias
    int numMaterias;
};
// Función para agregar una materia al estudiante
void agregarMateria(struct Estudiante* estudiante, const struct Materia* materia) {
    if (estudiante->numMaterias < 10) {
        estudiante->materias[estudiante->numMaterias++] = *materia;
    }
}

// Función para eliminar una materia del estudiante
void eliminarMateria(struct Estudiante* estudiante, const char* nombreMateria) {
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        if (strcmp(estudiante->materias[i].nombre, nombreMateria) == 0) {
            // Eliminar la materia moviendo las restantes
            for (int j = i; j < estudiante->numMaterias - 1; ++j) {
                estudiante->materias[j] = estudiante->materias[j + 1];
            }
            estudiante->numMaterias--;
            break;
        }
    }
}
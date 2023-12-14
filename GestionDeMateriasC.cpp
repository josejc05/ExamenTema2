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
// Función para mostrar las materias del estudiante
void mostrarMaterias(const struct Estudiante* estudiante) {
    printf("Materias de %s:\n", estudiante->nombre);
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        printf("Nombre: %s, Calificación: %.2f\n", estudiante->materias[i].nombre, estudiante->materias[i].calificacion);
    }
}

int main() {
    // Crear un objeto de la estructura Estudiante
    struct Estudiante estudiante1;

    // Asignar valores a los campos del estudiante
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Juan Perez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    estudiante1.numMaterias = 0;
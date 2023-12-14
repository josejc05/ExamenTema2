#include <stdio.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50]; // Asumimos un nombre de hasta 50 caracteres
    int edad;
    float promedio;
};

// Función para mostrar los campos de la estructura Estudiante
void mostrarEstudiante(const struct Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d años\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}
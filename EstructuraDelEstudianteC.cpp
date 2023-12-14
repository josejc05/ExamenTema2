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
int main() {
    // Crear un objeto de la estructura Estudiante
    struct Estudiante estudiante1;

    // Asignar valores a los campos
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Juan Perez");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Llamar a la función mostrarEstudiante para mostrar los campos
    mostrarEstudiante(&estudiante1);

    return 0;
}
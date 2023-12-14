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
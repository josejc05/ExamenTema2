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
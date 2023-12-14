#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura Materia
struct Materia {
    string nombre;
    float calificacion;
};

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector<Materia> materias; // Lista de materias
};
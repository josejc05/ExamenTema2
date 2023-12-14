#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura Asistencia
struct Asistencia {
    string fecha;
    string materia;
    string estado;
};

// Excepción personalizada para errores en el formato de fecha
class FormatoFechaInvalido : public invalid_argument {
public:
    FormatoFechaInvalido(const string& mensaje) : invalid_argument(mensaje) {}
};
// Excepción personalizada para materias no registradas
class MateriaNoRegistrada : public logic_error {
public:
    MateriaNoRegistrada(const string& mensaje) : logic_error(mensaje) {}
};

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
    vector<Materia> materias;
    vector<Asistencia> asistencias;
    // Función para registrar la asistencia con manejo de excepciones
    void registrarAsistencia(const string& fecha, const string& materia, const string& estado) {
        try {
            // Verificar el formato de la fecha (por ejemplo, debería ser "YYYY-MM-DD")
            if (fecha.length() != 10 || fecha[4] != '-' || fecha[7] != '-')
                throw FormatoFechaInvalido("Formato de fecha inválido");

            // Verificar si la materia está registrada
            bool materiaRegistrada = false;
            for (const auto& mat : materias) {
                if (mat.nombre == materia) {
                    materiaRegistrada = true;
                    break;
                }
            }
            if (!materiaRegistrada)
                throw MateriaNoRegistrada("Materia no registrada");
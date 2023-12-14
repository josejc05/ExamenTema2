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
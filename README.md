# ExamenTema2
https://github.com/josejc05/ExamenTema2.git

Parte 1:
1. b)
2. a)
3. d)
4. b)

Parte 2:

Estrcutura del Estudiante:

1. En este código en C++, se ha definido la estructura Estudiante con campos como nombre, edad, y promedio. La función mostrarEstudiante imprime los valores de un objeto Estudiante pasado como parámetro. En la función main, se crea un objeto estudiante1, se le asignan valores y se llama a mostrarEstudiante para imprimir la información del estudiante. El programa muestra por consola el nombre "Juan Perez", la edad 20 y un promedio de 8.5 para el estudiante1.

2. En este código en C, se define una estructura llamada Estudiante con campos como nombre (un array de caracteres de hasta 50), edad, y promedio. La función mostrarEstudiante toma un puntero a una estructura Estudiante y utiliza printf para imprimir los campos formatados. En la función main, se crea un objeto de la estructura Estudiante llamado estudiante1, se le asignan valores utilizando snprintf para manejar el nombre como una cadena de caracteres, y finalmente, se llama a mostrarEstudiante pasando la dirección de estudiante1. El programa muestra por la consola el nombre "Juan Perez", la edad 20 y un promedio de 8.5 para el estudiante1. Se utiliza snprintf para evitar posibles desbordamientos de memoria al manejar cadenas de caracteres.

3. La principal diferencia entre las implementaciones en C++ y C para la estructura de Estudiante y la función mostrarEstudiante reside en el manejo de cadenas y las funciones de entrada/salida. En C++, se utiliza el tipo de dato string y las funciones cout y endl, ofreciendo una sintaxis más sencilla y orientada a objetos. En C, se emplean arreglos de caracteres y printf, con la necesidad de especificar el tamaño máximo para las cadenas. La elección de bibliotecas también difiere, con C++ utilizando <iostream> y <string>, mientras que C emplea la biblioteca estándar <stdio.h>.

Gestión de Materias:

1. En este código en C++, se define una estructura Materia con campos como nombre y calificación, y otra estructura Estudiante que incluye campos como nombre, edad, promedio y una lista de Materia. Se han implementado funciones para agregar, eliminar y mostrar materias para un estudiante. En la función main, se crea un objeto de la estructura Estudiante llamado estudiante1, se le asignan valores y se agregan tres materias. Luego, se muestra la lista de materias, se elimina la materia "Historia" y se muestra la lista actualizada. El programa ilustra la gestión de materias para un estudiante y utiliza un enfoque de programación orientada a objetos con vectores para almacenar las materias.

2. En este código en C, se definen dos estructuras: Materia con campos como nombre y calificación, y Estudiante que incluye campos como nombre, edad, promedio, un array de Materia y un contador numMaterias. Se han implementado funciones para agregar y eliminar materias para un estudiante. En la función main, se crea un objeto de la estructura Estudiante llamado estudiante1, se le asignan valores y se agregan tres materias. Luego, se muestra la lista de materias, se elimina la materia "Historia" y se muestra la lista actualizada. El programa demuestra la gestión de materias para un estudiante y utiliza arreglos de caracteres para manejar los nombres de las materias.

Registro de Asistencia:

1. En este código en C++, se define la estructura Estudiante con campos como nombre, edad, promedio, y vectores para almacenar materias y asistencias. La función registrarAsistencia añade registros de asistencia con fecha, materia y estado, mientras que mostrarAsistencia imprime el registro para un estudiante. En el main, se crea un estudiante, se le asignan materias y se registran asistencias. El programa demuestra la gestión de materias y asistencias de un estudiante.

2. En este código en C, se definen tres estructuras para manejar la información de asistencia y materias de un estudiante. La estructura Estudiante incluye arreglos para almacenar materias y asistencias, y se implementan funciones para registrar y mostrar la asistencia. En el main, se crea un objeto de la estructura Estudiante llamado estudiante1, se le asignan valores, se agregan tres materias y se registran asistencias para cada materia en diferentes fechas con sus respectivos estados. Finalmente, se muestra por consola el registro de asistencia del estudiante1. El programa demuestra la gestión de materias y asistencias en un entorno académico utilizando C.

Manejo de Excepciones:

1. Este código en C++ define estructuras para manejar información de asistencia y materias de un estudiante, incluyendo excepciones personalizadas para errores en el formato de fecha y materias no registradas. La función registrarAsistencia en la estructura Estudiante utiliza manejo de excepciones para validar la fecha y la existencia de la materia antes de agregar la asistencia. En el main, se crea un estudiante, se le asignan valores y se registran asistencias con errores de formato de fecha y una materia no registrada. El programa demuestra el uso de excepciones y muestra el registro de asistencia del estudiante por consola.

2. Este código en C define estructuras para manejar información de asistencia y materias de un estudiante. La función registrarAsistencia permite verificar el formato de la fecha y la existencia de la materia antes de registrar la asistencia, retornando códigos de error en caso de problemas. En el main, se crea un estudiante, se le asignan valores y se intenta registrar asistencias con errores de formato de fecha y una materia no registrada. El programa imprime mensajes indicando si el registro de asistencia fue exitoso o si ocurrieron errores, y finalmente muestra el registro de asistencia del estudiante por consola.

Conclusión:

· Dada la diversidad estudiantil, la necesidad de modernización y eficiencia en la gestión académica del "Centro Global de Estudios Avanzados" (CGEA), y considerando la experiencia del equipo en C y C++, recomendaría C++ para la implementación del nuevo sistema. C++ ofrece abstracciones avanzadas, programación orientada a objetos y características modernas que pueden facilitar la gestión de la diversidad estudiantil y proporcionar flexibilidad para futuras expansiones del sistema.

· Para la siguiente fase del proyecto en el "Centro Global de Estudios Avanzados" (CGEA), se recomienda un análisis detallado de requisitos, la planificación de una arquitectura escalable y segura, la creación de una interfaz de usuario intuitiva considerando la diversidad, pruebas rigurosas de rendimiento y calidad, documentación exhaustiva, capacitación efectiva del personal, implementación de medidas de respaldo y recuperación, y la promoción de un ciclo constante de retroalimentación con los usuarios finales para ajustes continuos y mejoras del sistema. Estas medidas garantizarán la eficiencia, seguridad y adaptabilidad del nuevo sistema de gestión académica

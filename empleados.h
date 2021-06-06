#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *nombre;
    char *apellidos;
    float sueldo;
} Empleado;

//Empleado vendedor;

//Procedimientos
void almacenarNombre(char *n);
void almacenarApellidos(char *a);
void almacenarSueldoAnual(float s);

void mostrarAgradecimientos();
#include<stdio.h>
#include"empleados.h"

int main (void){
    char nombreTemporal[100];
    char apellidosTemporal[250];
    float sueldoAnualTemporal;

    puts("Por favor, introduce la siguiente información:");
    printf("-Nombre: ");
    gets(nombreTemporal);
    almacenarNombre(nombreTemporal);

    printf("-Apellidos: ");
    gets(apellidosTemporal);
    almacenarApellidos(apellidosTemporal);

    printf("-Apellidos: ");
    gets(apellidosTemporal);
    almacenarSueldoAnual(sueldoAnualTemporal);

    mostrarAgradecimientos();
    
    return 0;
}
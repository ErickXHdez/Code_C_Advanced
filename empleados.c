#include<stdio.h>

#include "empleados.h"

FILE *vendedor;

void almacenarNombre(char *n){
    vendedor = fopen("empleado.txt","at");
    if(vendedor != NULL){
        fputs(n,vendedor);
        fputs("\n",vendedor);
    }
    fclose(vendedor);
    
}
void almacenarApellidos(char *a){
    vendedor = fopen("empleado.txt","at");
    if(vendedor != NULL){
        fputs(a,vendedor);
        fputs("\n",vendedor);
    }
    fclose(vendedor);
}
void almacenarSueldoAnual(float s){
    vendedor = fopen("empleado.txt","at");
    if(vendedor != NULL){
        fprintf(vendedor,"%f",s);
        fputs("\n",vendedor);
    }
    fclose(vendedor);
}
void mostrarAgradecimientos(){
    char mensaje[250]="Gracias por la información";
    char nombre[150];

    vendedor = fopen("empleado.txt","rt");
    fgets(nombre,300,vendedor);

    strcat(mensaje,nombre);
    puts(mensaje);
    fclose(vendedor);
}
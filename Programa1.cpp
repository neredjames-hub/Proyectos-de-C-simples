// Programa de calculo de promedio de un estudiante 
#include <stdio.h>
#include <string.h>
int main()
{ 
// inicio del programa 
// declaración de variable
char nombre[30];


float calificacion_uno, calificacion_tres, calificacion_dos, promedio;

// inicio del programa 
printf("Ingresar el nombre del estudiante:\n");
    scanf("%s",&nombre);
printf("Ingresar la primera calificación:\n");
    scanf("%f", &calificacion_uno);
printf("Ingresar la segunda calificación:\n");
    scanf("%f", &calificacion_dos);
printf("Ingresar la tercera calificación:\n");
    scanf("%f", &calificacion_tres);
promedio= (calificacion_uno + calificacion_dos + calificacion_tres) /3;

printf("El nombre del estudiante es:%s\n", nombre);
printf("El promedio del estudiante es:\n%.2f", promedio);

return 0;
}
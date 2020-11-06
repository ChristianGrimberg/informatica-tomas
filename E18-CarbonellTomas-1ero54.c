/*
Utilización de las funciones STRCPY(), STRLEN(), STRCAT() y STRCMP()
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONG 20
#define CANT_NOM 5

void main()
{
    char cadena1[CANT_NOM][LONG] = {"Tomas", "Benja", "Alma", "Lilia", "Naty"};
    char cadena2[LONG];
    int longitud;
    char cadena3[LONG*CANT_NOM] = {""};
    char cadena4[LONG] = {"Lucas"};

    strcpy(cadena2,"Lucas");

    printf("Hola %s\n",cadena1[0]);
    printf("Hola %s\n",cadena2);

    for (int i = 0; i < CANT_NOM; i++)
    {
        longitud = strlen(cadena1[i]);
        printf("El nombre %s tiene %i caracteres\n", cadena1[i], longitud);
    }

    for (int i = 0; i < CANT_NOM; i++)
    {
        strcat(cadena3,cadena1[i]);
    }
    
    printf("Todos los nombres juntos: %s\n",cadena3);

    if(strcmp(cadena3, cadena4) == 0)
    {
        printf("Los nombres son iguales\n");
    }
    else
    {
        printf("Los nombres son distintos: %i\n", strcmp(cadena3,cadena4));
    }
}
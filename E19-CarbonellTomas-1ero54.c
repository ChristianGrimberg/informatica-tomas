/*
Se leen dos cadenas de menos de 30 letras, se debe indicar si están ordenadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONGITUD 30
#define CANT_CADENAS 2

void main()
{
    char cadena[CANT_CADENAS][LONGITUD];
    int j;
    char letraActual;
    char letraAnterior;

    for (int i = 0; i < CANT_CADENAS; i++)
    {
        printf("Ingrese la cadena %i: ", i + 1);
        scanf("%s", &cadena[i]);

        j = 0;

        letraAnterior = cadena[i][j];
        letraActual = letraAnterior;

        while(letraActual != '\0')
        {
            j++;
            letraActual = cadena[i][j];
            if(letraActual<letraAnterior && letraActual != '\0')
            {
                printf("La cadena no esta ordenada.\n");
                break;
            }
            letraAnterior = letraActual;
        }

        if(j == strlen(cadena[i]))
        {
            printf("La cadena esta ordenada.\n");
        }
    }
}
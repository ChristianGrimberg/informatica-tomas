/*
Del registro de partes meteorológico, de un mes de 30 días, 
se registra la fecha, temperatura máxima y temperatura mínima. 

Diseñar un algoritmo que permita informar:
    * El día más frío y cuál fue su temperatura.
    * El día más cálido y cuál fue su temperatura.
*/
#include <stdio.h>
#include <stdlib.h>
#define MES 30

void main()
{
    float maxima;
    float minima;
    float temperaturaMasCalida;
    float temperaturaMasFria;
    int diaMasCalido;
    int diaMasFrio;

    for (int dia = 1; dia <= MES; dia++)
    {
        system("clear");
        printf("Dia %i: Ingrese la temperatura minima: ", dia);
        scanf("%f", &minima);
        printf("Dia %i: Ingrese la temperatura maxima: ", dia);
        scanf("%f", &maxima);

        while (maxima < minima)
        {
            printf("Ingrese la temperatura maxima mayor a la minima: ");
            scanf("%f", &maxima);
        }

        if(dia == 1)
        {
            temperaturaMasCalida = maxima;
            temperaturaMasFria = minima;
            diaMasCalido = dia;
            diaMasFrio = dia;
        }
        else
        {
            if(maxima > temperaturaMasCalida)
            {
                temperaturaMasCalida = maxima;
                diaMasCalido = dia;
            }

            if(minima < temperaturaMasFria)
            {
                temperaturaMasFria = minima;
                diaMasFrio = dia;
            }
        }
    }

    printf("El dia mas calido fue el %i y la temperatura fue de %.2f\n", diaMasCalido, temperaturaMasCalida);
    printf("El dia mas frio fue el %i y la temperatura fue de %.2f\n", diaMasFrio, temperaturaMasFria);
}
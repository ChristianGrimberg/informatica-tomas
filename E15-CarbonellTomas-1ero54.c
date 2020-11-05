/*
Ingresar una serie de números enteros debiéndose averiguar la cantidad de enteros positivos y enteros negativos. 
Realizar la sumatoria, y si el resultado es positivo, mostrar la cantidad de números positivos y si es negativo, mostrar el resultado de la suma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char opcion;
    int numero;
    int positivos;
    int negativos;
    int sumatoria;

    opcion = '\0';
    positivos = 0;
    negativos = 0;
    sumatoria = 0;

    while(toupper(opcion)!='N')
    {
        printf("Ingrese un numero entero: ");
        scanf("%i",&numero);

        if (numero > 0)
        {
            positivos++;
        }
        else
        {
            if (numero < 0)
            {
                negativos++;
            }           
        }

        sumatoria+=numero;
        
        
        printf("Desea continuar? N para salir: ");
        __fpurge(stdin);
        scanf("%c",&opcion);
    }

    if(sumatoria > 0)
    {
        printf("La cantidad de numeros positivos es %i\n",positivos);
    }
    else
    {
        if(sumatoria < 0)
        {
            printf("El resultado de la suma es %i\n",sumatoria);
        }
    }
    
}
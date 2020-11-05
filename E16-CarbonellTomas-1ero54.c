/*
Pedir al operador que ingrese 20 números enteros mayores a 15, mostrar por pantalla, 
la suma, el promedio, la cantidad de números pares y la cantidad de números impares ingresados.
*/

#include <stdlib.h>
#include <stdio.h>
#define CANTIDAD 3

void main()
{
    int numero;
    float promedio;
    int pares;
    int impares;
    int acumulador;

    numero = 0;
    acumulador = 0;
    pares = 0;
    impares = 0;

    for (int i = 0; i < CANTIDAD; i++)
    {
        printf("Ingrese un numero mayor a 15: ");
        scanf("%i",&numero);
        
        while (numero <= 15)
        {
            printf("Error. Intente nuevamente: ");
            scanf("%i", &numero);
        }

        acumulador+=numero;

        if(numero%2==0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        
    }

    promedio = (float)acumulador/(float)CANTIDAD;
    
    printf("La suma de los valores ingresados es: %i\n", acumulador);
    printf("El promedio de los valores ingresados es: %.2f\n",promedio);
    printf("La cantidad de numeros pares es %i y la cantidad de numeros impares es %i\n", pares, impares);
}
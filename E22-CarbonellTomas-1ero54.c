/*
Se debe un programa que mediante un menú de opciones que nos permita realizar las siguientes acciones:

Ingresar dos números y mostrar la suma de los números ingresados.
Calcular el cuadrado de la suma del punto "a" del menú.
Calcular el promedio de los números ingresados.
Mostrar a todos los resultados.
Salir del programa.
*/
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>

#define CANT_NUM 2

void main()
{
    float numeros[CANT_NUM];
    float suma = 0;
    double cuadrado = 0;
    float promedio = 0;
    float acumulador = 0;
    char opcion;

    do
    {
        system("clear");
        printf("==================MENU PRINCIPAL=================\n");
        printf("a - Ingresar los numeros y obtener la suma\n");
        printf("b - Calular el cuadrado de la suma de los numeros\n");
        printf("c - Calcular el promedio de los numeros\n");
        printf("d - Mostrar todos los resultados\n");
        printf("e - Salir del programa\n");
        printf("=================================================\n");
        printf("Ingrese la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c", &opcion);

        system("clear");

        switch (tolower(opcion))
        {
            case 'a':
                for (int i = 0; i < CANT_NUM; i++)
                {
                    printf("Ingresar el numero %i: ", i+1);
                    scanf("%f", &numeros[i]);

                    acumulador += numeros[i];
                }
                printf("La suma de los numeros ingresados es: %.2f\n", acumulador);
                break;
            case 'b':
                cuadrado = acumulador*acumulador;
                printf("El cuadrado de la suma de los numeros ingresados es: %.2f\n", cuadrado);
                break;
            case 'c':
                promedio = acumulador/CANT_NUM;
                printf("El promedio de los numeros ingresados es: %.2f\n", promedio);
                break;
            case 'd':
                printf("La suma de los numeros ingresados es: %.2f\n", acumulador);
                printf("El cuadrado de la suma de los numeros ingresados es: %.2f\n", cuadrado);
                printf("El promedio de los numeros ingresados es: %.2f\n", promedio);
                break;
        }

        if(tolower(opcion) != 'e')
        {
            __fpurge(stdin);
            getchar();
        }
    } while (tolower(opcion) != 'e');
    
}
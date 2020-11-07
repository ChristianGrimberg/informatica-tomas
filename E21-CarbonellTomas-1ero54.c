/*
Hacer un programa para ingresar tu nombre, carrera que cursas y edad.
Mostrar todos los datos. Se debe validar el nombre (30 caracteres), la carrera (20 caracteres)
y la edad debe ser mayor a cero, no se sabe cuántos alumnos son.
*/
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define ALUMNOS 2
#define LONG_NOMBRE 31
#define LONG_CARRERA 21

void main()
{
    char nombre[ALUMNOS][LONG_NOMBRE];
    char carrera[ALUMNOS][LONG_CARRERA];
    char edad[ALUMNOS];
    char opcion;
    int longNombre;
    int longCarrera;
    int flag = 0;

    do
    {
        system("clear");

        printf("a - Ingresar datos de los alumnos\n");
        printf("b - Listar datos de los alumnos\n");
        printf("c - Salir del programa\n");
        printf("Elija la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c",&opcion);

        switch (tolower(opcion))
        {
            case 'a':
                system("clear");
                for (int i = 0; i < ALUMNOS; i++)
                {
                    do
                    {
                        printf("Ingrese el nombre: ");
                        __fpurge(stdin);
                        scanf("%s",&nombre[i]);
                        longNombre = strlen(nombre[i]);
                    } while (longNombre >= LONG_NOMBRE);

                    do
                    {
                        printf("Ingrese la carrera: ");
                        __fpurge(stdin);
                        scanf("%s",&carrera[i]);
                        longCarrera = strlen(carrera[i]);
                    } while (longCarrera >= LONG_CARRERA);

                    do
                    {
                        printf("Ingrese la edad: ");
                        scanf("%i",&edad[i]);
                    } while (edad[i] <= 0);

                    flag = 1;
                }
                break;
            case 'b':
                system("clear");

                if(flag == 1)
                {
                    for (int i = 0; i < ALUMNOS; i++)
                    {
                        printf("Nombre: %s Carrera: %s Edad: %i\n", nombre[i], carrera[i], edad[i]);
                    }
                }
                else
                {
                    printf("Ingrese los datos de los alumnos primero.\n");
                }
                

                __fpurge(stdin);
                getchar();
                break;
        }
    } while (tolower(opcion)!='c');
}
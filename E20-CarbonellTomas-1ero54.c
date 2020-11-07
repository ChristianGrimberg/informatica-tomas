/*
Se debe hacer un programa que mediante un menú de opciones (en minúsculas), 
nos permita realizar las siguientes acciones:

    a) Ingresar la clave y el nombre y apellido de los cinco mejores alumnos.
    b) Mostrarlos en el orden que fueron ingresados.
    c) Fin del programa.

NOTA: Las opciones del menú deben ser en minúsculas. La clave y el nombre y apellido, deben ser validados: 
La clave debe tener 4 dígitos numéricos o de caracteres, y el nombre y apellido, no más 30 caracteres.
*/
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define CANT 5
#define LONG 31
#define CLAVE 5

void main()
{
    char nombre[CANT][LONG];
    char apellido[CANT][LONG];
    char clave[CANT][CLAVE];
    char opcion = '\0';
    int longNombre;
    int longApellido;
    int longClave;

    while(tolower(opcion) != 'c')
    {
        system("clear");
        printf("a - Ingrese los datos de los %i mejores alumnos\n",CANT);
        printf("b - Mostrar el listado de los %i mejores alumnos\n",CANT);
        printf("c - Salir del programa\n");
        printf("Ingrese la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c",&opcion);
        
        switch(tolower(opcion))
        {
        case 'a':
            system("clear");
            for (int i = 0; i < CANT; i++)
            {
                do
                {
                    printf("Ingrese el nombre: ");
                    __fpurge(stdin);
                    scanf("%s",&nombre[i]);
                    longNombre = strlen(nombre[i]);
                } while (longNombre >= CANT);

                do
                {
                    printf("Ingrese el apellido: ");
                    __fpurge(stdin);
                    scanf("%s",&apellido[i]);
                    longApellido = strlen(apellido[i]);
                } while (longApellido >= CANT);
                
                do
                {
                    printf("Ingrese la clave: ");
                    __fpurge(stdin);
                    scanf("%s",&clave[i]);
                    longClave = strlen(clave[i]);
                } while (longClave != CLAVE-1);
            }
            break;
        case 'b':
            system("clear");
            for (int i = 0; i < CANT; i++)
            {
                printf("Nombre: %s Apellido: %s Clave: %s\n",nombre[i],apellido[i],clave[i]);
            }
            //Idem system("pause"); en Windows
            __fpurge(stdin);
            getchar();
            break;
        }
    }
}
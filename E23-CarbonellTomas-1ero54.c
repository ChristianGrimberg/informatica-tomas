/*
Un profesor de matemática de un establecimiento educativo registra de un total de 30 alumnos, 
su Nº de legajo, nombre y promedio de notas. Según el promedio, desea conocer el Nº de legajo 
y nombre de los alumnos que:

    Lograron la aprobación directa (promedio mayor o igual a 6).
    Deben dar el examen final (promedio menor a 6 y mayor o igual a 4)
    Deben recursar la materia (promedio menor a 4).
    Indicar cuantos alumnos obtuvieron la aprobación directa, dan final o recursan.
    Salir del programa.
*/

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>

#define CANT_ALUMNOS 5
#define LONG_NOMBRES 31
#define SALIDA 'f'

void main()
{
    int legajos[CANT_ALUMNOS];
    int nombres[CANT_ALUMNOS][LONG_NOMBRES];
    float promedios[CANT_ALUMNOS];
    char opcion;
    int bandera = 0;
    int promocionados = 0;
    int finalistas = 0;
    int recursores = 0;

    do
    {
        system("clear");

        printf("========= MENU PRINCIPAL ========\n");
        printf("| a - Registro de notas         |\n");
        printf("| b - Alumnos promocionados     |\n");
        printf("| c - Alumnos a final           |\n");
        printf("| d - Alumnos a recursar        |\n");
        printf("| e - Agrupacion por cantidades |\n");
        printf("| f - Salir del programa        |\n");
        printf("=================================\n");
        printf("  Elija la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c", &opcion);

        system("clear");

        switch (tolower(opcion))
        {
            case 'a':
                for (int i = 0; i < CANT_ALUMNOS; i++)
                {
                    printf("Ingrese el numero de legajo del alumno: ");
                    scanf("%i", &legajos[i]);
                    printf("Ingrese el nombre del alumno del legajo %i: ", legajos[i]);
                    __fpurge(stdin);
                    scanf("%s", &nombres[i]);
                    printf("Ingrese el promedio final de %s: ", nombres[i]);
                    scanf("%f", &promedios[i]);
                    system("clear");
                }

                bandera = 1;
                break;
            case 'b':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los alumnos primero.\n");
                }
                else
                {
                    printf("============ ALUMNOS PROMOCIONADOS ============\n");

                    for (int i = 0; i < CANT_ALUMNOS; i++)
                    {
                        if(promedios[i] >= 6)
                        {
                            printf("Legajo: %i: Nombre: %s (Promedio: %.2f)\n", legajos[i], nombres[i], promedios[i]);
                            promocionados++;
                        }
                    }
                    
                    printf("===============================================\n");
                }
                break;
            case 'c':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los alumnos primero.\n");
                }
                else
                {
                    printf("=============== ALUMNOS A FINAL ===============\n");

                    for (int i = 0; i < CANT_ALUMNOS; i++)
                    {
                        if(promedios[i] >= 4 && promedios[i] < 6)
                        {
                            printf("Legajo: %i: Nombre: %s (Promedio: %.2f)\n", legajos[i], nombres[i], promedios[i]);
                            finalistas++;
                        }
                    }
                    
                    printf("===============================================\n");
                }
                break;
            case 'd':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los alumnos primero.\n");
                }
                else
                {
                    printf("============== ALUMNOS A RECURSAR =============\n");

                    for (int i = 0; i < CANT_ALUMNOS; i++)
                    {
                        if(promedios[i] < 4)
                        {
                            printf("Legajo: %i: Nombre: %s (Promedio: %.2f)\n", legajos[i], nombres[i], promedios[i]);
                            recursores++;
                        }
                    }
                    
                    printf("===============================================\n");
                }
                break;
            case 'e':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los alumnos primero.\n");
                }
                else
                {
                    printf("========== AGRUPACION POR CANTIDADES ==========\n");
                    printf("%i Alumnos que promocionaron\n", promocionados);
                    printf("%i Alumnos que fueron a final\n", finalistas);
                    printf("%i Alumnos que tienen que recursar\n", recursores);
                    printf("===============================================\n");
                }
                break;
        }

        if(tolower(opcion) != SALIDA)
        {
            __fpurge(stdin);
            printf("Presione Enter para continuar...");
            getchar();
        }
    } while (tolower(opcion) != SALIDA);
}
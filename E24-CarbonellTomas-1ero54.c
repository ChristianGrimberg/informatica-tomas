/*
Hacer un programa que por medio de un menú de opciones nos permita realizar las siguientes acciones:

    * Ingresar el nombre y el precio unitario de 100 artículos.
        El precio unitario debe ser mayor que 0 (cero).
    * Calcular la ganancia del 25 % para cada artículo y mostrar los datos de cada uno.
    * Indicar cuantos artículos tienen la menor ganancia.
    * Hacer un listado de los artículos que superen el promedio de la ganancia.
        Debe aparecer el orden de ingreso.
    * Salir del programa.
*/
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>

#define ARTICULOS 3
#define LONG_NOMBRE 30
#define GANANCIA 0.25f
#define SALIDA 'e'

void main ()
{
    char nombreArticulos[ARTICULOS][LONG_NOMBRE];
    float precioUnitarioArticulos[ARTICULOS];
    float gananciaArticulos[ARTICULOS];
    float acumuladorGanancia;
    float promedioGanancia;
    char opcion;
    int bandera = 0;

    do
    {
        system("clear");

        printf("+================= MENU PRINCIPAL ==================+\n");
        printf("| a - Ingreso de Articulos                          |\n");
        printf("| b - Listar y calcular ganancia de los Articulos   |\n");
        printf("| c - Articulos con menor ganancia                  |\n");
        printf("| d - Articulos que superan el promedio de ganancia |\n");
        printf("| e - Salir del programa                            |\n");
        printf("+===================================================+\n");
        printf("  Elija la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c", &opcion);

        system("clear");

        switch (tolower(opcion))
        {
            case 'a':
                for (int i = 0; i < ARTICULOS; i++)
                {
                    printf("Ingrese el nombre del articulo %i: ", i+1);
                    __fpurge(stdin);
                    scanf("%s", &nombreArticulos[i]);
                    do
                    {
                        printf("Ingrese el precio unitario de %s: ", &nombreArticulos[i]);
                        scanf("%f", &precioUnitarioArticulos[i]);
                    } while (precioUnitarioArticulos[i] <= 0);
                    
                    system("clear");
                }
                
                bandera = 1;
                break;
            case 'b':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los articulos primero.\n");
                }
                else
                {
                    acumuladorGanancia = 0;

                    printf("============== LISTADO DE ARTICULOS Y GANANCIA ==============\n");

                    for (int i = 0; i < ARTICULOS; i++)
                    {
                        gananciaArticulos[i] = precioUnitarioArticulos[i] * GANANCIA;
                        acumuladorGanancia += gananciaArticulos[i];

                        printf("Articulo: %s Precio Unitario: %.2f Ganancia: %.2f\n", 
                            nombreArticulos[i], precioUnitarioArticulos[i], gananciaArticulos[i]);
                    }

                    promedioGanancia = acumuladorGanancia / ARTICULOS;
                    
                    printf("=============================================================\n");
                }

                bandera = 2;
                break;
            case 'c':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los articulos primero.\n");
                }
                else
                {
                    if(bandera == 1)
                    {
                        printf("Liste y calcule la ganancia de los articulos primero.\n");
                    }
                    else
                    {
                        printf("=============== ARTICULOS CON MENOR GANANCIA ================\n");
                    
                        printf("=============================================================\n");
                    }
                }
                break;
            case 'd':
                if(bandera == 0)
                {
                    printf("Cargue los registros de los articulos primero.\n");
                }
                else
                {
                    if(bandera == 1)
                    {
                        printf("Liste y calcule la ganancia de los articulos primero.\n");
                    }
                    else
                    {
                        printf("======= ARTICULOS QUE SUPERAN EL PROMEDIO DE GANANCIA =======\n");

                        for (int i = 0; i < ARTICULOS; i++)
                        {
                            if(gananciaArticulos[i] > promedioGanancia)
                            {
                                printf("Articulo: %s Precio Unitario: %.2f Ganancia: %.2f\n", 
                                    nombreArticulos[i], precioUnitarioArticulos[i], gananciaArticulos[i]);
                            }
                        }
                        
                        printf("=============================================================\n");
                        printf("PROMEDIO DE GANANCIA: %.2f\n", promedioGanancia);
                    }
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
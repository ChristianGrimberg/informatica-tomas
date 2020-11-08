/*
Hacer un programa que por medio de un menú de opciones nos permita realizar las siguientes acciones:

    * Ingresar los siguientes datos de un stock de materiales de una cantidad indeterminada de artículos: 
        Código (Según el índice), Descripción (30 caracteres), Cantidad (No puede ser negativa) y Precio de Compra.
    * Calcular el Precio de Venta de cada artículo que se obtiene calculando un 30% de incremento del Precio de Compra.
    * Borrar los datos de un artículo determinado, buscarlo por su nombre (Descripción) y mostrar el resultado.
    * Hacer los listados de los artículos existentes y de los que fueron eliminados, por separado, mostrar a todos los datos.
    * Salir del programa.
*/
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>

#define ARTICULOS 3
#define LONG_DESCRIP 30
#define INCREMENTO 1.3f
#define SALIDA 'e'

void main ()
{
    int estadoArticulos[ARTICULOS];
    int codigoArticulos[ARTICULOS];
    char descripArticulos[ARTICULOS][LONG_DESCRIP];
    float precioCompraArticulos[ARTICULOS];
    int cantidadArticulos[ARTICULOS];
    float precioVentaArticulos[ARTICULOS];
    float promedioGanancia;
    char opcion;
    int bandera = 0;

    do
    {
        system("clear");

        printf("+================= MENU PRINCIPAL ===================+\n");
        printf("| a - Ingreso de stock de Articulos                  |\n");
        printf("| b - Listar y calcular precio de venta de Articulos |\n");
        printf("| c - Inactivar Articulo existente por descripcion   |\n");
        printf("| d - Listar Articulos existentes e inactivos        |\n");
        printf("| e - Salir del programa                             |\n");
        printf("+====================================================+\n");
        printf("  Elija la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c", &opcion);

        system("clear");

        switch (tolower(opcion))
        {
            case 'a':
                /* code */
                break;
            case 'b':
                /* code */
                break;
            case 'c':
                /* code */
                break;
            case 'd':
                /* code */
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
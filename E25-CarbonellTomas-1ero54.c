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
#include <string.h>

#define ARTICULOS 200
#define LONG_DESCRIP 30
#define INCREMENTO 1.3f
#define SALIDA 'e'
#define ACTIVO 1
#define INACTIVO 0
#define ELIMINADO -1
#define SI 1
#define NO 0

void main ()
{
    int estadoArticulos[ARTICULOS]; //0 para inactivo, 1 para activo
    int codigoArticulos[ARTICULOS];
    char descripArticulos[ARTICULOS][LONG_DESCRIP];
    float precioCompraArticulos[ARTICULOS];
    int cantidadArticulos[ARTICULOS];
    float precioVentaArticulos[ARTICULOS];
    int contador;
    char descripParaBuscar[LONG_DESCRIP];
    int indiceBuscado;
    float promedioGanancia;
    char opcion;
    char continuar;
    int calculado = NO;

    //Inicializacion en estado inactivo de todos los articulos
    for (int i = 0; i < ARTICULOS; i++)
    {
        estadoArticulos[i] = INACTIVO;
    }

    do
    {
        system("clear");

        printf("+================== MENU PRINCIPAL ====================+\n");
        printf("| a - Ingreso de stock de Articulos                    |\n");
        printf("| b - Calcular precio de venta de Articulos ingresados |\n");
        printf("| c - Eliminar Articulo existente por descripcion      |\n");
        printf("| d - Listar Articulos existentes y eliminados         |\n");
        printf("| e - Salir del programa                               |\n");
        printf("+======================================================+\n");
        printf("  Elija la opcion deseada: ");
        __fpurge(stdin);
        scanf("%c", &opcion);

        system("clear");
        
        switch (tolower(opcion))
        {
            case 'a':
                contador = 0;
                
                do
                {
                    //Ingreso por teclado de la descripcion del articulo
                    printf("Ingrese la descripcion del articulo: ");
                    __fpurge(stdin);
                    scanf("%s", &descripArticulos[contador]);
                    
                    //Ingreso de cantidad mayor a cero
                    do
                    {
                        printf("Ingrese la cantidad de %s: ", descripArticulos[contador]);
                        scanf("%i", &cantidadArticulos[contador]);
                    } while (cantidadArticulos[contador] <= 0);

                    //Ingreso del precio de compra y precio de venta vacio
                    printf("Ingrese el precio de compra: ");
                    scanf("%f", &precioCompraArticulos[contador]);
                    precioVentaArticulos[contador] = 0;
                    calculado = NO;

                    //Indice incremental para el codigo
                    codigoArticulos[contador] = contador+1;
                    
                    //Bandera de activo
                    estadoArticulos[contador] = ACTIVO;
                    
                    //Condicion para continuar con la carga de articulos
                    printf("Desea continuar con la carga? s/n: ");
                    __fpurge(stdin);
                    scanf("%c", &continuar);

                    //Incremento de contador para proxima vuelta
                    if(tolower(continuar) == 's')
                    {
                        contador++;
                        system("clear");
                    }
                } while (tolower(continuar) == 's');
                break;
            case 'b':
                for (int i = 0; i < ARTICULOS; i++)
                {
                    if(estadoArticulos[i] == ACTIVO && precioVentaArticulos[i] == 0)
                    {
                        precioVentaArticulos[i] = precioCompraArticulos[i]*INCREMENTO;
                        calculado = SI;
                    }
                }

                if(calculado == SI)
                {
                    printf("Se calculo el precio de venta de los articulos ingresados\n");
                }
                else
                {
                    printf("No hay articulos para calcular el Precio de Venta\n");
                }
                break;
            case 'c':
                indiceBuscado = -1;

                printf("Ingrese el nombre exacto del articulo a borrar: ");
                __fpurge(stdin);
                scanf("%s", descripParaBuscar);

                for (int i = 0; i < ARTICULOS; i++)
                {
                    if(estadoArticulos[i] == ACTIVO && strcmp(descripArticulos[i], descripParaBuscar) == 0)
                    {
                        indiceBuscado = i;
                    }
                }

                if(indiceBuscado != -1)
                {
                    printf("Se encontro el siguiente articulo:\nCodigo: %i - Articulo: %s\nDesea borrarlo? s/n: ",
                        codigoArticulos[indiceBuscado], descripArticulos[indiceBuscado]);
                    __fpurge(stdin);
                    scanf("%c", &opcion);

                    if (tolower(opcion) == 's')
                    {
                        estadoArticulos[indiceBuscado] = ELIMINADO;
                        printf("El articulo ha sido eliminado\n");
                    }
                }
                else
                {
                    printf("No se encontro el articulo %s\n", descripParaBuscar);
                }
                
                break;
            case 'd':
                if(calculado == NO)
                {
                    printf("Calcule el Precio de Venta primero\n");
                }
                else
                {
                    if(calculado == SI)
                    {
                        printf("=================== LISTADO DE ARTICULOS ACTIVOS ====================\n");

                        for (int i = 0; i < ARTICULOS; i++)
                        {
                            if (estadoArticulos[i] == ACTIVO)
                            {
                                printf("Codigo: %i - Articulo: %s - Cantidad: %i - Precio de Compra: %.2f - Precio de Venta: %.2f\n",
                                    codigoArticulos[i], descripArticulos[i], cantidadArticulos[i], precioCompraArticulos[i], precioVentaArticulos[i]);
                            }
                        }

                        printf("=====================================================================\n");

                        printf("================== LISTADO DE ARTICULOS ELIMINADOS ==================\n");

                        for (int i = 0; i < ARTICULOS; i++)
                        {
                            if (estadoArticulos[i] == ELIMINADO)
                            {
                                printf("Codigo: %i - Articulo: %s - Cantidad: %i - Precio de Compra: %.2f - Precio de Venta: %.2f\n",
                                    codigoArticulos[i], descripArticulos[i], cantidadArticulos[i], precioCompraArticulos[i], precioVentaArticulos[i]);
                            }
                        }

                        printf("=====================================================================\n");
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
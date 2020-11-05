/*Ingresar el stock de n cantidad de artículos,
 debiéndose averiguar cuál es el stock mayor y cual el menor. Mostrar el stock correspondiente. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


main()
{
	char nombreArticulo[20];
	int cantidadArticulo;
	char nombreArticuloMax[20];
	int cantidadArticuloMax;
	char nombreArticuloMin[20];
	int cantidadArticuloMin;
	char opcion;
	
	opcion='\0';
	cantidadArticuloMax=0;
	cantidadArticuloMin=0;
	
	while(toupper(opcion)!='N')
	{
		system("cls");
		
		printf("ingrese el nombre del articulo: ");
		scanf("%s",nombreArticulo);
		printf("ingrese cantidad de articulos: ");
		scanf("%i",&cantidadArticulo);
		
		if(cantidadArticulo>cantidadArticuloMax)
		{
			cantidadArticuloMax=cantidadArticulo;
			strcpy(nombreArticuloMax,nombreArticulo);
		}
		else
		{
			if(cantidadArticulo<cantidadArticuloMin);
			{
				cantidadArticuloMin=cantidadArticulo;
				strcpy(nombreArticuloMin,nombreArticulo);
			}
		}
		
		printf("desea continuar S/N: ");
		fflush(stdin);
		scanf("%c",&opcion);
	}
	
	printf("El articulo %s tiene la mayor cantidad de stock con %i.\n",nombreArticuloMax,cantidadArticuloMax);
	printf("El articulo %s tiene la menor cantidad de stock con %i.\n",nombreArticuloMin,cantidadArticuloMin);
	
}

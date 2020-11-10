/*AUTOR:
COMISION:
E24: Hacer un programa que por medio de un men� de opciones nos permita realizar
las siguientes acciones:
a. Ingresar el nombre y el precio unitario de 100 art�culos. El precio unitario debe
ser mayor que 0 (cero).
b. Calcular la ganancia del 25 % para cada art�culo y mostrar los datos de cada
uno.
c. Indicar cuantos articulos tienen la menor ganancia.
d. Hacer un listado de los articulos que superen el promedio de la ganancia.
Debe aparecer el orden de ingreso.
e. Salir del programa.*/

#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <ctype.h>

#define CANTIDAD 3

void main()
{
	char nombre[CANTIDAD][30];
	char auxnom[50];
	float preunit[CANTIDAD];
	float auxpu;
	float ganancia[CANTIDAD];
	int cganancia=0;
	float menor;
	int c=0;
	float promedio;
	float suma=0;
	char opcion='z';
	int control=0;
	char opmenu='z';
	
	do
	{
		system("clear");
		printf("Men%c de Opciones", 163);
		printf("\na. Altas");
		printf("\nb. C%clculos", 160);
		printf("\nc. Contador");
		printf("\nd. Listado");
		printf("\ne. Salir");
		printf("\nElegir Opci%cn:\t", 162);
		__fpurge(stdin);
		scanf("%c", &opcion);
		opcion=tolower(opcion);
		switch(opcion)
		{
			case 'a':
				for(c=0; c<CANTIDAD; c=c+1)
				{
					printf("\nDescripci%cn:\t", 162);
					__fpurge(stdin);
					scanf("%s", auxnom);
					/*Validamos el nombre*/
					while(strlen(auxnom)>30)
					{
						printf("Error... Dato incorrecto...");
						printf("\nIngresar una nueva descripci%cn:\t", 162);
						__fpurge(stdin);
						scanf("%s", auxnom);
					}
					strcpy(nombre[c],auxnom);
					printf("\nPrecio Unitario:\t");
					scanf("%f", &auxpu);
					/*Validamos el precio unitario*/
					while(auxpu<=0)
					{
						printf("Error... Dato incorrecto...");
						printf("\nIngresar un nuevo precio:\t");
						scanf("%f", &auxpu);
					}
					preunit[c]=auxpu;
				}//Fin del for()
				opmenu='a';
				break;
			case 'b':
				if(opmenu=='a')
				{
					for(c=0; c<CANTIDAD; c=c+1)
					{
						ganancia[c]=preunit[c]*0.25;
						printf("\nDescripci%cn:\t%s", 162, nombre[c]);
						printf("\tPrecio:\t%.2f", preunit[c]);
						printf("\tGanancia:\t%.2f", ganancia[c]);
					}
					opmenu='b';
				}
				else
				{
					puts("Falta cargar los datos...");
				}
				break;
			case 'c':
				if(opmenu=='b')
				{	/*Averiguamos la ganancia menor*/
					for(c=0; c<CANTIDAD; c=c+1)
					{
						if(control==0)	
						{
							menor=ganancia[c];
							control=1;
						}
						if(ganancia[c]<menor)
						{
							menor=ganancia[c];
						}
					}
					/*Contamos cuantas ganancias son iguales a la ganacia menor*/
					for(c=0; c<CANTIDAD; c=c+1)
					{	
						if(ganancia[c]==menor)
						{
							cganancia=cganancia+1;
						}
					}
					printf("\nArt%cculos con la menor ganancia:\t%i", 161, cganancia);
					opmenu='c';
				}
				else
				{
					puts("Debemos calcular primero la ganancia...");
				}
				break;
			case 'd':
				if(opmenu=='b' || opmenu=='c')
				{
					for(c=0; c<CANTIDAD; c=c+1)
					{
						suma=suma+ganancia[c];
					}
					promedio=suma/CANTIDAD;
					printf("\nOrden\tDescripci%cn\tPrecio\tGanancia", 162);
					for(c=0; c<CANTIDAD; c=c+1)
					{
						if(ganancia[c]>promedio)
						{
							printf("\n%i", c+1);
							printf("\t%s", nombre[c]);
							printf("\t%.2f", preunit[c]);
							printf("\t%.2f", ganancia[c]);
						}
					}
				}
				else
				{
					puts("Debemos calcular primero la ganancia...");
				}
				break;
			case 'e':
				printf("\nSalir del programa...");
				break;
			default:
				printf("Error... opci%cn Incorrecta!!", 162);
		}//fin del switch()
		printf("\nPresione Enter para continuar...");
		__fpurge(stdin);
		getchar();
	}while(opcion!='e');
}//Fin del main()
				
				
					
	
	
	
	

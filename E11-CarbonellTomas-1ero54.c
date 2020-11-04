/*
Autor: Carbonell Tomas
Comision: 1ro54

Se debe hacer un programa que nos permita ingresar dos numeros y
que mediante un menu de opciones nos permita calcular a una de las 
cuatro operaciones aritmeticas basicas y mostrar dicho resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
	float numero1;
	float numero2;
	char opcion;
	float resultado;
	
	opcion='\0';
	numero1=0;
	numero2=0;
	
	while(toupper(opcion)!= 'F')
	{
		system("clear");
		printf("(A)ingresar los numeros\n");
		printf("(B)sumar\n");
		printf("(C)restar\n");
		printf("(D)dividir\n");
		printf("(E)multiplicar\n");
		printf("(F)salir\n");
		printf("ingrese la opcion elegida: ");
		fflush(stdin);
		scanf("%c",&opcion);
		
		switch(toupper(opcion))
		{
			case 'A':
				printf("ingrese numero 1: ");
				scanf("%f",&numero1);
				printf("ingrese numero 2: ");
				scanf("%f",&numero2);
				break;
			case 'B':
				resultado=numero1+numero2;
				break;
			case 'C':
				resultado=numero1-numero2;
				break;
			case 'D':
				if(numero2==0)
				{
					printf("no se puede hacer esta operacion.\n");
				}
				else
				{
					resultado=numero1/numero2;
				}
				
				break;
			case 'E':
				resultado=numero1*numero2;
				break;
		}
		
		if(toupper(opcion) == 'B' || toupper(opcion) == 'C' || toupper(opcion) == 'D' || toupper(opcion) == 'E')
		{
			if(toupper(opcion) != 'D' || numero2!=0){
				printf("El resultado es: %.2f\n",resultado);
			}
		}
		
		system("pause");
	}
}

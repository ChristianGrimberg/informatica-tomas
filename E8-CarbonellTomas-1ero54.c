/*
Autor: Carbonell Tomas
Comision: 1ro54
Se debe ingresar un numero entero, debiendose indicar si dicho numero es par o impar.
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	//Declarar variables para reservar espacio en memoria
	int numero;

	//Interactuar con el usuario
	printf("ingresar un numero: ");
	scanf("%i",&numero);
	
	//Hacer operaciones
	if(numero%2==0)
	{
		printf("el numero es par\n");
	}
	else
	{
		printf("el numero es impar\n");
	}
	//Mostrar resultados
}

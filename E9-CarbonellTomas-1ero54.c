/*
 Se debe ingresar un n�mero entero, debi�ndose indicar si dicho n�mero es par o impar.*/
#include <stdio.h>
#include <stdlib.h>

main()
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

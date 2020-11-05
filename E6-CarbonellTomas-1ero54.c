/*
Autor: Carbonell Tomas
Comisión: 1°54
Presentacion III: Hacer un algoritmo que calcule el total a pagar por la compra de camisas. 
Si se compran tres camisas o más, se aplica un descuento del 20% sobre el total de la compra y si son menos de tres camisas un descuento del 10%. 
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	char respuesta;
	float precio;
	float acumulador;
	float total;
	float descuento;
	int cantidad;
	
	acumulador=0;
	cantidad=0;
	
	//Inicio de la repeticion
	do
	{
		if(cantidad==0)
		{
			printf("Desea comprar la camisa? s/n: ");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
		else
		{
			printf("Desea comprar mas camisas? s/n: ");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
		
		
		if(respuesta=='s')
		{
			//cantidad = cantidad + 1;
			cantidad++;
			printf("Ingrese el valor de la camisa: ");
			scanf("%f",&precio);
			
			//acumulador = acumulador + precio;
			acumulador+=precio;
			//printf("Debug: Acumulador=%.2f-Camisas:%i\n",acumulador,cantidad);
		}
	}
	while(respuesta=='s');
	//Fin de la repeticion
	
	if(cantidad>=3)
	{
		descuento = 20.0f;
	}
	else
	{
		descuento = 10.0f;
	}
	
	total = acumulador * (100 - descuento)/100;
	printf("El total es %.2f y con %.0f por ciento de descuento sobre %i camisa/s es: %.2f\n",acumulador,descuento,cantidad,total);
}

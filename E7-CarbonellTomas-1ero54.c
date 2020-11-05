/*
Ingresar 2 números y realizar un menú de opciones para que los sume, reste o los muestre.
*/
#include <stdio.h>
#include <stdlib.h>
void menu();
int ingresarEntero();
int sumarEnteros(int num1, int num2);
int restarEnteros(int num1,int num2);
void mostrarNumeros(int num1,int num2);

int main()
{
	int num1;
	int num2;
	int total;
	int respuesta;
	
	respuesta = 0;
	num1 = 0;
	num2 = 0;
	total = 0;
	
	do
	{
		menu();
		printf("Ingrese la opcion del 1 al 5: ");
		scanf("%i",&respuesta);
		
		switch(respuesta)
		{
			case 1:
				num1 = ingresarEntero();
				num2 = ingresarEntero();
				break;
			case 2:
				total = sumarEnteros(num1,num2);
				break;
			case 3:
				total = restarEnteros(num1,num2);
				break;
			case 4:
				mostrarNumeros(num1,num2);
				break;
		}
		
		system("pause");
	}
	while(respuesta != 5);
	
	return 0;
}

void menu()
{
	system("cls");
	
	printf("1 - Ingresar\n");
	printf("2 - Sumar\n");
	printf("3 - Restar\n");
	printf("4 - Mostrar\n");
	printf("5 - Salir\n");
}

int ingresarEntero()
{
	int ingreso;
	
	printf("Ingrese un numero: ");
	scanf("%i",&ingreso);
	return ingreso;
}

int sumarEnteros(int num1, int num2)
{
	int total;
	
	total = num1 + num2;
	printf("La suma es igual a %i\n",total);
	
	return total;
}

int restarEnteros(int num1,int num2)
{
	int total;
	total= num1 - num2;
	printf("La resta es igual a %i\n",total);
	return total;
}

void mostrarNumeros(int num1,int num2)
{
	printf("numero 1: %i\nnumero 2: %i\n",num1,num2);
}

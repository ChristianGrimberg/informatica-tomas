/*Autor:
Comisi�n:
E8:Dise�ar el algoritmo necesario para que, habi�ndose le�do el valor de 2 variables
NUM1 y NUM2 se intercambien los valores de las mismas, es decir que el valor
que ten�a NUM1 ahora lo contenga NUM2 y viceversa.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int num1;
	int num2;
	int swap;
	
	printf("ingrese valor 1: ");
	scanf("%i",&num1);
	printf("ingrese valor 2: ");
	scanf("%i",&num2);
	
	swap=num1;
	num1=num2;
	num2=swap;
	
	printf("el valor 1 ahora es: %i\n",num1);
	printf("el valor 2 ahora es: %i\n", num2);
	system("pause");
	
}

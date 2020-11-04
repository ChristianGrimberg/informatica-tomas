/*
Autor: Carbonell Tomas
Comision: 1ro54

Se leen tres numeros, A, B, y C. Se pide escribir el mayor de ellos.
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int A;
	int B;
	int C;
	
	printf("(A) ingresa un numero: ");
	scanf("%i",&A);
	printf("(B) ingresa un numero: ");
	scanf("%i",&B);
	printf("(C) ingresa un numero: ");
	scanf("%i",&C);
	
	if(A>B && A>C)
	{
		printf("A es el mayor.\n");
	}
	else
	{
		if(A<B && B>C)
		{
			printf("B es el mayor.\n");
		}
		else
		{
			if(A<C && B<C)
			{
				printf("C es el mayor.\n");
			}
			else
			{
				printf("los numeros son iguales.\n");
			}
		}
	}
}

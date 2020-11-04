/*Leer 5 números, sumarlos y mostrar el resultado.
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	int resultado;
	
	printf("Ingrese el numero: ");
	scanf("%i",&numero1);
	printf("ingrese el numero: ");
	scanf("%i",&numero2);
	printf("ingrese el numero: ");
	scanf("%i",&numero3);
	printf("ingrese el numero: ");
	scanf("%i",&numero4);
	printf("ingrese el numero: ");
	scanf("%i",&numero5);
	
	resultado=numero1+numero2+numero3+numero4+numero5;
	printf("el resultado de los 5 numeros es: %i\n ",resultado);

}


/*
Autor: Carbonell Tomas
Comisión:1°54
E1: Ingresar 3 números y mostrarlos (uno al lado del otro y uno debajo del otro).
*/
//1.Declaramos las bibliotecas y constantes.
#include <stdio.h>
#include<stdlib.h>

//2.Iniciamos la estructura principal del programa.
main()
{
	//3.Declaramos las variables o estructuras de datos que vamos a utilizar.
	int num1;
	int num2;
	int num3;
	
	//4.Ingresamos los datos.
	printf("Ingrese numero 1: ");
	scanf("%i",&num1);
	printf("Ingrese numero 2: ");
	scanf("%i",&num2);
	printf("Ingrese numero 3: ");
	scanf("%i",&num3);
	
	//5.Mostramos los resultados.
	printf("%i-%i-%i\n",num1,num2,num3);
	printf("%i\n%i\n%i\n",num1,num2,num3);
	system("pause");
	//6.Fin del programa.
	
}

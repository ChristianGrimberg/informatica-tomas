/*

Ingresar el apellido y el sueldo de 5 empleados.
Sacar el promedio de los sueldos, mostrar el resultado y a continuación a los datos ingresados.
*/

#include <stdio.h>
#include <stdlib.h>
#define EMPLEADOS 3
#define LONG_APELLIDO 20

void main()
{
	char apellido[EMPLEADOS][LONG_APELLIDO];
	float sueldo[EMPLEADOS];
	float acumulador;
	float resultado;
	
	acumulador = 0;

	for (int i = 0; i < EMPLEADOS; i++)
	{
		printf("Ingrese el nombre: ");
		scanf("%s",&apellido[i]);
		printf("Ingrese el sueldo: ");
		scanf("%f",&sueldo[i]);
		system("clear");

		acumulador+=sueldo[i];
	}

	resultado = acumulador/EMPLEADOS;
	printf("El promedio de los sueldos ingresados es: %.2f\n",resultado);

	for (int j = 0; j < EMPLEADOS; j++)
	{
		printf("Posicion: %i Apellido: %s Sueldo:%.2f\n",j, apellido[j], sueldo[j]);
	}	
}
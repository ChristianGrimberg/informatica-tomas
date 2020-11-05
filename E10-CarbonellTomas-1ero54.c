/*Se leen tres datos que representan: el nombre, sueldo básico y antigüedad de un empleado. Se solicita imprimir el nombre y el sueldo a cobrar.
 Este sueldo a cobrar, se calcula adicionando al básico el 35% del mismo, si la antigüedad supera los 10 años.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	char nombre[20];
	float sueldo;
	int antiguedad;
	
	printf("ingrese el nombre: ");
	scanf("%s",nombre);
	fflush(stdin);
	printf("ingrese el sueldo basico: ");
	scanf("%f",&sueldo);
	printf("ingrese su antiguedad: ");
	scanf("%i",&antiguedad);
	
	if(antiguedad>10)
	{
		sueldo=sueldo*1.35;
	}
	
	printf("nombre: %s\n",nombre);
	printf("sueldo: %.2f\n",sueldo);
	
	
}

/*
Autor: Carbonell Tomas
Comisión: 1°54
De un alumno del curso de ingreso a la UTN se ingresan las notas obtenidas en los exámenes de las 3 materias que lo forman.
Calcular el promedio del alumno y mostrarlo por pantalla.
*/
//1.Declaramos las bibliotecas y constantes.
#include <stdio.h>
#include <stdlib.h>
//2.Iniciamos la estructura principal del programa.
main()
{
	//3.Declaramos las variables o estructuras de datos que vamos a utilizar.
	float materia1;
	float materia2;
	float materia3;
	float promedio;
	//4.Ingresamos los datos.
	printf("nota de algebra: ");
	scanf("%f",&materia1);
	printf("nota de quimica: ");
	scanf("%f",&materia2);
	printf("nota de fisica: ");
	scanf("%f",&materia3);
	//5.Realizamos el proceso que el programa requiere.
	promedio=(materia1+materia2+materia3)/3;
	//6.Mostramos los resultados.
	printf("el promedio es: %.2f\n",promedio);
	system("pause");
	//7.Fin del programa.
}

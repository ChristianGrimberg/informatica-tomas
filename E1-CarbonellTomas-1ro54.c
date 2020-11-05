/*Autor:
Comision:
E1: Se debe ingresar nombre, sexo, edad y 
porcentaje de tiempo transcurrido de este a�o 
 �(mes actual / total meses)*100�. Mostrar los 
 resultados correspondientes. */
//1.Declaramos las bibliotecas y constantes.
#include <stdio.h>
#include <stdlib.h>

//2.Iniciamos la estructura principal del programa.
main()
{
//3.Declaramos las variables o estructuras de datos que vamos a utilizar.
   int edad;
   char  sexo; 
   char nombre[20];
   float porcentaje; 
   float mesactual;

//4.Ingresamos los datos.
   printf("Edad:\t");
   scanf ("%i", &edad);//Ingresamos la edad
   printf("Nombre:\t");
   fflush(stdin);
   scanf ("%s", nombre);//Ingresamos el nombre
   printf("Sexo:\t");
   fflush(stdin);
   scanf ("%c", &sexo);//Ingresamos el sexo
   printf("Ingresar mes actual:\t");
   scanf ("%f", &mesactual);//Ingresamos el mes actual

//5.Realizamos el proceso que el programa requiere.
   porcentaje= (mesactual / 12) * 100; 
/*En todo c�lculo matem�tico en que intervengan 
n�meros enteros y n�meros reales, el resultado 
siempre va a ser real, por consiguiente la variable
 en donde se va a almacenar el dato tambien debe 
 ser real, porque sino se perderian los decimales 
 que se obtengan en el resultado*/
 
//6.Mostramos los resultados.
   printf("\nMostramos los resultados\n");
   printf ("Edad:\t%i\n", edad);
   printf ("Nombre:\t%s\n", nombre);
   printf ("Sexo:\t%c\n", sexo),
   printf ("Porcentaje de tiempo transcurrido:\t%.2f\n", porcentaje);
   system("pause");
//7.Fin del programa.
}



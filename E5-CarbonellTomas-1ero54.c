/*Autor: Carbonell Tomas
Comisión: 1°54
presentacion: Ingresar la marca y el kilometraje de un vehículo,
 mostrar el mensaje "Realizar el control técnico", si el kilometraje es mayor 10000*/
 
 #include <stdio.h>
 #include <stdlib.h>
 
 main()
 {
 	char marca[20];
 	int km;
 	
 	printf("ingrese su marca: ");
 	scanf("%s",marca);
 	fflush(stdin);
 	printf("ingrese cantidad de km: ");
 	scanf("%i",&km);
 	
 	//Se compara si el kilometraje es mayor a 10.000
	if(km>10000) 
 	{
	 	printf("Realizar el control tecnico\n");
	}
 	
 	
 	
 	
 }

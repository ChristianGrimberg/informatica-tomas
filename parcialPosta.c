#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();

void main()
{
    //ejercicio1();
    //ejercicio2();
    //ejercicio3();
    //ejercicio4();
    ejercicio5();
}

void ejercicio1()
{
    char palabra1[] = "Hola";
    char palabra2[] = "ola";

    printf("%d\n",strcmp(palabra1,palabra2));

}

void ejercicio2()
{
    for (int i = 1; i < 55; i++)
    {
        if(!(i%11))
        {
            i= i+1;
            printf("%d\n",i);
        }
    }
    
}

void ejercicio3()
{
    int nro;
    scanf("%f",&nro);

    printf("%f", nro);
}

void ejercicio4()
{
    /*
    float auxleg;
    float legajo[5];
    char auxape[30];
    char apellido[5][30];
    int edad[5];

    for(int c=0; c<5; c=c+1) 
    {
            printf("Ingresar Legajo:\t"); 
            printf("Legajo:\t"); 
            printf("Apellido:\t"); 
            printf("Edad:\t"); 
            scanf("%f", &auxleg);
            if(auxleg==legajo[c]) 
            {
                        scanf("%f", &legajo[c]); 
                        fflush(stdin);
                        gets(auxape); 
                        strcpy(apellido[c], auxape); 
                        scanf("%i", &edad[c]); 
                }
    }
    */
}

void ejercicio5()
{
    /*
    int i=0;
    if( i==1 );
    {
    printf(“uno”);
    }
    else{
    printf(“cero”);
    }
    */
    int i;

    for (i=0; i<111; i=i+11)
    { 
        printf("%d\n", i);
    }


    i=0; while (i<111) { printf("%d\n", i); i=i+11; }
}
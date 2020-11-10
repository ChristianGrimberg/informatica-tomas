#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

void ejercicio2();
void ejercicio4();
void ejercicio5();

void main()
{
    ejercicio5();
    
}

void ejercicio2()
{
    for (int i = 0; i <= 100; i=i+2)
    {
        printf("%d\n", i+1);
    }

    printf("Prueba:\n");

    int i = 1;
    /*

    while(i <= 100)
    {
        i = 0;
        printf("%d\n", i);
        i=i+2;
    }

    */
    
    while (i<100)
    {
        printf("%d\n", i);

        i=i+2;
    }
}
void ejercicio4()
{
    for (int i = 1; i < 22; i++)
    {
        if(i % 11)
        {
            i = i+1;
            printf("%d\n", i);
        }
    }
    
}

void ejercicio5()
{
    int i = 1, j = 1;

    switch (j)
    {
    case 0:
        i = i + 1; 
    case 1:
        j = j - 1;
    case 2:
        i = i+1;
    case 3:
        i = i * i;
    }

    printf("%d", i);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int i,numero,par=0,impar=0;

    for (i = 1; i <=5; i++)
    {
        printf("Numero:");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
       
        }
    }


system("cls || clear");

    printf("Numeros Pares:%d \n",par);
    printf("Numeros Impares:%d \n",impar);

    return 0;
}
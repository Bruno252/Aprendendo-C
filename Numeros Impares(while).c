#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;

    for (i = 1; i <= 15; i++)
    {
        if (i % 2 == 1)
        {
            printf("Valor de I:%d \n",i);
        }
    }


    return 0;
}
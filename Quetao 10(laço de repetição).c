#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, nota, soma = 0;
    float media = 0;

    do
    {
        printf("Nota:");
        scanf("%d", &nota);

        if (nota > 0)
        {
            soma += nota;
            i++;
        }
        else
        {
            break;
        }

    } while (nota > 0);

    system("cls || clear");

    media = soma / i;

    printf("Media:%.2f", media);

    return 0;
}
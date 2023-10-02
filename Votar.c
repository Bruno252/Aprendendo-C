#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int idade;

    printf("Idade:");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 65)
    {
        printf("E Obrigado a Votar");
    }
    else
    {
        printf("Nao e Obrigado a votar");
    }

    return 0;
}

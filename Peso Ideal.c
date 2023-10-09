#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{

    float altura, peso;
    char sexo;

    // Convertando em maiusculo
    // sexo = toupper(sexo);

    printf("Digite sua Altura:");
    scanf("%f", &altura);

    fflush(stdin);

    printf("Digite o seu sexo:");
    scanf("%c", &sexo);

    system("cls || clear");

    sexo = toupper(sexo);

    switch (sexo)
    {

    case 'F':
        peso = (62.1 * altura) - 44.7;
        break;

    case 'M':
        peso = (72.7 * altura) - 58;
        break;

    default:
        printf("errado");
        break;
    }

    printf("Sexo:%c \n", sexo);
    printf("Altura:%.2f \n", altura);
    printf("Peso:%.2f", peso);

    return 0;
}
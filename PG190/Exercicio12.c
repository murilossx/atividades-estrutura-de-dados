#include <stdio.h>

int main(void)
{
    int numeros[5];
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nOs números digitados foram: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", numeros[i]);

        if (i < 4)
        {
            printf(" + ");
        }
    }

    printf(" = %d\n", soma);
}
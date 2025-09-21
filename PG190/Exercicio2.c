#include <stdio.h>

int main(void)
{

    int valores[7];

    printf("Digite 7 numeros inteiros:\n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &valores[i]);
    }

    printf("Números múltiplos de 2: ");
    for (int i = 0; i < 7; i++)
    {
        if (valores[i] % 2 == 0)
        {
            printf("%d ", valores[i]);
        }
    }

    printf("\nNúmeros múltiplos de 3: ");
    for (int i = 0; i < 7; i++)
    {
        if (valores[i] % 3 == 0)
        {
            printf("%d ", valores[i]);
        }
    }

    printf("\nNúmeros múltiplos de 2 e 3: ");

    for (int i = 0; i < 7; i++)
    {
        if (valores[i] % 2 == 0 && valores[i] % 3 == 0)
        {
            printf("%d ", valores[i]);
        }
    }
}
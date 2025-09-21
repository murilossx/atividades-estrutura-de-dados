#include <stdio.h>

int main(void)
{

    int valores[6];
    int qntPares = 0;
    int qntImpares = 0;

    printf("Digite 6 numeros inteiros:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &valores[i]);
    }

    printf("\n--- Numeros Pares ---\n");
    for (int i = 0; i < 6; i++)
    {
        if (valores[i] % 2 == 0)
        {
            printf("%d\n", valores[i]);
            qntPares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", qntPares);

    printf("\n--- Numeros Impares ---\n");
    for (int i = 0; i < 6; i++)
    {
        if (valores[i] % 2 != 0)
        {
            printf("%d\n", valores[i]);
            qntImpares++;
        }
    }

    printf("Quantidade de numeros impares: %d\n", qntImpares);
}
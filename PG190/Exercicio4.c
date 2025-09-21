#include <stdio.h>

int main(void)
{

    int valores[15];
    int encontrou30 = 0;

    printf("Digite 15 numeros inteiros:\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &valores[i]);
    }

    printf("Posições em que os elementos 30 aparecem: ");
    for (int i = 0; i < 15; i++)
    {
        if (valores[i] == 30)
        {
            printf("%d ", i);
            encontrou30 = 1;
        }
    }

    if (encontrou30 == 0)
    {
        printf("O numero 30 nao foi encontrado no vetor.\n");
    }
}
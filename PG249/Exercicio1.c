#include <stdio.h>

int main(void)
{
    int matriz[3][5];
    int contador = 0;

    printf("Digite os valores para preencher a matriz 3 x 5:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] >= 15 && matriz[i][j] <= 20)
            {
                contador++;
            }
        }
    }

    printf("\nQuantidade de elementos entre 15 e 20: %d\n", contador);
}
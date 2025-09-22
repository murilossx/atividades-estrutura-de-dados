#include <stdio.h>

int main(void)
{
    int matrizM[4][6];
    int matrizN[6][4];
    int somaLinhasM[4];
    int somaColunasN[4];
    int i, j;

    printf("Preenchendo a Matriz M (4x6) \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &matrizM[i][j]);
        }
    }

    printf("\nPreenchendo a Matriz N (6x4) \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor para N[%d][%d]: ", i, j);
            scanf("%d", &matrizN[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        somaLinhasM[i] = 0;
        for (j = 0; j < 6; j++)
        {
            somaLinhasM[i] += matrizM[i][j];
        }
    }

    for (j = 0; j < 4; j++)
    {
        somaColunasN[j] = 0;
        for (i = 0; i < 6; i++)
        {
            somaColunasN[j] += matrizN[i][j];
        }
    }

    printf("\n Resultados\n");

    printf("\nSoma das Linhas da Matriz M:\n");
    for (i = 0; i < 4; i++)
    {
        printf("Soma da linha %d: %d\n", i, somaLinhasM[i]);
    }

    printf("\nSoma das Colunas da Matriz N:\n");
    for (j = 0; j < 4; j++)
    {
        printf("Soma da coluna %d: %d\n", j, somaColunasN[j]);
    }
}
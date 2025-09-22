#include <stdio.h>

int main(void)
{
    int matriz[6][3];
    int maiorElemento, menorElemento;
    int linhaMaior, colunaMaior;
    int linhaMenor, colunaMenor;

    printf("Digite os valores para a matriz 6 x 3:\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maiorElemento = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    menorElemento = matriz[0][0];
    linhaMenor = 0;
    colunaMenor = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maiorElemento)
            {
                maiorElemento = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }

            if (matriz[i][j] < menorElemento)
            {
                menorElemento = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    printf("\n Relatorio da Matriz \n");

    printf("\nMaior elemento: %d\n", maiorElemento);
    printf("Posição (linha, coluna): [%d][%d]\n", linhaMaior, colunaMaior);

    printf("\nMenor elemento: %d\n", menorElemento);
    printf("Posição (linha, coluna): [%d][%d]\n", linhaMenor, colunaMenor);
}
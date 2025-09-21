#include <stdio.h>

int main(void)
{

    int matriculaLogica[15];
    int matriculaLogicaProgramacao[10];

    printf("Digite os números das matrículas na matéria de Lógica: ");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &matriculaLogica[i]);
    }

    printf("Digite os números das matrículas na matéria de Lógica de Programação: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &matriculaLogicaProgramacao[i]);
    }

    printf("Números das matrículas que estão matriculados nas duas Disciplinas: ");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriculaLogica[i] == matriculaLogicaProgramacao[j])
            {
                printf("%d ", matriculaLogica[i]);
                break;
            }
        }
    }
}
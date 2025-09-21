#include <stdio.h>

int main(void)
{
    char nomes[8][50];
    double notas[8];
    double somaNotas = 0.0;
    double mediaClasse;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o nome do %do aluno: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a nota do %s: ", nomes[i]);
        scanf("%lf", &notas[i]);
        somaNotas += notas[i];
    }

    printf("\nRelatórios de notas\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%s %.1f\n", nomes[i], notas[i]);
    }

    mediaClasse = somaNotas / 8;
    printf("Média da classe = %.2f\n", mediaClasse);
}
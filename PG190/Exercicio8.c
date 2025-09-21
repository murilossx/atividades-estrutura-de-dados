#include <stdio.h>

int main(void)
{
    char nomes[7][50];
    double medias[7];
    int i;

    double maiorMedia;
    int indiceMaiorMedia;

    for (i = 0; i < 7; i++)
    {
        printf("\nDigite o nome do aluno: ");
        scanf("%s", nomes[i]);

        printf("Digite a media final do %s: ", nomes[i]);
        scanf("%lf", &medias[i]);
    }

    maiorMedia = medias[0];
    indiceMaiorMedia = 0;

    for (i = 1; i < 7; i++)
    {
        if (medias[i] > maiorMedia)
        {
            maiorMedia = medias[i];
            indiceMaiorMedia = i;
        }
    }

    printf("\nAluno com a maior media:\n");
    printf("Nome: %s Media: %.2f\n", nomes[indiceMaiorMedia], maiorMedia);

    printf("\nAlunos em exame final:\n ");
    for (i = 0; i < 7; i++)
    {
        if (medias[i] < 7.0)
        {
            double notaNecessaria = 10.0 - medias[i];
            printf("Aluno: %s Media: %.2f -> Precisa tirar no minimo %.2f no exame.\n", nomes[i], medias[i], notaNecessaria);
        }
    }
}
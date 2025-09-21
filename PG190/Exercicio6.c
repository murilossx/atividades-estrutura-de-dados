#include <stdio.h>

int main(void)
{

    int totalVendas[10];
    int percentualComissao[10];
    char nomeVendedor[10][50];
    int indiceMaiorComissao = 0;
    int indiceMenorComissao = 0;
    double valorTotal[10];
    double somaVendas = 0;
    printf("Digite o total de vendas de cada vendedor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &totalVendas[i]);
    }

    printf("Digite o percentual de comissão de cada vendedor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &percentualComissao[i]);
    }

    printf("Digite o nome de cada vendedor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", nomeVendedor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        valorTotal[i] = totalVendas[i] * (percentualComissao[i] / 100.0);
    }

    for (int i = 0; i < 10; i++)
    {
        somaVendas += totalVendas[i];
    }

    double maiorValor = valorTotal[0];
    double menorValor = valorTotal[0];

    for (int i = 0; i < 10; i++)
    {
        printf("%s comissão: %d\n", nomeVendedor[i], valorTotal[i]);
    }

    printf("Total de vendas de todos os vendedores: %.2f\n", somaVendas);

    for (int i = 0; i < 10; i++)
    {
        if (valorTotal[i] > maiorValor)
        {
            maiorValor = valorTotal[i];
            indiceMaiorComissao = i;
        }

        if (valorTotal[i] < menorValor)
        {
            menorValor = valorTotal[i];
            indiceMenorComissao = i;
        }
    }
    printf("Maior valor á receber: %s, %.2f", nomeVendedor[indiceMaiorComissao], maiorValor);
    printf("Menor valor á receber: %s, %.2f", nomeVendedor[indiceMenorComissao], menorValor);
}
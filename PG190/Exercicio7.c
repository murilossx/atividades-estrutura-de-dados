#include <stdio.h>

int main(void)
{

    double numeros[10];
    double somaPositivos = 0;
    int qntNegativos = 0;

    printf("Digite 10 números reais: \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] < 0)
        {
            qntNegativos++;
        }

        if (numeros[i] > 0)
        {
            somaPositivos += numeros[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", qntNegativos);
    printf("Soma de todos os números positivos: %.2f\n", somaPositivos);
}
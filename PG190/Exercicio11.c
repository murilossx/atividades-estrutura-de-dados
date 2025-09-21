#include <stdio.h>

int main(void)
{
    int vetorPrincipal[10];
    int i;
    int contPares = 0;
    int contImpares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetorPrincipal[i]);

        if (vetorPrincipal[i] % 2 == 0)
        {
            contPares++;
        }
        else
        {
            contImpares++;
        }
    }

    int vetPares[contPares];
    int vetImpares[contImpares];
    int indicePar = 0;
    int indiceImpar = 0;

    for (i = 0; i < 10; i++)
    {
        if (vetorPrincipal[i] % 2 == 0)
        {
            vetPares[indicePar] = vetorPrincipal[i];
            indicePar++;
        }
        else
        {
            vetImpares[indiceImpar] = vetorPrincipal[i];
            indiceImpar++;
        }
    }

    printf("\n Vetores Resultantes \n");

    printf("\nNúmeros Pares:\n");
    for (i = 0; i < contPares; i++)
    {
        printf("%d ", vetPares[i]);
    }

    printf("\n\nNúmeros Impares:\n");
    for (i = 0; i < contImpares; i++)
    {
        printf("%d ", vetImpares[i]);
    }
}
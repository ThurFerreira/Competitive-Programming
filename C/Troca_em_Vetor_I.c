#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, aux;
    int vet[20] = {0};

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 10; i++)
    {
        aux = vet[i];
        vet[i] = vet[19 - i];
        vet[19 - i] = aux;
    }

    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
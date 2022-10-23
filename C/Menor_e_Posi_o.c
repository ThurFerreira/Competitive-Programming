#include <stdio.h>

int main()
{
    int i, x, n, numMenor = 0, position = 0;

    scanf("%d", &n);
    int vet[n];

    scanf("%d", &vet[0]);
    numMenor = vet[0];

    for (i = 1; i < n; i++)
    {
        scanf("%d", &vet[i]);
        
        if (vet[i] < numMenor)
        {
            numMenor = vet[i];
            position = i;
        }
    }

    printf("Menor valor: %d\n", numMenor);
    printf("Posicao: %d\n", position);
    return 0;
}
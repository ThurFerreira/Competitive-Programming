#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, menor=0, position=0;
    int vet[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);

        if (i == 0){
          menor = vet[0];
        }

        if (vet[i] < menor)
        {
            menor = vet[i];
            position = i;
        }
    }

    printf("%d\n", position+1);

    return 0;
}
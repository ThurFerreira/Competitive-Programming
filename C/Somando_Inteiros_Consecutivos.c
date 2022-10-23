#include <stdio.h>
#include <stdlib.h>

// A = 3 e N = 2
// 0 <= i <= N-1
// i entre zero e um
// 3+0 = 3
// 3+1 = 4


int main()
{
    int i, a, n = 0, soma = 0, k, contador = 0;
    int vet[20] = {0};

    while (1)
    {
        scanf("%d %d", &a, &n);

        if (n <= 0)
        {
            while (n <= 0)
            {
                scanf("%d", &n);
            }
        }
        else
        {
            contador++;
        }


        if (contador == 2)
        {
            for (i = 0; i <= (n - 1); i++)
            {
                vet[i] = i;
                soma = soma + (a + vet[i]);
            }

            break;
        }
    }
    printf("%d\n", soma);

    return 0;
}
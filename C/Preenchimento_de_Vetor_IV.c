#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k = 0, x, j, par = 0, impar = 0;
    int vetImpar[5];
    int vetPar[5];
    int num;

    for (j = 0; j < 15; j++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            vetPar[par] = num;
            par++;
        }
        else
        {
            vetImpar[impar] = num;
            impar++;
        }

        if (par == 5)
        {
            for (i = 0; i < 5; i++)
                printf("par[%d] = %d\n", i, vetPar[i]);

            par = 0;
        }

        if (impar == 5)
        {
            for (i = 0; i < 5; i++)
                printf("impar[%d] = %d\n", i, vetImpar[i]);

            impar = 0;
        }
    }

    for (i = 0; i < impar; i++)
        printf("impar[%d] = %d\n", i, vetImpar[i]);

    for (i = 0; i < par; i++)
        printf("par[%d] = %d\n", i, vetPar[i]);
    return 0;
}
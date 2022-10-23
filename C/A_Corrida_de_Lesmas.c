#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nl, faster = 0, position = 0, atual, nivel, loop;
    int vet[500];

    while (scanf("%d", &nl) != EOF)
    {     

        for (i = 0; i < nl; i++)
        {

            scanf("%d ", &vet[i]);

            atual = vet[i];

            if (i == 0)
            {
                faster = vet[0];
            }

            if (vet[i] > faster)
            {
                faster = vet[i];
                position = i;
            }

            if (faster < 10)
            {
                // Nivel 1
                nivel = 1;
            }
            else if (faster > 10 && faster < 20)
            {
                // Nivel 2
                nivel = 2;
            }
            else
            {
                // Nivel 3
                nivel = 3;
            }
        }

        printf("%d\n", nivel);
    }

    return 0;
}
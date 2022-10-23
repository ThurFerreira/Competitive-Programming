#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k = 0, x = 0, y = 0, j = 0, var = 0, aux;

    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        aux = 0;
        scanf("%d", &x);
        scanf("%d", &y);

        if (y > x)
        { //x como maior
            var = x;
            x = y;
            y = var;
        }
        if (!(x == y + 1 || x == y))
        {

            for (j = y + 1; j < x; j++)
            {

                if (j % 2 != 0)
                {
                    aux = aux + j;
                }
            }

            printf("%d\n", aux);
        }
        else
        {
            printf("0\n");
        }
        j = 0;
    }

    return 0;
}
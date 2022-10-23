#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, x, k, h = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        for (k = 1; k < x; k++)
        {

            if (x % k == 0)
            {
                h += k;
            }
        }

        if (h == x)
        {
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
        }

        h=0;
    }

    return 0;
}
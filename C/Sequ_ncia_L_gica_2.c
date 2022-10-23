#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, y, var, k = 0;
    int vet[100001];

    scanf("%d %d", &x, &y);

    if (y > x)
    { //x como maior
        var = x;
        x = y;
        y = var;
    }

    for (i = 1; i <= x; i++)
    {
            k++;
            vet[i] = i;
            printf("%d", vet[i]);

        if(!(i%y == 0))
        {
            printf(" ");
        }
        if (k == y)
        {
            printf("\n");
            k = 0;
        }
    }

    return 0;
}
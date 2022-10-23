#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, n, x, primo = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        for (k = 2; k < x; k++)
        {
            if (x % k == 0)
            {
                primo++;
            }
        } 

        if (primo == 0)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }

        primo = 0;
    }

    return 0;
}
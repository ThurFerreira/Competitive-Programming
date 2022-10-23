#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0, x, y, var = 0, k, h;

    scanf("%d", &n);

    for (k = 0; k < n; k++)
    {
        scanf("%d %d", &x, &y);

        i = 0;
        h = 0;
        while (i < y)
        {

            if (x % 2 != 0)
            {
                h = h + x;
                i++;
            }
            x++;
            
        }

        printf("%d\n", h);
        
    }

    return 0;
}
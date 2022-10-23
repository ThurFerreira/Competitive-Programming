#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, h;

    while (1)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            break;
        }

        i = 0;
        h = 0;
        while (i < 5)
        {

            if (x % 2 == 0)
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
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t, r1, r2;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &r1, &r2);

        printf("%d\n", r1+r2);
    }

    return 0;
}
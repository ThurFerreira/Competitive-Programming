#include <stdio.h>
#include <stdlib.h>

int main()
{

    double S, var = 0, i;

    for (i = 0; i < 100; i++)
    {
        S = 1 / (i + 1);
        var += S;
    }

    printf("%.2lf\n", var);
    return 0;
}
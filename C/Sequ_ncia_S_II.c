#include <stdio.h>
#include <stdlib.h>

int main()
{

    double S=1, var = 0, i=2, x = 3;

    for ( ; x < 39; i*=2)
    {
        S = S + (x/i);
        var += S;
        x+=2;
    }

    printf("%.2lf\n", S);
    return 0;
}
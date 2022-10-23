#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, n;
    unsigned long long int fib[61];
    
    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < 61; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);

    }

    return 0;
}
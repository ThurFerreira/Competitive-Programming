#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, k;
    int vet[10] = {0};

    scanf("%d", &x);
    //printf("N[0] = %d\n", vet[0]);

    for (i = 0; i < 10; i++)
    {
        vet[i] = x;
        printf("N[%d] = %d\n", i, x);
        
        x = x * 2;
    }

return 0;
}
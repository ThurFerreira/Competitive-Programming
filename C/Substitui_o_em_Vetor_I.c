#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x;
    int vet[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);

        if(vet[i] <= 0 ){
            vet[i] = 1;
            printf("X[%d] = 1\n", i);
        }else{
            printf("X[%d] = %d\n", i, vet[i]);
        }
    }
    return 0;
}
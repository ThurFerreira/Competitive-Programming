#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, k=0;
    int vet[1000] = {0};

    scanf("%d", &x);

    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n",i, k);
        k+=1;
        if(k == x){
            k=0;
        }
        
    }

    return 0;
}
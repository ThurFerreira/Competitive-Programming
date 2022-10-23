#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x;
    int vet[2002] = {0};

    while (1){

        scanf("%d", &x);

        if(x == 0)
        {
            break;
        }

        for (i = 1; i <= x; i++){
            vet[i] = i;

            if(x==vet[i]){
                printf("%d\n", vet[i]);
                break;
            }
            
                printf("%d ",vet[i]);

        }
    }
    return 0;
}
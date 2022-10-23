#include <stdio.h>
#include <stdlib.h>
//var = vet[i] + vet[i-1];
int main()
{
    int i, n, var = 0, a=0, b=1;

    scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            var += a,b;
            a = b;
            b = var;
            
            if(i == n){
                printf("%d\n", var);
                break;
            }
            printf("%d ", var);
        }
    
    return 0;
}
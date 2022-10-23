#include <stdio.h>
#include <stdlib.h>
int main() {
    int sum;
    int i, j, n, num;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        
        if(num % 2 == 0)
            printf("0\n");
        else
            printf("1\n");

    }
return 0;
}
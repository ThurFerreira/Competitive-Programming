#include <stdio.h>
#include <stdlib.h>

int main() {
    float var=0,k=0;
    int x;

    while (1){
        scanf("%d", &x);
        
        if(x > 0){
            k++;
        }

        if(x < 0){
            break;
        }
        var = var + x;
        
    }
    printf("%.2f\n",var/k);
return 0;
}
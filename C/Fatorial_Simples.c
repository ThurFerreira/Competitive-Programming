#include <stdio.h>
#include <stdlib.h>

int main() {
        
        int i,n, fat=1;

        scanf("%d", &n);
        
        for(i = n ; i > 1; i--){
                fat = fat*i;
            }

             printf("%d\n", fat);
        
return 0;
}
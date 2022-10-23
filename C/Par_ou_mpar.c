#include <stdio.h>
#include <stdlib.h>

int main() {
        int i, a, num;
        int even=0, odd=0, null=0, negative=0, positive=0; 

        scanf("%d", &a);

        for(i = 0; i < a; i++){
            scanf("%d", &num);
            if(num%2 == 0 && num > 0){
                printf("EVEN POSITIVE\n");
            }else if(num%2 == 0 && num < 0){
                printf("EVEN NEGATIVE\n");
            }if(num%2 != 0 && num > 0){
                printf("ODD POSITIVE\n");
            }else if(num%2 != 0 && num < 0){
                printf("ODD NEGATIVE\n");
            }if(num == 0)
                printf("NULL\n");
        }
return 0;
}
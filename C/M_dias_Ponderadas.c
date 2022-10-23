#include <stdio.h>
#include <stdlib.h>

int main() {
        
        int a,i;
        float b,c,d,media;

        scanf("%d", &a);

        for (i = 0; i < a; i++){
          scanf("%f %f %f",&b,&c,&d);
          media = (b*2 + c*3 + d*5)/10;
          printf("%.1f\n", media);
          
        }
 
return 0;
}
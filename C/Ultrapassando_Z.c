#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, z, var=0, k = 1;

        scanf("%d", &x);
        scanf("%d", &z);

        while (z <= x)
        {
            scanf("%d", &z);
        }
        
            for (i = x; i <= z; i++)
        {

            var+=i;

            if(var < z){
                k++;
                
            }

            if(var == z){
                break;
            }
      
        }
              printf("%d\n", k);
    
    return 0;
}
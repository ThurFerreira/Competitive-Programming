#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, k, repeat=0;
    float nota, var, var1;

    var = 0;
    var1 = 0;
    while (1)
    {
        
        scanf("%f", &nota);
        
        if (nota < 0 || nota > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            var = var + nota;
            i++;
        }
        if(i == 2){
            printf("media = %.2f\n", var / 2);
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &repeat);
            if(repeat < 1 || repeat > 2){
                while(repeat < 1 || repeat > 2){
                     printf("novo calculo (1-sim 2-nao)\n");
                     scanf("%d", &repeat);
                }
            }if(repeat == 2){
                break;
            }else if(repeat == 1){
                var = 0;
                i = 0;
            }




            i = 0;
            var = 0;
        }

    }

    return 0;
}
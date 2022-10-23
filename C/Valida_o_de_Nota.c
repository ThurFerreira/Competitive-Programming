#include <stdio.h>
#include <stdlib.h>

int main() {
        int i, k, repeat;
        float nota, var,var1;

        inicio:
        var = 0;
        var1 = 0;
        while(i < 1000){
            scanf("%f", &nota);

            if(nota < 0 || nota > 10){
                printf("nota invalida\n");
        }else{
            var = var + nota;
            break;
        }
        i++;
    }while(1){
            scanf("%f", &nota);

            if(nota < 0 || nota > 10){
                printf("nota invalida\n");
        }else{
            var1 = var1 + nota;
            break;
        }
        i++;
    }
        
        printf("media = %.2f\n", (var+var1)/2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &repeat);
        
        if(repeat > 2){
            goto denovo;
        }else if(repeat == 1){
            goto inicio;
        }else{
            system("pause");
        }
            
return 0;
}
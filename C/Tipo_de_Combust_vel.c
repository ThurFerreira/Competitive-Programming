#include <stdio.h>
#include <stdlib.h>

int main() {
        int vet[5] = {0};
        int i=0, gas,diesel=0,alc;

        while(1){
            scanf("%d", &vet[i]);

            if(vet[i] == 1){
                alc++;
            }else if(vet[i] == 2){
                gas++;
            }else if(vet[i] == 3) {
                diesel++;
            }else if(vet[i] == 4){
                break;
            }else if(i < 0 || i > 4){
                scanf("%d", &vet[i]);
            }

        }

        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alc);
        printf("Gasolina: %d\n", gas);
        printf("Diesel: %d\n", diesel);
           

return 0;
}
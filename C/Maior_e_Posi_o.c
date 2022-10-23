#include <stdio.h>
#include <stdlib.h>

int main() {

        int a,i,k=0, numUsuario,numMaior,var=0, position=1;
        int vet[100] = {0};

        for(i = 0; i < 100; i++){
            scanf("%d", &vet[i]);
            
            if(vet[i] >= numMaior){
                 numMaior = vet[i];
                 position = i;
             }
        }
     
         printf("%d\n", vet[position]);
         printf("%d\n", position+1);

return 0;
}
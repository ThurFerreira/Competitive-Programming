#include <stdio.h>
#include <stdlib.h>

int main() {

        int x,y,G=0,I=0,repeat=0,jogos=0,E=0;
        // x inter
        // y gremio

        while(1){
            jogos++;
            scanf("%d %d",&x,&y);


            if(x > y){
                I++;
            }else if(y > x){
                G++;
            }else{
                E++;
            }

            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&repeat);
            
             if(repeat == 2){
                break;
            }
        }

        printf("%d grenais\n", jogos);
        printf("Inter:%d\n", I);
        printf("Gremio:%d\n", G);
        printf("Empates:%d\n", E);

        if(I > G){
            printf("Inter venceu mais\n");
        }else{
            printf("Gremio vencei mais\n", E);
        }

return 0;
}
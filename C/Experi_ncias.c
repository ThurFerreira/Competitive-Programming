#include <stdio.h>
#include <stdlib.h>

int main() {

        int i,a,cob,S,C,R;
        int total = 0;
        float nCobC = 0,nCobS = 0,nCobR = 0;
        float percentC, percentR, percentS;

        char T;

        scanf("%d", &a);

        for(i = 0; i < a; i++){
            scanf("%d %c", &cob, &T);

             total = total + cob;

            if(T == 'C'){nCobC = nCobC + cob;}    
            if(T == 'S'){nCobS = nCobS + cob;}   
            if(T == 'R'){nCobR = nCobR + cob;}
      
        }

            percentC = (nCobC/total)*100;
            percentR = (nCobR/total)*100;
            percentS = (nCobS/total)*100;

        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %.0f\n", nCobC);
        printf("Total de ratos: %.0f\n", nCobR);
        printf("Total de sapos: %.0f\n", nCobS);
        printf("Percentual de coelhos: %.2f %%\n", percentC);
        printf("Percentual de ratos: %.2f %%\n", percentR);
        printf("Percentual de sapos: %.2f %%\n", percentS);

return 0;
}